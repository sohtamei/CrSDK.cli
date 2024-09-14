#include <cstdlib>
#if defined(USE_EXPERIMENTAL_FS)
#include <experimental/filesystem>
namespace fs = std::experimental::filesystem;
#else
#include <filesystem>
namespace fs = std::filesystem;
#if defined(__APPLE__)
#include <unistd.h>
#endif
#endif

#include <cstdint>
#include <iomanip>
#include <iostream>
#include <thread>
#include "CRSDK/CameraRemote_SDK.h"
#include "CameraDevice.h"
#include "Text.h"

namespace SDK = SCRSDK;

typedef std::shared_ptr<cli::CameraDevice> CameraDevicePtr;
CameraDevicePtr camera = NULL;

std::vector<CameraDevicePtr> cameraList; // all

#if defined (_WIN32) || defined(_WIN64)
static std::wstring_convert<std::codecvt_utf8<wchar_t>, wchar_t> wstring_convert;
#endif

std::vector<std::string> split_naive(const std::string &s, char delim) {
    std::vector<std::string> elems;
    std::string item;
    for (char ch: s) {
        if (ch == delim) {
            if (!item.empty())
                elems.push_back(item);
            item.clear();
        }
        else {
            item += ch;
        }
    }
    if (!item.empty())
        elems.push_back(item);
    return elems;
}

std::string convVal2Text(struct cli::PropertyValue* prop, std::uint64_t value)
{
	if(prop->mapEnum) {
		auto iter = prop->mapEnum->find(value);
		if(iter != end(*prop->mapEnum)) {
			return iter->second;
		}
	} else if(prop->formatFunc) {
		return prop->formatFunc(value);
	}
	return std::to_string(value);
}

