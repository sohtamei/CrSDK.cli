#ifndef CAMERADEVICE_H
#define CAMERADEVICE_H

#if defined(__linux__)
// Use errno_t if available, define it otherwise
#ifndef __STDC_LIB_EXT1__
typedef int errno_t;
#else
#define  __STDC_WANT_LIB_EXT1__ 1
#endif

// End Linux definitions
#endif

#include <atomic>
#include <cstdint>
#include <future>
#include <mutex>
#include <cstring>
#include "CRSDK/CameraRemote_SDK.h"
#include "CRSDK/IDeviceCallback.h"
#include "ConnectionInfo.h"
#include "PropertyValueTable.h"
#include "Text.h"
#include "MessageDefine.h"

namespace cli
{
class CameraDevice : public SCRSDK::IDeviceCallback
{
public:
    CameraDevice() = delete;
    CameraDevice(std::int32_t no, SCRSDK::ICrCameraObjectInfo const* camera_info);
    ~CameraDevice();

    bool getfingerprint();
    bool connect(SCRSDK::CrSdkControlMode openMode, SCRSDK::CrReconnectingSet reconnect);
    bool disconnect();
    bool release();

    CrInt32u get_sshsupport();
    SCRSDK::CrSdkControlMode get_sdkmode();

    /*** Shooting operations ***/

    void s1_shooting();
    void af_shutter();

    // Check if this device is connected
    bool is_connected() const;
    std::uint32_t ip_address() const;
    text ip_address_fmt() const;
    text mac_address() const;
    std::int16_t pid() const;
    text get_id();

    std::int32_t get_number() { return m_number; }
    text get_model() { return text(m_info->GetModel()); }
    bool is_getfingerprint() { return !m_fingerprint.empty(); };
    bool is_setpassword() { return !m_userPassword.empty(); };

public:
    // Inherited via IDeviceCallback
    virtual void OnConnected(SCRSDK::DeviceConnectionVersioin version) override;
    virtual void OnDisconnected(CrInt32u error) override;
    virtual void OnPropertyChanged() override;
    virtual void OnLvPropertyChanged() override;
    virtual void OnCompleteDownload(CrChar* filename, CrInt32u type) override;
    virtual void OnWarning(CrInt32u warning) override;
    virtual void OnWarningExt(CrInt32u warning, CrInt32 param1, CrInt32 param2, CrInt32 param3) override;
    virtual void OnError(CrInt32u error) override;
    virtual void OnPropertyChangedCodes(CrInt32u num, CrInt32u* codes) override;
    virtual void OnLvPropertyChangedCodes(CrInt32u num, CrInt32u* codes) override;
    virtual void OnNotifyContentsTransfer(CrInt32u notify, SCRSDK::CrContentHandle contentHandle, CrChar* filename) override;

private:
    std::int32_t m_number;
    SCRSDK::ICrCameraObjectInfo* m_info;
    std::int64_t m_device_handle;
    std::atomic<bool> m_connected;
    ConnectionType m_conn_type;
    NetworkInfo m_net_info;
    UsbInfo m_usb_info;
    SCRSDK::CrSdkControlMode m_modeSDK;
    bool m_spontaneous_disconnection;
    std::string m_fingerprint;
    std::string m_userPassword;
    
	SCRSDK::CrDevicePropertyCode m_respPropId;
	void (*m_cb_respProp)(SCRSDK::CrDevicePropertyCode id);
	std::promise<void>* m_eventPromise;

public:
	bool set_save_info(text prefix) const;
//	std::int32_t get_live_view(uint8_t* buf[]);

	void load_liveview_properties(std::uint32_t num = 0, std::uint32_t* codes = nullptr);
	void load_properties(std::uint32_t num = 0, std::uint32_t* codes = nullptr);

	SCRSDK::CrDevicePropertyCode Prop_tag2id(std::string tag) const;

	// GetPropとSetPropがnamespace=cli外のRemoteCli.cppでエラーになる
	struct PropertyValue* GetProp_(SCRSDK::CrDevicePropertyCode id);
	std::int32_t SetProp_(SCRSDK::CrDevicePropertyCode id, std::uint64_t value);
	std::int32_t SetProp_(SCRSDK::CrDevicePropertyCode id, std::string _text);
	std::int32_t setProp(SCRSDK::CrDevicePropertyCode id, std::uint64_t value);
	std::int32_t waitProp(SCRSDK::CrDevicePropertyCode id, std::int32_t timeoutMs);

	void GetAvailablePropList(std::vector<std::string>& propList);

	SCRSDK::CrCommandId Cmd_tag2id(std::string tag) const;

	std::int32_t SendCommand(SCRSDK::CrCommandId cmd, std::string ope) const;
	std::int32_t SendCommand(std::string _text, std::string ope) const;

private:
	void parse_prop(SCRSDK::CrDeviceProperty& devProp, SCRSDK::CrDevicePropertyCode id);
	void parse_propStr(SCRSDK::CrDeviceProperty& devProp, SCRSDK::CrDevicePropertyCode id);

	std::string PropCurrentText(SCRSDK::CrDevicePropertyCode id) const;

	void notifyEvent(SCRSDK::CrDevicePropertyCode id);
	void sendProp(SCRSDK::CrDevicePropertyCode id);
};
} // namespace cli


inline errno_t MemCpyEx(void* result, const void* source, size_t type_size)
{
#if (defined(_WIN32) || defined(_WIN64))
    return memcpy_s(result, type_size, source, type_size);
#else
    std::memcpy(result, source, type_size);
    return 0;
#endif
}

// handler
void SendProp(SCRSDK::CrDevicePropertyCode id);
void ErrorProp(SCRSDK::CrDevicePropertyCode id, std::string message="");

#define MAC_MAX_PATH 255

#endif // !CAMERADEVICE_H