//int remoteCli_init(void)
int main(void)
{
    // Change global locale to native locale
//  std::locale::global(std::locale(""));
    std::locale::global(std::locale::classic());

    // Make the stream's locale the same as the current global locale
    cli::tin.imbue(std::locale());
    cli::tout.imbue(std::locale());

    auto init_success = SDK::Init();
    if (!init_success) {
        std::cout << "Failed to initialize Remote SDK. Terminating.\n";
        SDK::Release();
        return -1;
    }

    std::cout << "Enumerate connected camera devices...\n";
    SDK::ICrEnumCameraObjectInfo* camera_list = nullptr;
    auto enum_status = SDK::EnumCameraObjects(&camera_list);
    if (CR_FAILED(enum_status) || camera_list == nullptr) {
        std::cout << "No cameras detected. Connect a camera and retry.\n";
        SDK::Release();
        return -1;
    }
    auto ncams = camera_list->GetCount();
    std::cout << "Camera enumeration successful. " << ncams << " detected.\n";

    for (CrInt32u i = 0; i < ncams; ++i) {
        auto camera_info = camera_list->GetCameraObjectInfo(i);
      #if defined (_WIN32) || defined(_WIN64)
        std::string model = wstring_convert.to_bytes(camera_info->GetModel());
        std::string id = wstring_convert.to_bytes((TCHAR*)camera_info->GetId());
      #else
        std::string model = std::string(camera_info->GetModel());
        std::string id = std::string((char*)camera_info->GetId());
      #endif
        std::cout << '[' << i + 1 << "] " << model << " (" << id << ")\n";
    }

    CrInt32u no = 1;
    if(ncams >= 2) {
        std::cout << "Connect to camera with input number...\n";
        std::cout << "input> ";
        std::string connectNo;
        std::getline(std::cin, connectNo);
        std::cout << '\n';

        no = stoi(connectNo);
        if(no < 1 || no > ncams) {
            std::cout << "error!\n";
            no = 1;
        }
    }
    std::int32_t cameraNumUniq = 1;

    std::cout << "Connect to selected camera...\n";
    auto* camera_info = camera_list->GetCameraObjectInfo(no - 1);

    camera = CameraDevicePtr(new cli::CameraDevice(cameraNumUniq, camera_info));
    cameraList.push_back(camera); // add 1st
    camera_list->Release();

    if (camera->is_connected()) {
        std::cout << "Please disconnect\n";
    } else {
         camera->connect(SDK::CrSdkControlMode_Remote, SDK::CrReconnecting_ON);
    }
/*
    if (SDK::CrSdkControlMode_Remote != camera->get_sdkmode()) {
        goto Error;
    }
*/
    if ((SDK::CrSSHsupportValue::CrSSHsupport_ON == camera->get_sshsupport()) && (false == camera->is_getfingerprint())) {
        // Fingerprint is incorrect
		if (camera->is_connected()) camera->disconnect();
		SDK::Release();
		return 0;
    }

	std::this_thread::sleep_for(std::chrono::milliseconds(1000));

	camera->load_properties();
	auto id = SDK::CrDevicePropertyCode::CrDeviceProperty_LiveView_Image_Quality;
	int ret = camera->SetProp_(id, "Low");
	if(ret) {
		if (camera->is_connected()) {
			camera->disconnect();
		}
		std::cout << "ERROR: Please reboot this command(" << __LINE__ << ").\n";
		SDK::Release();
		return -1;
	}
	camera->waitProp(id, 1000);

	std::cout << "usage:set <DP name> <param>\n";
	std::cout << "      get <DP name>\n";
	std::cout << "      info <DP name>\n";
	std::cout << "      set <command name> <Down|Up|DownUp>\n";
	std::cout << "To exit, please enter 'q'.\n";

	while(1) {
		std::string inputLine;
		std::getline(std::cin, inputLine);
		if(inputLine == "q" || inputLine == "Q") {
			if (camera->is_connected()) {
				camera->disconnect();
			}
			SDK::Release();
			return 0;
		}

		std::vector inputs = split_naive(inputLine, ' ');
		if(inputs.size() < 2)
			continue;

		auto id = camera->Prop_tag2id(inputs[1]);
		if(id) {
			auto prop = camera->GetProp_(id);
			if((prop->dataType & SCRSDK::CrDataType::CrDataType_ArrayBit) && prop->possible.size() >= 1) {
				if(inputs[0] == "get") {
					std::cout << convVal2Text(prop, prop->current) << std::endl;
				} else if(inputs[0] == "info") {
					for(int i = 0; i < prop->possible.size(); i++) {
						std::cout << convVal2Text(prop, prop->possible[i]) << ((prop->current==prop->possible[i])?" *":"") << std::endl;
					}
				} else if(inputs[0] == "set" && inputs.size() >= 3) {
					ret = camera->SetProp_(id, inputs[2]);
					if(!ret) ret = camera->waitProp(id, 2000);
					if(!ret) std::cout << "OK\n";
				}
			} else {
				if(inputs[0] == "get") {
					std::cout << convVal2Text(prop, prop->current) << std::endl;
				} else if(inputs[0] == "info") {
					std::cout << convVal2Text(prop, prop->current) << std::endl;
					if((prop->dataType & SCRSDK::CrDataType::CrDataType_RangeBit) && prop->possible.size() >= 2) {
						std::cout << "min:" << std::to_string(prop->possible[0]);
						std::cout << ",max:" << std::to_string(prop->possible[1]);
						if(prop->possible.size() >= 3)
							std::cout << ",step:" << std::to_string(prop->possible[2]);
						std::cout << std::endl;
					}
				} else if(inputs[0] == "set" && inputs.size() >= 3) {
					try {
						ret = camera->SetProp_(id, stoi(inputs[2]));
						if(!ret) ret = camera->waitProp(id, 2000);
						if(!ret) std::cout << "OK\n";
					} catch(std::exception const& e) {
						std::cerr << "Error: " << e.what() << std::endl;
					}
				}
			}
			continue;
		}

		auto cmd = camera->Cmd_tag2id(inputs[1]);
		if((int)cmd >= 0) {
			if(inputs[0] == "set" && inputs.size() >= 3) {
				camera->SendCommand(cmd, inputs[2]);
			}
			continue;
		}

		std::cout << "unknown DP nor CMD\n";
	}

	return 0;

Error:
    if (camera->is_connected()) {
        camera->disconnect();
    }

    std::cout << "Release SDK resources.\n";
    SDK::Release();

    std::cout << "Exiting application.\n";
    return -1;
}

void SendProp(SCRSDK::CrDevicePropertyCode id)
{
	auto prop = camera->GetProp_(id);
	if(prop)
		std::cout << prop->tag << "=" << convVal2Text(prop, prop->current) << std::endl;
	else
		std::cout << "unknown(" << std::hex << id << ")" << "\n";
}

void ErrorProp(SCRSDK::CrDevicePropertyCode id, std::string message)
{
	auto prop = camera->GetProp_(id);
	std::cout << prop->tag << " - Error" << std::endl;
}
