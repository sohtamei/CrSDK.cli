#if defined (_WIN32) || defined(_WIN64)

#include <SDKDDKVer.h>

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
// Windows Header Files:
#include <windows.h>
#include <memory>
#include <map>

// TODO: reference additional headers your program requires here
#pragma warning (push)
#pragma warning (disable:4819)	// warning C4819: The file contains a character that cannot be represented in the current code page (932). Save the file in Unicode format to prevent data loss
#pragma warning (pop)
#endif

#include <iostream>
#include "CameraDevice.h"
#include <chrono>
#if defined(__GNUC__) && __GNUC__ < 8
#include <experimental/filesystem>
namespace fs = std::experimental::filesystem;
#else
#include <filesystem>
namespace fs = std::filesystem;
#endif
#include <fstream>
#include <thread>
#include "CRSDK/CrDeviceProperty.h"
#include "Text.h"

#include <future>
#include <chrono>


#if defined(__APPLE__) || defined(__linux__)
#include <sys/stat.h>
#include <vector>
#include <dirent.h>
#if !defined(NDEBUG)
  #define _DEBUG
#endif
#endif


#if defined(__APPLE__) || defined(__linux__)
#include <termios.h>
#include <unistd.h>
#include <stdio.h>
#else
#include <conio.h>
#endif


// Enumerator
enum Password_Key {

#if defined(__APPLE__) || defined(__linux__)
    Password_Key_Back = 127,
    Password_Key_Enter = 10
#else
    Password_Key_Back = 8,
    Password_Key_Enter = 13
#endif

};

#if defined(__APPLE__) || defined(__linux__)
/* reads from keypress, doesn't echo */
int getch_for_Nix(void)
{
    struct termios oldattr, newattr;
    int iptCh;
    tcgetattr(STDIN_FILENO, &oldattr);
    newattr = oldattr;
    newattr.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newattr);
    iptCh = getchar();
    tcsetattr(STDIN_FILENO, TCSANOW, &oldattr);
    return iptCh;
}
#endif


namespace SDK = SCRSDK;
using namespace std::chrono_literals;

#if defined (_WIN32) || defined(_WIN64)
static std::wstring_convert<std::codecvt_utf8<wchar_t>, wchar_t> wstring_convert;
#else
static std::wstring_convert<std::codecvt_utf8_utf16<char16_t>, char16_t> wstring_convert;
#endif

namespace cli
{

using PCode = SDK::CrDevicePropertyCode;

#include "CrDeviceProperty.cpp"		// map_xx実装

//	{ SDK::CrCommandId::CrCommandId_\1, "\1" },
std::map<SDK::CrCommandId, std::string> Cmds {
	{ SDK::CrCommandId::CrCommandId_Release, "Release" },
	{ SDK::CrCommandId::CrCommandId_MovieRecord, "MovieRecord" },
	{ SDK::CrCommandId::CrCommandId_CancelShooting, "CancelShooting" },
	{ SDK::CrCommandId::CrCommandId_MediaFormat, "MediaFormat" },
	{ SDK::CrCommandId::CrCommandId_MediaQuickFormat, "MediaQuickFormat" },
	{ SDK::CrCommandId::CrCommandId_CancelMediaFormat, "CancelMediaFormat" },
	{ SDK::CrCommandId::CrCommandId_S1andRelease, "S1andRelease" },
	{ SDK::CrCommandId::CrCommandId_CancelContentsTransfer, "CancelContentsTransfer" },
	{ SDK::CrCommandId::CrCommandId_CameraSettingsReset, "CameraSettingsReset" },
	{ SDK::CrCommandId::CrCommandId_APS_C_or_Full_Switching, "APS_C_or_Full_Switching" },
	{ SDK::CrCommandId::CrCommandId_MovieRecButtonToggle, "MovieRecButtonToggle" },
	{ SDK::CrCommandId::CrCommandId_CancelRemoteTouchOperation, "CancelRemoteTouchOperation" },
	{ SDK::CrCommandId::CrCommandId_PixelMapping, "PixelMapping" },
	{ SDK::CrCommandId::CrCommandId_TimeCodePresetReset, "TimeCodePresetReset" },
	{ SDK::CrCommandId::CrCommandId_UserBitPresetReset, "UserBitPresetReset" },
	{ SDK::CrCommandId::CrCommandId_SensorCleaning, "SensorCleaning" },
	{ SDK::CrCommandId::CrCommandId_PictureProfileReset, "PictureProfileReset" },
	{ SDK::CrCommandId::CrCommandId_CreativeLookReset, "CreativeLookReset" },
	{ SDK::CrCommandId::CrCommandId_PowerOff, "PowerOff" },
	{ SDK::CrCommandId::CrCommandId_CancelFocusPosition, "CancelFocusPosition" },
	{ SDK::CrCommandId::CrCommandId_FlickerScan, "FlickerScan" },
};

std::map<PCode, struct PropertyValue> Prop {

//(.*)\t(.*)\t(.*)
//	{ PCode::CrDeviceProperty_\1,	{ -1, "\1", &map_\2, format_\3, } },
//(format_,|\&map_,)
//0,

	{ PCode::CrDeviceProperty_AEL,	{ -1, "AEL", &map_CrLockIndicator, 0, } },
	{ PCode::CrDeviceProperty_AF_Area_Position,	{ -1, "AF_Area_Position", 0, 0, } },
	{ PCode::CrDeviceProperty_AFAssist,	{ -1, "AFAssist", &map_CrAFAssist, 0, } },
	{ PCode::CrDeviceProperty_AFFreeSizeAndPositionSetting,	{ -1, "AFFreeSizeAndPositionSetting", 0, 0, } },
	{ PCode::CrDeviceProperty_AFIlluminator,	{ -1, "AFIlluminator", &map_CrAFIlluminator, 0, } },
	{ PCode::CrDeviceProperty_AFInFocusMagnifier,	{ -1, "AFInFocusMagnifier", &map_CrAFInFocusMagnifier, 0, } },
	{ PCode::CrDeviceProperty_AFSubjShiftSens,	{ -1, "AFSubjShiftSens", 0, 0, } },
	{ PCode::CrDeviceProperty_AFTrackForSpeedChange,	{ -1, "AFTrackForSpeedChange", &map_CrAFTrackForSpeedChange, 0, } },
	{ PCode::CrDeviceProperty_AFTrackingSensitivity,	{ -1, "AFTrackingSensitivity", &map_CrAFTrackingSensitivity, 0, } },
	{ PCode::CrDeviceProperty_AFTransitionSpeed,	{ -1, "AFTransitionSpeed", 0, 0, } },
	{ PCode::CrDeviceProperty_AFWithShutter,	{ -1, "AFWithShutter", &map_CrAFWithShutter, 0, } },
	{ PCode::CrDeviceProperty_AntidustShutterWhenPowerOff,	{ -1, "AntidustShutterWhenPowerOff", &map_CrAntidustShutterWhenPowerOff, 0, } },
	{ PCode::CrDeviceProperty_ApertureDriveInAF,	{ -1, "ApertureDriveInAF", &map_CrApertureDriveInAF, 0, } },
	{ PCode::CrDeviceProperty_APS_C_or_Full_SwitchingEnableStatus,	{ -1, "APS_C_or_Full_SwitchingEnableStatus", &map_CrAPS_C_or_Full_SwitchingEnableStatus, 0, } },
	{ PCode::CrDeviceProperty_APS_C_or_Full_SwitchingSetting,	{ -1, "APS_C_or_Full_SwitchingSetting", &map_CrAPS_C_or_Full_SwitchingSetting, 0, } },
	{ PCode::CrDeviceProperty_APS_C_S35,	{ -1, "APS_C_S35", &map_CrAPS_C_S35, 0, } },
	{ PCode::CrDeviceProperty_AspectRatio,	{ -1, "AspectRatio", &map_CrAspectRatioIndex, 0, } },
	{ PCode::CrDeviceProperty_AssignableButton1,	{ -1, "AssignableButton1", &map_CrAssignableButton, 0, } },
	{ PCode::CrDeviceProperty_AssignableButton10,	{ -1, "AssignableButton10", &map_CrAssignableButton, 0, } },
	{ PCode::CrDeviceProperty_AssignableButton11,	{ -1, "AssignableButton11", &map_CrAssignableButton, 0, } },
	{ PCode::CrDeviceProperty_AssignableButton2,	{ -1, "AssignableButton2", &map_CrAssignableButton, 0, } },
	{ PCode::CrDeviceProperty_AssignableButton3,	{ -1, "AssignableButton3", &map_CrAssignableButton, 0, } },
	{ PCode::CrDeviceProperty_AssignableButton4,	{ -1, "AssignableButton4", &map_CrAssignableButton, 0, } },
	{ PCode::CrDeviceProperty_AssignableButton5,	{ -1, "AssignableButton5", &map_CrAssignableButton, 0, } },
	{ PCode::CrDeviceProperty_AssignableButton6,	{ -1, "AssignableButton6", &map_CrAssignableButton, 0, } },
	{ PCode::CrDeviceProperty_AssignableButton7,	{ -1, "AssignableButton7", &map_CrAssignableButton, 0, } },
	{ PCode::CrDeviceProperty_AssignableButton8,	{ -1, "AssignableButton8", &map_CrAssignableButton, 0, } },
	{ PCode::CrDeviceProperty_AssignableButton9,	{ -1, "AssignableButton9", &map_CrAssignableButton, 0, } },
	{ PCode::CrDeviceProperty_AssignableButtonIndicator1,	{ -1, "AssignableButtonIndicator1", &map_CrAssignableButtonIndicator, 0, } },
	{ PCode::CrDeviceProperty_AssignableButtonIndicator10,	{ -1, "AssignableButtonIndicator10", &map_CrAssignableButtonIndicator, 0, } },
	{ PCode::CrDeviceProperty_AssignableButtonIndicator11,	{ -1, "AssignableButtonIndicator11", &map_CrAssignableButtonIndicator, 0, } },
	{ PCode::CrDeviceProperty_AssignableButtonIndicator2,	{ -1, "AssignableButtonIndicator2", &map_CrAssignableButtonIndicator, 0, } },
	{ PCode::CrDeviceProperty_AssignableButtonIndicator3,	{ -1, "AssignableButtonIndicator3", &map_CrAssignableButtonIndicator, 0, } },
	{ PCode::CrDeviceProperty_AssignableButtonIndicator4,	{ -1, "AssignableButtonIndicator4", &map_CrAssignableButtonIndicator, 0, } },
	{ PCode::CrDeviceProperty_AssignableButtonIndicator5,	{ -1, "AssignableButtonIndicator5", &map_CrAssignableButtonIndicator, 0, } },
	{ PCode::CrDeviceProperty_AssignableButtonIndicator6,	{ -1, "AssignableButtonIndicator6", &map_CrAssignableButtonIndicator, 0, } },
	{ PCode::CrDeviceProperty_AssignableButtonIndicator7,	{ -1, "AssignableButtonIndicator7", &map_CrAssignableButtonIndicator, 0, } },
	{ PCode::CrDeviceProperty_AssignableButtonIndicator8,	{ -1, "AssignableButtonIndicator8", &map_CrAssignableButtonIndicator, 0, } },
	{ PCode::CrDeviceProperty_AssignableButtonIndicator9,	{ -1, "AssignableButtonIndicator9", &map_CrAssignableButtonIndicator, 0, } },
	{ PCode::CrDeviceProperty_AudioInputMasterLevel,	{ -1, "AudioInputMasterLevel", 0, 0, } },
	{ PCode::CrDeviceProperty_AudioLevelDisplay,	{ -1, "AudioLevelDisplay", &map_CrAudioLevelDisplay, 0, } },
	{ PCode::CrDeviceProperty_AudioRecording,	{ -1, "AudioRecording", &map_CrAudioRecording, 0, } },
	{ PCode::CrDeviceProperty_AudioSignals,	{ -1, "AudioSignals", &map_CrAudioSignals, 0, } },
	{ PCode::CrDeviceProperty_AudioSignalsStartEnd,	{ -1, "AudioSignalsStartEnd", &map_CrAudioSignalsStartEnd, 0, } },
	{ PCode::CrDeviceProperty_AudioSignalsVolume,	{ -1, "AudioSignalsVolume", 0, 0, } },
	{ PCode::CrDeviceProperty_AutoPowerOffTemperature,	{ -1, "AutoPowerOffTemperature", &map_CrAutoPowerOffTemperature, 0, } },
	{ PCode::CrDeviceProperty_AutoReview,	{ -1, "AutoReview", 0, 0, } },
	{ PCode::CrDeviceProperty_AutoSlowShutter,	{ -1, "AutoSlowShutter", &map_CrAutoSlowShutter, 0, } },
	{ PCode::CrDeviceProperty_AutoSwitchMedia,	{ -1, "AutoSwitchMedia", &map_CrAutoSwitchMedia, 0, } },
	{ PCode::CrDeviceProperty_AWB,	{ -1, "AWB", &map_CrAWB, 0, } },
	{ PCode::CrDeviceProperty_AWBL,	{ -1, "AWBL", &map_CrLockIndicator, 0, } },
	{ PCode::CrDeviceProperty_BaseISOSwitchEI,	{ -1, "BaseISOSwitchEI", 0, 0, } },
	{ PCode::CrDeviceProperty_BaseLookImportOperationEnableStatus,	{ -1, "BaseLookImportOperationEnableStatus", &map_CrBaseLookImportOperationEnableStatus, 0, } },
	{ PCode::CrDeviceProperty_BaseLookValue,	{ -1, "BaseLookValue", 0, 0, } },
	{ PCode::CrDeviceProperty_BatteryLevel,	{ -1, "BatteryLevel", &map_CrBatteryLevel, 0, } },
	{ PCode::CrDeviceProperty_BatteryRemain,	{ -1, "BatteryRemain", 0, 0, } },
	{ PCode::CrDeviceProperty_BatteryRemainDisplayUnit,	{ -1, "BatteryRemainDisplayUnit", &map_CrBatteryRemainDisplayUnit, 0, } },
	{ PCode::CrDeviceProperty_BatteryRemainingInMinutes,	{ -1, "BatteryRemainingInMinutes", 0, 0, } },
	{ PCode::CrDeviceProperty_BatteryRemainingInVoltage,	{ -1, "BatteryRemainingInVoltage", 0, 0, } },
	{ PCode::CrDeviceProperty_BodyKeyLock,	{ -1, "BodyKeyLock", &map_CrBodyKeyLock, 0, } },
	{ PCode::CrDeviceProperty_BracketOrder,	{ -1, "BracketOrder", &map_CrBracketOrder, 0, } },
	{ PCode::CrDeviceProperty_BulbExposureTimeSetting,	{ -1, "BulbExposureTimeSetting", 0, 0, } },
	{ PCode::CrDeviceProperty_BulbTimerSetting,	{ -1, "BulbTimerSetting", &map_CrBulbTimerSetting, 0, } },
	{ PCode::CrDeviceProperty_ButtonAssignmentAssignable1,	{ -1, "ButtonAssignmentAssignable1", 0, 0, } },
	{ PCode::CrDeviceProperty_ButtonAssignmentAssignable10,	{ -1, "ButtonAssignmentAssignable10", 0, 0, } },
	{ PCode::CrDeviceProperty_ButtonAssignmentAssignable11,	{ -1, "ButtonAssignmentAssignable11", 0, 0, } },
	{ PCode::CrDeviceProperty_ButtonAssignmentAssignable2,	{ -1, "ButtonAssignmentAssignable2", 0, 0, } },
	{ PCode::CrDeviceProperty_ButtonAssignmentAssignable3,	{ -1, "ButtonAssignmentAssignable3", 0, 0, } },
	{ PCode::CrDeviceProperty_ButtonAssignmentAssignable4,	{ -1, "ButtonAssignmentAssignable4", 0, 0, } },
	{ PCode::CrDeviceProperty_ButtonAssignmentAssignable5,	{ -1, "ButtonAssignmentAssignable5", 0, 0, } },
	{ PCode::CrDeviceProperty_ButtonAssignmentAssignable6,	{ -1, "ButtonAssignmentAssignable6", 0, 0, } },
	{ PCode::CrDeviceProperty_ButtonAssignmentAssignable7,	{ -1, "ButtonAssignmentAssignable7", 0, 0, } },
	{ PCode::CrDeviceProperty_ButtonAssignmentAssignable8,	{ -1, "ButtonAssignmentAssignable8", 0, 0, } },
	{ PCode::CrDeviceProperty_ButtonAssignmentAssignable9,	{ -1, "ButtonAssignmentAssignable9", 0, 0, } },
	{ PCode::CrDeviceProperty_ButtonAssignmentLensAssignable1,	{ -1, "ButtonAssignmentLensAssignable1", 0, 0, } },
	{ PCode::CrDeviceProperty_CameraButtonFunction,	{ -1, "CameraButtonFunction", &map_CrCameraButtonFunction, 0/*TBD*/, } },
	{ PCode::CrDeviceProperty_CameraButtonFunctionMulti,	{ -1, "CameraButtonFunctionMulti", &map_CrCameraButtonFunction, 0, } },
	{ PCode::CrDeviceProperty_CameraButtonFunctionStatus,	{ -1, "CameraButtonFunctionStatus", &map_CrCameraButtonFunctionStatus, 0, } },
	{ PCode::CrDeviceProperty_CameraDialFunction,	{ -1, "CameraDialFunction", &map_CrCameraDialFunction, 0, } },
	{ PCode::CrDeviceProperty_CameraEframing,	{ -1, "CameraEframing", &map_CrCameraEframing, 0, } },
	{ PCode::CrDeviceProperty_CameraErrorCautionStatus,	{ -1, "CameraErrorCautionStatus", &map_CrCameraErrorCautionStatus, 0, } },
	{ PCode::CrDeviceProperty_CameraOperatingMode,	{ -1, "CameraOperatingMode", &map_CrCameraOperatingMode, 0, } },
	{ PCode::CrDeviceProperty_CameraSetting_ReadOperationEnableStatus,	{ -1, "CameraSetting_ReadOperationEnableStatus", &map_CrCameraSettingReadOperation, 0, } },
	{ PCode::CrDeviceProperty_CameraSetting_SaveOperationEnableStatus,	{ -1, "CameraSetting_SaveOperationEnableStatus", &map_CrCameraSettingSaveOperation, 0, } },
	{ PCode::CrDeviceProperty_CameraSetting_SaveRead_State,	{ -1, "CameraSetting_SaveRead_State", &map_CrCameraSettingSaveReadState, 0, } },
	{ PCode::CrDeviceProperty_CameraSettingsResetEnableStatus,	{ -1, "CameraSettingsResetEnableStatus", &map_CrCameraSettingsResetEnableStatus, 0, } },
	{ PCode::CrDeviceProperty_CameraShakeStatus,	{ -1, "CameraShakeStatus", &map_CrCameraShakeStatus, 0, } },
	{ PCode::CrDeviceProperty_Cancel_Media_FormatEnableStatus,	{ -1, "Cancel_Media_FormatEnableStatus", &map_CrCancelMediaFormat, 0, } },
	{ PCode::CrDeviceProperty_CancelRemoteTouchOperationEnableStatus,	{ -1, "CancelRemoteTouchOperationEnableStatus", &map_CrCancelRemoteTouchOperationEnableStatus, 0, } },
	{ PCode::CrDeviceProperty_ColorSpace,	{ -1, "ColorSpace", &map_CrColorSpace, 0, } },
	{ PCode::CrDeviceProperty_Colortemp,	{ -1, "Colortemp", 0, 0, } },
	{ PCode::CrDeviceProperty_ColortempStep,	{ -1, "ColortempStep", 0, 0, } },
	{ PCode::CrDeviceProperty_ColorTuningAB,	{ -1, "ColorTuningAB", 0, 0, } },
	{ PCode::CrDeviceProperty_ColorTuningGM,	{ -1, "ColorTuningGM", 0, 0, } },
	{ PCode::CrDeviceProperty_CompressionFileFormatStill,	{ -1, "CompressionFileFormatStill", &map_CrCompressionFileFormat, 0, } },
	{ PCode::CrDeviceProperty_ContentsTransferCancelEnableStatus,	{ -1, "ContentsTransferCancelEnableStatus", &map_CrCancelContentsTransferEnableStatus, 0, } },
	{ PCode::CrDeviceProperty_ContentsTransferProgress,	{ -1, "ContentsTransferProgress", 0, 0, } },
	{ PCode::CrDeviceProperty_ContentsTransferStatus,	{ -1, "ContentsTransferStatus", &map_CrContentsTransferStatus, 0, } },
	{ PCode::CrDeviceProperty_ContinuousShootingSpeedInElectricShutterHi,	{ -1, "ContinuousShootingSpeedInElectricShutterHi", 0, 0, } },
	{ PCode::CrDeviceProperty_ContinuousShootingSpeedInElectricShutterHiPlus,	{ -1, "ContinuousShootingSpeedInElectricShutterHiPlus", 0, 0, } },
	{ PCode::CrDeviceProperty_ContinuousShootingSpeedInElectricShutterLo,	{ -1, "ContinuousShootingSpeedInElectricShutterLo", 0, 0, } },
	{ PCode::CrDeviceProperty_ContinuousShootingSpeedInElectricShutterMid,	{ -1, "ContinuousShootingSpeedInElectricShutterMid", 0, 0, } },
	{ PCode::CrDeviceProperty_ContinuousShootingSpotBoostEnableStatus,	{ -1, "ContinuousShootingSpotBoostEnableStatus", &map_CrContinuousShootingSpotBoostEnableStatus, 0, } },
	{ PCode::CrDeviceProperty_ContinuousShootingSpotBoostFrameSpeed,	{ -1, "ContinuousShootingSpotBoostFrameSpeed", 0, 0, } },
	{ PCode::CrDeviceProperty_ContinuousShootingSpotBoostStatus,	{ -1, "ContinuousShootingSpotBoostStatus", &map_CrContinuousShootingSpotBoostStatus, 0, } },
	{ PCode::CrDeviceProperty_ControlForHDMI,	{ -1, "ControlForHDMI", &map_CrControlForHDMI, 0, } },
	{ PCode::CrDeviceProperty_CreateNewFolderEnableStatus,	{ -1, "CreateNewFolderEnableStatus", &map_CrCreateNewFolderEnableStatus, 0, } },
	{ PCode::CrDeviceProperty_CreativeLook,	{ -1, "CreativeLook", &map_CrCreativeLook, 0, } },
	{ PCode::CrDeviceProperty_CreativeLook_Clarity,	{ -1, "CreativeLook_Clarity", 0, 0, } },
	{ PCode::CrDeviceProperty_CreativeLook_Contrast,	{ -1, "CreativeLook_Contrast", 0, 0, } },
	{ PCode::CrDeviceProperty_CreativeLook_CustomLook,	{ -1, "CreativeLook_CustomLook", &map_CrCreativeLook, 0, } },
	{ PCode::CrDeviceProperty_CreativeLook_Fade,	{ -1, "CreativeLook_Fade", 0, 0, } },
	{ PCode::CrDeviceProperty_CreativeLook_Highlights,	{ -1, "CreativeLook_Highlights", 0, 0, } },
	{ PCode::CrDeviceProperty_CreativeLook_Saturation,	{ -1, "CreativeLook_Saturation", 0, 0, } },
	{ PCode::CrDeviceProperty_CreativeLook_Shadows,	{ -1, "CreativeLook_Shadows", 0, 0, } },
	{ PCode::CrDeviceProperty_CreativeLook_Sharpness,	{ -1, "CreativeLook_Sharpness", 0, 0, } },
	{ PCode::CrDeviceProperty_CreativeLook_SharpnessRange,	{ -1, "CreativeLook_SharpnessRange", 0, 0, } },
	{ PCode::CrDeviceProperty_CreativeLookResetEnableStatus,	{ -1, "CreativeLookResetEnableStatus", &map_CrCreativeLookResetEnableStatus, 0, } },
	{ PCode::CrDeviceProperty_CurrentSceneFileEdited,	{ -1, "CurrentSceneFileEdited", &map_CrCurrentSceneFileEdited, 0, } },
	{ PCode::CrDeviceProperty_CustomWB_Capturable_Area,	{ -1, "CustomWB_Capturable_Area", 0, 0, } },
	{ PCode::CrDeviceProperty_CustomWB_Capture,	{ -1, "CustomWB_Capture", 0, 0, } },
	{ PCode::CrDeviceProperty_CustomWB_Capture_Frame_Size,	{ -1, "CustomWB_Capture_Frame_Size", 0, 0, } },
	{ PCode::CrDeviceProperty_CustomWB_Capture_Operation,	{ -1, "CustomWB_Capture_Operation", &map_CrPropertyCustomWBOperation, 0, } },
	{ PCode::CrDeviceProperty_CustomWB_Capture_Standby,	{ -1, "CustomWB_Capture_Standby", &map_CrPropertyCustomWBOperation, 0, } },
	{ PCode::CrDeviceProperty_CustomWB_Capture_Standby_Cancel,	{ -1, "CustomWB_Capture_Standby_Cancel", &map_CrPropertyCustomWBOperation, 0, } },
	{ PCode::CrDeviceProperty_CustomWB_Execution_State,	{ -1, "CustomWB_Execution_State", &map_CrPropertyCustomWBExecutionState, 0, } },
	{ PCode::CrDeviceProperty_CustomWB_Size_Setting,	{ -1, "CustomWB_Size_Setting", &map_CrCustomWBSizeSetting, 0, } },
	{ PCode::CrDeviceProperty_DateTime_Settings,	{ -1, "DateTime_Settings", 0, 0, } },
	{ PCode::CrDeviceProperty_DCVoltage,	{ -1, "DCVoltage", 0, 0, } },
	{ PCode::CrDeviceProperty_DefaultAFFreeSizeAndPositionSetting,	{ -1, "DefaultAFFreeSizeAndPositionSetting", 0, 0, } },
	{ PCode::CrDeviceProperty_DeleteUserBaseLook,	{ -1, "DeleteUserBaseLook", 0, 0, } },
	{ PCode::CrDeviceProperty_DepthOfFieldAdjustmentInterlockingMode,	{ -1, "DepthOfFieldAdjustmentInterlockingMode", &map_CrDepthOfFieldAdjustmentInterlockingMode, 0, } },
	{ PCode::CrDeviceProperty_DepthOfFieldAdjustmentMode,	{ -1, "DepthOfFieldAdjustmentMode", &map_CrDepthOfFieldAdjustmentMode, 0, } },
	{ PCode::CrDeviceProperty_DeviceOverheatingState,	{ -1, "DeviceOverheatingState", &map_CrDeviceOverheatingState, 0, } },
	{ PCode::CrDeviceProperty_DigitalZoomScale,	{ -1, "DigitalZoomScale", 0, 0, } },
	{ PCode::CrDeviceProperty_DisplayQualityFinder,	{ -1, "DisplayQualityFinder", &map_CrDisplayQualityFinder, 0, } },
	{ PCode::CrDeviceProperty_DispMode,	{ -1, "DispMode", &map_CrDispMode, 0, } },
	{ PCode::CrDeviceProperty_DispModeCandidate,	{ -1, "DispModeCandidate", 0, 0, } },
	{ PCode::CrDeviceProperty_DispModeSetting,	{ -1, "DispModeSetting", 0, 0, } },
	{ PCode::CrDeviceProperty_DriveMode,	{ -1, "DriveMode", &map_CrDriveMode, 0, } },
	{ PCode::CrDeviceProperty_DRO,	{ -1, "DRO", &map_CrDRangeOptimizer, 0, } },
	{ PCode::CrDeviceProperty_EframingHDMICrop,	{ -1, "EframingHDMICrop", &map_CrEframingHDMICrop, 0, } },
	{ PCode::CrDeviceProperty_EframingModeAuto,	{ -1, "EframingModeAuto", &map_CrEframingModeAuto, 0, } },
	{ PCode::CrDeviceProperty_EframingRecordingImageCrop,	{ -1, "EframingRecordingImageCrop", &map_CrEframingRecordingImageCrop, 0, } },
	{ PCode::CrDeviceProperty_EframingScaleAuto,	{ -1, "EframingScaleAuto", &map_CrEframingScaleAuto, 0, } },
	{ PCode::CrDeviceProperty_EframingSpeedAuto,	{ -1, "EframingSpeedAuto", 0, 0, } },
	{ PCode::CrDeviceProperty_ElectricFrontCurtainShutter,	{ -1, "ElectricFrontCurtainShutter", &map_CrElectricFrontCurtainShutter, 0, } },
	{ PCode::CrDeviceProperty_EmbedLUTFile,	{ -1, "EmbedLUTFile", &map_CrEmbedLUTFile, 0, } },
	{ PCode::CrDeviceProperty_ExposureBiasCompensation,	{ -1, "ExposureBiasCompensation", 0, 0, } },
	{ PCode::CrDeviceProperty_ExposureCtrlType,	{ -1, "ExposureCtrlType", &map_CrExposureCtrlType, 0, } },
	{ PCode::CrDeviceProperty_ExposureIndex,	{ -1, "ExposureIndex", 0, 0, } },
	{ PCode::CrDeviceProperty_ExposureProgramMode,	{ -1, "ExposureProgramMode", &map_CrExposureProgram, 0, } },
	{ PCode::CrDeviceProperty_ExtendedInterfaceMode,	{ -1, "ExtendedInterfaceMode", &map_CrExtendedInterfaceMode, 0, } },
	{ PCode::CrDeviceProperty_ExtendedShutterSpeed,	{ -1, "ExtendedShutterSpeed", 0, format_shutter_speed, } },
	{ PCode::CrDeviceProperty_FaceEyeFrameDisplay,	{ -1, "FaceEyeFrameDisplay", &map_CrFaceEyeFrameDisplay, 0, } },
	{ PCode::CrDeviceProperty_FacePriorityInMultiMetering,	{ -1, "FacePriorityInMultiMetering", &map_CrFacePriorityInMultiMetering, 0, } },
	{ PCode::CrDeviceProperty_FEL,	{ -1, "FEL", &map_CrLockIndicator, 0, } },
	{ PCode::CrDeviceProperty_FileType,	{ -1, "FileType", &map_CrFileType, 0, } },
	{ PCode::CrDeviceProperty_FlashCompensation,	{ -1, "FlashCompensation", 0, 0, } },
	{ PCode::CrDeviceProperty_FlashMode,	{ -1, "FlashMode", &map_CrFlashMode, 0, } },
	{ PCode::CrDeviceProperty_FlickerLessShooting,	{ -1, "FlickerLessShooting", &map_CrFlickerLessShooting, 0, } },
	{ PCode::CrDeviceProperty_FlickerLessShootingStatus,	{ -1, "FlickerLessShootingStatus", &map_CrFlickerLessShootingStatus, 0, } },
	{ PCode::CrDeviceProperty_FlickerScanEnableStatus,	{ -1, "FlickerScanEnableStatus", &map_CrFlickerScanEnableStatus, 0, } },
	{ PCode::CrDeviceProperty_FlickerScanStatus,	{ -1, "FlickerScanStatus", &map_CrFlickerScanStatus, 0, } },
	{ PCode::CrDeviceProperty_FNumber,	{ -1, "FNumber", 0, format_f_number, } },
	{ PCode::CrDeviceProperty_FocalDistanceInFeet,	{ -1, "FocalDistanceInFeet", 0, 0, } },
	{ PCode::CrDeviceProperty_FocalDistanceInMeter,	{ -1, "FocalDistanceInMeter", 0, 0, } },
	{ PCode::CrDeviceProperty_FocalDistanceUnitSetting,	{ -1, "FocalDistanceUnitSetting", &map_CrFocalDistanceUnitSetting, 0, } },
	{ PCode::CrDeviceProperty_Focus_Magnifier_Setting,	{ -1, "Focus_Magnifier_Setting", 0, 0, } },
	{ PCode::CrDeviceProperty_Focus_Operation,	{ -1, "Focus_Operation", 0, 0, } },
	{ PCode::CrDeviceProperty_Focus_Speed_Range,	{ -1, "Focus_Speed_Range", 0, 0, } },
	{ PCode::CrDeviceProperty_FocusArea,	{ -1, "FocusArea", &map_CrFocusArea, 0, } },
	{ PCode::CrDeviceProperty_FocusBracketExposureLock1stImg,	{ -1, "FocusBracketExposureLock1stImg", &map_CrFocusBracketExposureLock1stImg, 0, } },
	{ PCode::CrDeviceProperty_FocusBracketFocusRange,	{ -1, "FocusBracketFocusRange", 0, 0, } },
	{ PCode::CrDeviceProperty_FocusBracketIntervalUntilNextShot,	{ -1, "FocusBracketIntervalUntilNextShot", 0, 0, } },
	{ PCode::CrDeviceProperty_FocusBracketOrder,	{ -1, "FocusBracketOrder", &map_CrFocusBracketOrder, 0, } },
	{ PCode::CrDeviceProperty_FocusBracketRecordingFolder,	{ -1, "FocusBracketRecordingFolder", &map_CrFocusBracketRecordingFolder, 0, } },
	{ PCode::CrDeviceProperty_FocusBracketShootingStatus,	{ -1, "FocusBracketShootingStatus", &map_CrFocusBracketShootingStatus, 0, } },
	{ PCode::CrDeviceProperty_FocusBracketShotNumber,	{ -1, "FocusBracketShotNumber", 0, 0, } },
	{ PCode::CrDeviceProperty_FocusDrivingStatus,	{ -1, "FocusDrivingStatus", &map_CrFocusDrivingStatus, 0, } },
	{ PCode::CrDeviceProperty_FocusIndication,	{ -1, "FocusIndication", &map_CrFocusIndicator, 0, } },
	{ PCode::CrDeviceProperty_FocusMagnificationTime,	{ -1, "FocusMagnificationTime", 0, 0, } },
	{ PCode::CrDeviceProperty_FocusMap,	{ -1, "FocusMap", &map_CrFocusMap, 0, } },
	{ PCode::CrDeviceProperty_FocusMode,	{ -1, "FocusMode", &map_CrFocusMode, 0, } },
	{ PCode::CrDeviceProperty_FocusModeSetting,	{ -1, "FocusModeSetting", &map_CrFocusModeSetting, 0, } },
	{ PCode::CrDeviceProperty_FocusPositionCurrentValue,	{ -1, "FocusPositionCurrentValue", 0, format_focus_position_value, } },
	{ PCode::CrDeviceProperty_FocusPositionSetting,	{ -1, "FocusPositionSetting", 0, 0, } },
	{ PCode::CrDeviceProperty_FocusTouchSpotStatus,	{ -1, "FocusTouchSpotStatus", &map_CrFocusTouchSpotStatus, 0, } },
	{ PCode::CrDeviceProperty_FocusTrackingStatus,	{ -1, "FocusTrackingStatus", &map_CrFocusTrackingStatus, 0, } },
	{ PCode::CrDeviceProperty_FollowFocusPositionCurrentValue,	{ -1, "FollowFocusPositionCurrentValue", 0, 0, } },
	{ PCode::CrDeviceProperty_FollowFocusPositionSetting,	{ -1, "FollowFocusPositionSetting", 0, 0, } },
	{ PCode::CrDeviceProperty_ForcedFileNumberResetEnableStatus,	{ -1, "ForcedFileNumberResetEnableStatus", &map_CrForcedFileNumberReset, 0, } },
	{ PCode::CrDeviceProperty_FTP_AutoTransfer,	{ -1, "FTP_AutoTransfer", &map_CrFTPAutoTransfer, 0, } },
	{ PCode::CrDeviceProperty_FTP_AutoTransferTarget,	{ -1, "FTP_AutoTransferTarget", &map_CrFTPAutoTransferTarget, 0, } },
	{ PCode::CrDeviceProperty_FTP_AutoTransferTarget_StillImage,	{ -1, "FTP_AutoTransferTarget_StillImage", &map_CrFTPAutoTransferTargetStill, 0, } },
	{ PCode::CrDeviceProperty_FTP_ConnectionErrorInfo,	{ -1, "FTP_ConnectionErrorInfo", &map_CrFTPConnectionErrorInfo, 0, } },
	{ PCode::CrDeviceProperty_FTP_ConnectionStatus,	{ -1, "FTP_ConnectionStatus", &map_CrFTPConnectionStatus, 0, } },
	{ PCode::CrDeviceProperty_FTP_Function,	{ -1, "FTP_Function", &map_CrFTPFunction, 0, } },
	{ PCode::CrDeviceProperty_FTP_PowerSave,	{ -1, "FTP_PowerSave", &map_CrFTPPowerSave, 0, } },
	{ PCode::CrDeviceProperty_FTP_TransferStillImageQualitySize,	{ -1, "FTP_TransferStillImageQualitySize", &map_CrFTPTransferStillImageQualitySize, 0, } },
	{ PCode::CrDeviceProperty_FTP_TransferTarget,	{ -1, "FTP_TransferTarget", &map_CrFTPTransferTargetStill, 0, } },
	{ PCode::CrDeviceProperty_FTPJobListDataVersion,	{ -1, "FTPJobListDataVersion", 0, 0, } },
	{ PCode::CrDeviceProperty_FTPServerSettingOperationEnableStatus,	{ -1, "FTPServerSettingOperationEnableStatus", &map_CrFTPServerSettingOperationEnableStatus, 0, } },
	{ PCode::CrDeviceProperty_FTPServerSettingVersion,	{ -1, "FTPServerSettingVersion", 0, 0, } },
	{ PCode::CrDeviceProperty_FTPTransferSetting_ReadOperationEnableStatus,	{ -1, "FTPTransferSetting_ReadOperationEnableStatus", &map_CrFTPTransferSettingReadOperationEnableStatus, 0, } },
	{ PCode::CrDeviceProperty_FTPTransferSetting_SaveOperationEnableStatus,	{ -1, "FTPTransferSetting_SaveOperationEnableStatus", &map_CrFTPTransferSettingSaveOperationEnableStatus, 0, } },
	{ PCode::CrDeviceProperty_FTPTransferSetting_SaveRead_State,	{ -1, "FTPTransferSetting_SaveRead_State", &map_CrFTPTransferSettingSaveReadState, 0, } },
	{ PCode::CrDeviceProperty_FullTimeDMF,	{ -1, "FullTimeDMF", &map_CrFullTimeDMF, 0, } },
	{ PCode::CrDeviceProperty_FunctionOfRemoteTouchOperation,	{ -1, "FunctionOfRemoteTouchOperation", &map_CrFunctionOfRemoteTouchOperation, 0, } },
	{ PCode::CrDeviceProperty_FunctionOfTouchOperation,	{ -1, "FunctionOfTouchOperation", &map_CrFunctionOfTouchOperation, 0, } },
	{ PCode::CrDeviceProperty_GainBaseIsoSensitivity,	{ -1, "GainBaseIsoSensitivity", &map_CrGainBaseIsoSensitivity, 0, } },
	{ PCode::CrDeviceProperty_GainBaseSensitivity,	{ -1, "GainBaseSensitivity", &map_CrGainBaseSensitivity, 0, } },
	{ PCode::CrDeviceProperty_GainControlSetting,	{ -1, "GainControlSetting", &map_CrGainControlSetting, 0, } },
	{ PCode::CrDeviceProperty_GaindBCurrentValue,	{ -1, "GaindBCurrentValue", 0, 0, } },
	{ PCode::CrDeviceProperty_GaindBValue,	{ -1, "GaindBValue", 0, 0, } },
	{ PCode::CrDeviceProperty_GainUnitSetting,	{ -1, "GainUnitSetting", &map_CrGainUnitSetting, 0, } },
	{ PCode::CrDeviceProperty_GammaDisplayAssist,	{ -1, "GammaDisplayAssist", &map_CrGammaDisplayAssist, 0, } },
	{ PCode::CrDeviceProperty_GammaDisplayAssistType,	{ -1, "GammaDisplayAssistType", &map_CrGammaDisplayAssistType, 0, } },
	{ PCode::CrDeviceProperty_GridLineDisplay,	{ -1, "GridLineDisplay", &map_CrGridLineDisplay, 0, } },
	{ PCode::CrDeviceProperty_HDMIResolutionStillPlay,	{ -1, "HDMIResolutionStillPlay", &map_CrHDMIResolution, 0, } },
	{ PCode::CrDeviceProperty_HighIsoNR,	{ -1, "HighIsoNR", &map_CrHighIsoNR, 0, } },
	{ PCode::CrDeviceProperty_HighResolutionShutterSpeed,	{ -1, "HighResolutionShutterSpeed", 0, 0, } },
	{ PCode::CrDeviceProperty_HighResolutionShutterSpeedSetting,	{ -1, "HighResolutionShutterSpeedSetting", &map_CrHighResolutionShutterSpeedSetting, 0, } },
	{ PCode::CrDeviceProperty_HLGStillImage,	{ -1, "HLGStillImage", &map_CrHLGStillImage, 0, } },
	{ PCode::CrDeviceProperty_ImageID_Num,	{ -1, "ImageID_Num", 0, 0, } },
	{ PCode::CrDeviceProperty_ImageID_Num_Setting,	{ -1, "ImageID_Num_Setting", &map_CrImageIDNumSetting, 0, } },
	{ PCode::CrDeviceProperty_ImageSize,	{ -1, "ImageSize", &map_CrImageSize, 0, } },
	{ PCode::CrDeviceProperty_ImageStabilizationSteadyShot,	{ -1, "ImageStabilizationSteadyShot", &map_CrImageStabilizationSteadyShot, 0, } },
	{ PCode::CrDeviceProperty_ImageStabilizationSteadyShotAdjust,	{ -1, "ImageStabilizationSteadyShotAdjust", &map_CrImageStabilizationSteadyShotAdjust, 0, } },
	{ PCode::CrDeviceProperty_ImageStabilizationSteadyShotFocalLength,	{ -1, "ImageStabilizationSteadyShotFocalLength", 0, 0, } },
	{ PCode::CrDeviceProperty_InitialFocusMagnifier,	{ -1, "InitialFocusMagnifier", 0, 0, } },
	{ PCode::CrDeviceProperty_Interval_Rec_Mode,	{ -1, "Interval_Rec_Mode", &map_CrIntervalRecMode, 0, } },
	{ PCode::CrDeviceProperty_Interval_Rec_Status,	{ -1, "Interval_Rec_Status", &map_CrIntervalRecStatus, 0, } },
	{ PCode::CrDeviceProperty_IntervalRec_AETrackingSensitivity,	{ -1, "IntervalRec_AETrackingSensitivity", &map_CrIntervalRecAETrackingSensitivity, 0, } },
	{ PCode::CrDeviceProperty_IntervalRec_NumberOfShots,	{ -1, "IntervalRec_NumberOfShots", 0, 0, } },
	{ PCode::CrDeviceProperty_IntervalRec_ShootingInterval,	{ -1, "IntervalRec_ShootingInterval", 0, 0, } },
	{ PCode::CrDeviceProperty_IntervalRec_ShootingStartTime,	{ -1, "IntervalRec_ShootingStartTime", 0, 0, } },
	{ PCode::CrDeviceProperty_IntervalRec_ShootIntervalPriority,	{ -1, "IntervalRec_ShootIntervalPriority", &map_CrIntervalRecShootIntervalPriority, 0, } },
	{ PCode::CrDeviceProperty_IntervalRec_ShutterType,	{ -1, "IntervalRec_ShutterType", &map_CrIntervalRecShutterType, 0, } },
	{ PCode::CrDeviceProperty_IrisDisplayUnit,	{ -1, "IrisDisplayUnit", &map_CrIrisDisplayUnit, 0, } },
	{ PCode::CrDeviceProperty_IrisModeSetting,	{ -1, "IrisModeSetting", &map_CrIrisModeSetting, 0, } },
	{ PCode::CrDeviceProperty_IsoAutoMinShutterSpeedManual,	{ -1, "IsoAutoMinShutterSpeedManual", 0, 0, } },
	{ PCode::CrDeviceProperty_IsoAutoMinShutterSpeedMode,	{ -1, "IsoAutoMinShutterSpeedMode", &map_CrIsoAutoMinShutterSpeedMode, 0, } },
	{ PCode::CrDeviceProperty_IsoAutoMinShutterSpeedPreset,	{ -1, "IsoAutoMinShutterSpeedPreset", &map_CrIsoAutoMinShutterSpeedPreset, 0, } },
	{ PCode::CrDeviceProperty_IsoAutoRangeLimitMax,	{ -1, "IsoAutoRangeLimitMax", 0, format_iso_sensitivity, } },
	{ PCode::CrDeviceProperty_IsoAutoRangeLimitMin,	{ -1, "IsoAutoRangeLimitMin", 0, format_iso_sensitivity, } },
	{ PCode::CrDeviceProperty_IsoCurrentSensitivity,	{ -1, "IsoCurrentSensitivity", 0, format_iso_sensitivity, } },
	{ PCode::CrDeviceProperty_IsoSensitivity,	{ -1, "IsoSensitivity", 0, format_iso_sensitivity, } },
	{ PCode::CrDeviceProperty_LensAssignableButton1,	{ -1, "LensAssignableButton1", &map_CrAssignableButton, 0, } },
	{ PCode::CrDeviceProperty_LensAssignableButtonIndicator1,	{ -1, "LensAssignableButtonIndicator1", &map_CrAssignableButtonIndicator, 0, } },
	{ PCode::CrDeviceProperty_LensCompensationBreathing,	{ -1, "LensCompensationBreathing", &map_CrLensCompensationBreathing, 0, } },
	{ PCode::CrDeviceProperty_LensCompensationChromaticAberration,	{ -1, "LensCompensationChromaticAberration", &map_CrLensCompensationChromaticAberration, 0, } },
	{ PCode::CrDeviceProperty_LensCompensationDistortion,	{ -1, "LensCompensationDistortion", &map_CrLensCompensationDistortion, 0, } },
	{ PCode::CrDeviceProperty_LensCompensationShading,	{ -1, "LensCompensationShading", &map_CrLensCompensationShading, 0, } },
	{ PCode::CrDeviceProperty_LensInformationEnableStatus,	{ -1, "LensInformationEnableStatus", &map_CrLensInformationEnableStatus, 0, } },
	{ PCode::CrDeviceProperty_LiveView_Image_Quality,	{ -1, "LiveView_Image_Quality", &map_CrPropertyLiveViewImageQuality, 0, } },
	{ PCode::CrDeviceProperty_LiveViewDisplayEffect,	{ -1, "LiveViewDisplayEffect", &map_CrLiveViewDisplayEffect, 0, } },
	{ PCode::CrDeviceProperty_LiveViewStatus,	{ -1, "LiveViewStatus", &map_CrLiveViewStatus, 0, } },
	{ PCode::CrDeviceProperty_LongExposureNR,	{ -1, "LongExposureNR", &map_CrLongExposureNR, 0, } },
	{ PCode::CrDeviceProperty_Media_FormatProgressRate,	{ -1, "Media_FormatProgressRate", 0, 0, } },
	{ PCode::CrDeviceProperty_MediaSLOT1_FileType,	{ -1, "MediaSLOT1_FileType", &map_CrFileType, 0, } },
	{ PCode::CrDeviceProperty_MediaSLOT1_FormatEnableStatus,	{ -1, "MediaSLOT1_FormatEnableStatus", &map_CrMediaFormat, 0, } },
	{ PCode::CrDeviceProperty_MediaSLOT1_ImageQuality,	{ -1, "MediaSLOT1_ImageQuality", &map_CrImageQuality, 0, } },
	{ PCode::CrDeviceProperty_MediaSLOT1_ImageSize,	{ -1, "MediaSLOT1_ImageSize", &map_CrImageSize, 0, } },
	{ PCode::CrDeviceProperty_MediaSLOT1_QuickFormatEnableStatus,	{ -1, "MediaSLOT1_QuickFormatEnableStatus", &map_CrMediaFormat, 0, } },
	{ PCode::CrDeviceProperty_MediaSLOT1_RAW_FileCompressionType,	{ -1, "MediaSLOT1_RAW_FileCompressionType", &map_CrRAWFileCompressionType, 0, } },
	{ PCode::CrDeviceProperty_MediaSLOT1_RecordingAvailableType,	{ -1, "MediaSLOT1_RecordingAvailableType", &map_CrMediaSlotRecordingAvailableType, 0, } },
	{ PCode::CrDeviceProperty_MediaSLOT1_RemainingNumber,	{ -1, "MediaSLOT1_RemainingNumber", 0, 0, } },
	{ PCode::CrDeviceProperty_MediaSLOT1_RemainingTime,	{ -1, "MediaSLOT1_RemainingTime", 0, 0, } },
	{ PCode::CrDeviceProperty_MediaSLOT1_Status,	{ -1, "MediaSLOT1_Status", &map_CrSlotStatus, 0, } },
	{ PCode::CrDeviceProperty_MediaSLOT1_WritingState,	{ -1, "MediaSLOT1_WritingState", &map_CrMediaSlotWritingState, 0, } },
	{ PCode::CrDeviceProperty_MediaSLOT1Player,	{ -1, "MediaSLOT1Player", &map_CrMediaPlayer, 0, } },
	{ PCode::CrDeviceProperty_MediaSLOT2_FileType,	{ -1, "MediaSLOT2_FileType", &map_CrFileType, 0, } },
	{ PCode::CrDeviceProperty_MediaSLOT2_FormatEnableStatus,	{ -1, "MediaSLOT2_FormatEnableStatus", &map_CrMediaFormat, 0, } },
	{ PCode::CrDeviceProperty_MediaSLOT2_ImageQuality,	{ -1, "MediaSLOT2_ImageQuality", &map_CrImageQuality, 0, } },
	{ PCode::CrDeviceProperty_MediaSLOT2_ImageSize,	{ -1, "MediaSLOT2_ImageSize", &map_CrImageSize, 0, } },
	{ PCode::CrDeviceProperty_MediaSLOT2_QuickFormatEnableStatus,	{ -1, "MediaSLOT2_QuickFormatEnableStatus", &map_CrMediaFormat, 0, } },
	{ PCode::CrDeviceProperty_MediaSLOT2_RAW_FileCompressionType,	{ -1, "MediaSLOT2_RAW_FileCompressionType", &map_CrRAWFileCompressionType, 0, } },
	{ PCode::CrDeviceProperty_MediaSLOT2_RecordingAvailableType,	{ -1, "MediaSLOT2_RecordingAvailableType", &map_CrMediaSlotRecordingAvailableType, 0, } },
	{ PCode::CrDeviceProperty_MediaSLOT2_RemainingNumber,	{ -1, "MediaSLOT2_RemainingNumber", 0, 0, } },
	{ PCode::CrDeviceProperty_MediaSLOT2_RemainingTime,	{ -1, "MediaSLOT2_RemainingTime", 0, 0, } },
	{ PCode::CrDeviceProperty_MediaSLOT2_Status,	{ -1, "MediaSLOT2_Status", &map_CrSlotStatus, 0, } },
	{ PCode::CrDeviceProperty_MediaSLOT2_WritingState,	{ -1, "MediaSLOT2_WritingState", &map_CrMediaSlotWritingState, 0, } },
	{ PCode::CrDeviceProperty_MediaSLOT2Player,	{ -1, "MediaSLOT2Player", &map_CrMediaPlayer, 0, } },
	{ PCode::CrDeviceProperty_MediaSLOT3_RecordingAvailableType,	{ -1, "MediaSLOT3_RecordingAvailableType", &map_CrMediaSlotRecordingAvailableType, 0, } },
	{ PCode::CrDeviceProperty_MediaSLOT3_RemainingTime,	{ -1, "MediaSLOT3_RemainingTime", 0, 0, } },
	{ PCode::CrDeviceProperty_MediaSLOT3_Status,	{ -1, "MediaSLOT3_Status", &map_CrSlotStatus, 0, } },
	{ PCode::CrDeviceProperty_MeteredManualLevel,	{ -1, "MeteredManualLevel", 0, 0, } },
	{ PCode::CrDeviceProperty_MeteringMode,	{ -1, "MeteringMode", &map_CrMeteringMode, 0, } },
	{ PCode::CrDeviceProperty_MonitorBrightnessManual,	{ -1, "MonitorBrightnessManual", 0, 0, } },
	{ PCode::CrDeviceProperty_MonitorBrightnessType,	{ -1, "MonitorBrightnessType", &map_CrMonitorBrightnessType, 0, } },
	{ PCode::CrDeviceProperty_MonitoringDeliveringStatus,	{ -1, "MonitoringDeliveringStatus", &map_CrMonitoringDeliveringStatus, 0, } },
	{ PCode::CrDeviceProperty_MonitoringDeliveryTypeSupportInfo,	{ -1, "MonitoringDeliveryTypeSupportInfo", &map_CrMonitoringDeliveryType, 0, } },
	{ PCode::CrDeviceProperty_MonitoringIsDelivering,	{ -1, "MonitoringIsDelivering", &map_CrMonitoringIsDelivering, 0, } },
	{ PCode::CrDeviceProperty_MonitoringOutputDisplayHDMI,	{ -1, "MonitoringOutputDisplayHDMI", &map_CrMonitoringOutputDisplayHDMI, 0, } },
	{ PCode::CrDeviceProperty_MonitoringSettingVersion,	{ -1, "MonitoringSettingVersion", 0, 0, } },
	{ PCode::CrDeviceProperty_MonitorLUTSetting,	{ -1, "MonitorLUTSetting", &map_CrMonitorLUTSetting, 0, } },
	{ PCode::CrDeviceProperty_Movie_File_Format,	{ -1, "Movie_File_Format", &map_CrFileFormatMovie, 0, } },
	{ PCode::CrDeviceProperty_Movie_FTP_AutoTransferTarget,	{ -1, "Movie_FTP_AutoTransferTarget", &map_CrFTPAutoTransferTargetMovie, 0, } },
	{ PCode::CrDeviceProperty_Movie_FTP_TransferTarget,	{ -1, "Movie_FTP_TransferTarget", &map_CrFTPTransferTargetMovie, 0, } },
	{ PCode::CrDeviceProperty_Movie_HDMIOutput4KSetting,	{ -1, "Movie_HDMIOutput4KSetting", &map_CrHDMIOutput4KSettingMovie, 0, } },
	{ PCode::CrDeviceProperty_Movie_HDMIOutputAudioCH,	{ -1, "Movie_HDMIOutputAudioCH", &map_CrHDMIOutputAudioCH, 0, } },
	{ PCode::CrDeviceProperty_Movie_HDMIOutputColorGamutForRAWOut,	{ -1, "Movie_HDMIOutputColorGamutForRAWOut", &map_CrHDMIOutputColorGamutForRAWOutMovie, 0, } },
	{ PCode::CrDeviceProperty_Movie_HDMIOutputRAW,	{ -1, "Movie_HDMIOutputRAW", &map_CrHDMIOutputRAWMovie, 0, } },
	{ PCode::CrDeviceProperty_Movie_HDMIOutputRawSetting,	{ -1, "Movie_HDMIOutputRawSetting", &map_CrHDMIOutputRawSettingMovie, 0, } },
	{ PCode::CrDeviceProperty_Movie_HDMIOutputRecControl,	{ -1, "Movie_HDMIOutputRecControl", &map_CrHDMIOutputRecControlMovie, 0, } },
	{ PCode::CrDeviceProperty_Movie_HDMIOutputRecMedia,	{ -1, "Movie_HDMIOutputRecMedia", &map_CrHDMIOutputRecMediaMovie, 0, } },
	{ PCode::CrDeviceProperty_Movie_HDMIOutputResolution,	{ -1, "Movie_HDMIOutputResolution", &map_CrHDMIResolution, 0, } },
	{ PCode::CrDeviceProperty_Movie_HDMIOutputTimeCode,	{ -1, "Movie_HDMIOutputTimeCode", &map_CrHDMIOutputTimeCodeMovie, 0, } },
	{ PCode::CrDeviceProperty_Movie_ImageStabilizationLevel,	{ -1, "Movie_ImageStabilizationLevel", &map_CrImageStabilizationLevelMovie, 0, } },
	{ PCode::CrDeviceProperty_Movie_ImageStabilizationSteadyShot,	{ -1, "Movie_ImageStabilizationSteadyShot", &map_CrImageStabilizationSteadyShotMovie, 0, } },
	{ PCode::CrDeviceProperty_Movie_IntervalRec_CountDownIntervalTime,	{ -1, "Movie_IntervalRec_CountDownIntervalTime", 0, 0, } },
	{ PCode::CrDeviceProperty_Movie_IntervalRec_FrameRateSetting,	{ -1, "Movie_IntervalRec_FrameRateSetting", &map_CrRecordingFrameRateSettingMovie, 0, } },
	{ PCode::CrDeviceProperty_Movie_IntervalRec_IntervalTime,	{ -1, "Movie_IntervalRec_IntervalTime", &map_CrIntervalRecTimeMovie, 0, } },
	{ PCode::CrDeviceProperty_Movie_IntervalRec_RecordingDuration,	{ -1, "Movie_IntervalRec_RecordingDuration", 0, 0, } },
	{ PCode::CrDeviceProperty_Movie_IntervalRec_RecordingSetting,	{ -1, "Movie_IntervalRec_RecordingSetting", &map_CrRecordingSettingMovie, 0, } },
	{ PCode::CrDeviceProperty_Movie_ProxyFileFormat,	{ -1, "Movie_ProxyFileFormat", &map_CrFileFormatMovie, 0, } },
	{ PCode::CrDeviceProperty_Movie_Recording_FrameRateProxySetting,	{ -1, "Movie_Recording_FrameRateProxySetting", &map_CrRecordingFrameRateSettingMovie, 0, } },
	{ PCode::CrDeviceProperty_Movie_Recording_FrameRateSetting,	{ -1, "Movie_Recording_FrameRateSetting", &map_CrRecordingFrameRateSettingMovie, 0, } },
	{ PCode::CrDeviceProperty_Movie_Recording_ResolutionForMain,	{ -1, "Movie_Recording_ResolutionForMain", 0, 0, } },
	{ PCode::CrDeviceProperty_Movie_Recording_ResolutionForProxy,	{ -1, "Movie_Recording_ResolutionForProxy", 0, 0, } },
	{ PCode::CrDeviceProperty_Movie_Recording_Setting,	{ -1, "Movie_Recording_Setting", &map_CrRecordingSettingMovie, 0, } },
	{ PCode::CrDeviceProperty_Movie_RecordingFileNumber,	{ -1, "Movie_RecordingFileNumber", &map_CrRecordingFileNumber, 0, } },
	{ PCode::CrDeviceProperty_Movie_RecordingMedia,	{ -1, "Movie_RecordingMedia", &map_CrRecordingMediaMovie, 0, } },
	{ PCode::CrDeviceProperty_MovieForwardButton,	{ -1, "MovieForwardButton", &map_CrMovieXButton, 0, } },
	{ PCode::CrDeviceProperty_MovieNextButton,	{ -1, "MovieNextButton", &map_CrMovieXButton, 0, } },
	{ PCode::CrDeviceProperty_MoviePlayButton,	{ -1, "MoviePlayButton", &map_CrMovieXButton, 0, } },
	{ PCode::CrDeviceProperty_MoviePlayingSpeed,	{ -1, "MoviePlayingSpeed", 0, 0, } },
	{ PCode::CrDeviceProperty_MoviePlayingState,	{ -1, "MoviePlayingState", &map_CrMoviePlayingState, 0, } },
	{ PCode::CrDeviceProperty_MoviePlayPauseButton,	{ -1, "MoviePlayPauseButton", &map_CrMovieXButton, 0, } },
	{ PCode::CrDeviceProperty_MoviePlayStopButton,	{ -1, "MoviePlayStopButton", &map_CrMovieXButton, 0, } },
	{ PCode::CrDeviceProperty_MoviePrevButton,	{ -1, "MoviePrevButton", &map_CrMovieXButton, 0, } },
	{ PCode::CrDeviceProperty_MovieRecButtonToggleEnableStatus,	{ -1, "MovieRecButtonToggleEnableStatus", &map_CrMovieRecButtonToggleEnableStatus, 0, } },
	{ PCode::CrDeviceProperty_MovieRecReviewButton,	{ -1, "MovieRecReviewButton", &map_CrMovieXButton, 0, } },
	{ PCode::CrDeviceProperty_MovieRewindButton,	{ -1, "MovieRewindButton", &map_CrMovieXButton, 0, } },
	{ PCode::CrDeviceProperty_MovieShootingMode,	{ -1, "MovieShootingMode", &map_CrMovieShootingMode, 0, } },
	{ PCode::CrDeviceProperty_MovieShootingModeColorGamut,	{ -1, "MovieShootingModeColorGamut", &map_CrMovieShootingModeColorGamut, 0, } },
	{ PCode::CrDeviceProperty_MovieShootingModeTargetDisplay,	{ -1, "MovieShootingModeTargetDisplay", &map_CrMovieShootingModeTargetDisplay, 0, } },
	{ PCode::CrDeviceProperty_NDFilter,	{ -1, "NDFilter", &map_CrNDFilter, 0, } },
	{ PCode::CrDeviceProperty_NDFilterMode,	{ -1, "NDFilterMode", &map_CrNDFilterMode, 0, } },
	{ PCode::CrDeviceProperty_NDFilterModeSetting,	{ -1, "NDFilterModeSetting", &map_CrNDFilterModeSetting, 0, } },
	{ PCode::CrDeviceProperty_NDFilterOpticalDensityValue,	{ -1, "NDFilterOpticalDensityValue", 0, 0, } },
	{ PCode::CrDeviceProperty_NDFilterSwitchingSetting,	{ -1, "NDFilterSwitchingSetting", &map_CrNDFilterSwitchingSetting, 0, } },
	{ PCode::CrDeviceProperty_NDFilterUnitSetting,	{ -1, "NDFilterUnitSetting", &map_CrNDFilterUnitSetting, 0, } },
	{ PCode::CrDeviceProperty_NDFilterValue,	{ -1, "NDFilterValue", 0, 0, } },
	{ PCode::CrDeviceProperty_NearFar,	{ -1, "NearFar", 0/*&map_CrNearFarEnableStatus*/, 0, } },
	{ PCode::CrDeviceProperty_PictureEffect,	{ -1, "PictureEffect", &map_CrPictureEffect, 0, } },
	{ PCode::CrDeviceProperty_PictureProfile,	{ -1, "PictureProfile", &map_CrPictureProfile, 0, } },
	{ PCode::CrDeviceProperty_PictureProfile_BlackGammaLevel,	{ -1, "PictureProfile_BlackGammaLevel", 0, 0, } },
	{ PCode::CrDeviceProperty_PictureProfile_BlackGammaRange,	{ -1, "PictureProfile_BlackGammaRange", &map_CrPictureProfileBlackGammaRange, 0, } },
	{ PCode::CrDeviceProperty_PictureProfile_BlackLevel,	{ -1, "PictureProfile_BlackLevel", 0, 0, } },
	{ PCode::CrDeviceProperty_PictureProfile_ColorDepthBlue,	{ -1, "PictureProfile_ColorDepthBlue", 0, 0, } },
	{ PCode::CrDeviceProperty_PictureProfile_ColorDepthCyan,	{ -1, "PictureProfile_ColorDepthCyan", 0, 0, } },
	{ PCode::CrDeviceProperty_PictureProfile_ColorDepthGreen,	{ -1, "PictureProfile_ColorDepthGreen", 0, 0, } },
	{ PCode::CrDeviceProperty_PictureProfile_ColorDepthMagenta,	{ -1, "PictureProfile_ColorDepthMagenta", 0, 0, } },
	{ PCode::CrDeviceProperty_PictureProfile_ColorDepthRed,	{ -1, "PictureProfile_ColorDepthRed", 0, 0, } },
	{ PCode::CrDeviceProperty_PictureProfile_ColorDepthYellow,	{ -1, "PictureProfile_ColorDepthYellow", 0, 0, } },
	{ PCode::CrDeviceProperty_PictureProfile_ColorMode,	{ -1, "PictureProfile_ColorMode", &map_CrPictureProfileColorMode, 0, } },
	{ PCode::CrDeviceProperty_PictureProfile_ColorPhase,	{ -1, "PictureProfile_ColorPhase", 0, 0, } },
	{ PCode::CrDeviceProperty_PictureProfile_Copy,	{ -1, "PictureProfile_Copy", 0, 0, } },
	{ PCode::CrDeviceProperty_PictureProfile_DetailAdjustBWBalance,	{ -1, "PictureProfile_DetailAdjustBWBalance", 0, 0, } },
	{ PCode::CrDeviceProperty_PictureProfile_DetailAdjustCrispening,	{ -1, "PictureProfile_DetailAdjustCrispening", 0, 0, } },
	{ PCode::CrDeviceProperty_PictureProfile_DetailAdjustHiLightDetail,	{ -1, "PictureProfile_DetailAdjustHiLightDetail", 0, 0, } },
	{ PCode::CrDeviceProperty_PictureProfile_DetailAdjustLimit,	{ -1, "PictureProfile_DetailAdjustLimit", 0, 0, } },
	{ PCode::CrDeviceProperty_PictureProfile_DetailAdjustMode,	{ -1, "PictureProfile_DetailAdjustMode", &map_CrPictureProfileDetailAdjustMode, 0, } },
	{ PCode::CrDeviceProperty_PictureProfile_DetailAdjustVHBalance,	{ -1, "PictureProfile_DetailAdjustVHBalance", 0, 0, } },
	{ PCode::CrDeviceProperty_PictureProfile_DetailLevel,	{ -1, "PictureProfile_DetailLevel", 0, 0, } },
	{ PCode::CrDeviceProperty_PictureProfile_Gamma,	{ -1, "PictureProfile_Gamma", &map_CrPictureProfileGamma, 0, } },
	{ PCode::CrDeviceProperty_PictureProfile_KneeAutoSet_MaxPoint,	{ -1, "PictureProfile_KneeAutoSet_MaxPoint", 0, 0, } },
	{ PCode::CrDeviceProperty_PictureProfile_KneeAutoSet_Sensitivity,	{ -1, "PictureProfile_KneeAutoSet_Sensitivity", &map_CrPictureProfileKneeAutoSetSensitivity, 0, } },
	{ PCode::CrDeviceProperty_PictureProfile_KneeManualSet_Point,	{ -1, "PictureProfile_KneeManualSet_Point", 0, 0, } },
	{ PCode::CrDeviceProperty_PictureProfile_KneeManualSet_Slope,	{ -1, "PictureProfile_KneeManualSet_Slope", 0, 0, } },
	{ PCode::CrDeviceProperty_PictureProfile_KneeMode,	{ -1, "PictureProfile_KneeMode", &map_CrPictureProfileKneeMode, 0, } },
	{ PCode::CrDeviceProperty_PictureProfile_Saturation,	{ -1, "PictureProfile_Saturation", 0, 0, } },
	{ PCode::CrDeviceProperty_PictureProfileResetEnableStatus,	{ -1, "PictureProfileResetEnableStatus", &map_CrPictureProfileResetEnableStatus, 0, } },
	{ PCode::CrDeviceProperty_PixelMappingEnableStatus,	{ -1, "PixelMappingEnableStatus", &map_CrPixelMappingEnableStatus, 0, } },
	{ PCode::CrDeviceProperty_PlaybackMedia,	{ -1, "PlaybackMedia", &map_CrPlaybackMedia, 0, } },
	{ PCode::CrDeviceProperty_PlaybackViewMode,	{ -1, "PlaybackViewMode", &map_CrPlaybackViewMode, 0, } },
	{ PCode::CrDeviceProperty_PlaybackVolumeSettings,	{ -1, "PlaybackVolumeSettings", 0, 0, } },
	{ PCode::CrDeviceProperty_PlaySetOfMultiMedia,	{ -1, "PlaySetOfMultiMedia", &map_CrPlaySetOfMultiMedia, 0, } },
	{ PCode::CrDeviceProperty_PowerSource,	{ -1, "PowerSource", &map_CrPowerSource, 0, } },
	{ PCode::CrDeviceProperty_PreAF,	{ -1, "PreAF", &map_CrPreAF, 0, } },
	{ PCode::CrDeviceProperty_PriorityKeySettings,	{ -1, "PriorityKeySettings", &map_CrPriorityKeySettings, 0, } },
	{ PCode::CrDeviceProperty_PrioritySetInAF_C,	{ -1, "PrioritySetInAF_C", &map_CrPrioritySetInAF, 0, } },
	{ PCode::CrDeviceProperty_PrioritySetInAF_S,	{ -1, "PrioritySetInAF_S", &map_CrPrioritySetInAF, 0, } },
	{ PCode::CrDeviceProperty_PrioritySetInAWB,	{ -1, "PrioritySetInAWB", &map_CrPrioritySetInAWB, 0, } },
	{ PCode::CrDeviceProperty_ProgramShiftStatus,	{ -1, "ProgramShiftStatus", &map_CrProgramShiftStatus, 0, } },
	{ PCode::CrDeviceProperty_ProtectImageInFTPTransfer,	{ -1, "ProtectImageInFTPTransfer", &map_CrProtectImageInFTPTransfer, 0, } },
	{ PCode::CrDeviceProperty_ProxyRecordingSetting,	{ -1, "ProxyRecordingSetting", &map_CrProxyRecordingSetting, 0, } },
	{ PCode::CrDeviceProperty_RAW_FileCompressionType,	{ -1, "RAW_FileCompressionType", &map_CrRAWFileCompressionType, 0, } },
	{ PCode::CrDeviceProperty_RAW_J_PC_Save_Image,	{ -1, "RAW_J_PC_Save_Image", &map_CrPropertyRAWJPCSaveImage, 0, } },
	{ PCode::CrDeviceProperty_RecognitionTarget,	{ -1, "RecognitionTarget", &map_CrRecognitionTarget, 0, } },
	{ PCode::CrDeviceProperty_RecorderControlMainSetting,	{ -1, "RecorderControlMainSetting", &map_CrRecorderControlSetting, 0, } },
	{ PCode::CrDeviceProperty_RecorderControlProxySetting,	{ -1, "RecorderControlProxySetting", &map_CrRecorderControlSetting, 0, } },
	{ PCode::CrDeviceProperty_RecorderExtRawStatus,	{ -1, "RecorderExtRawStatus", &map_CrRecorderStatus, 0, } },
	{ PCode::CrDeviceProperty_RecorderMainStatus,	{ -1, "RecorderMainStatus", &map_CrRecorderStatus, 0, } },
	{ PCode::CrDeviceProperty_RecorderProxyStatus,	{ -1, "RecorderProxyStatus", &map_CrRecorderStatus, 0, } },
	{ PCode::CrDeviceProperty_RecorderSaveDestination,	{ -1, "RecorderSaveDestination", &map_CrRecorderSaveDestination, 0, } },
	{ PCode::CrDeviceProperty_RecorderStartMain,	{ -1, "RecorderStartMain", &map_CrRecorderStart, 0, } },
	{ PCode::CrDeviceProperty_RecorderStartProxy,	{ -1, "RecorderStartProxy", &map_CrRecorderStart, 0, } },
	{ PCode::CrDeviceProperty_RecordingFileNumber,	{ -1, "RecordingFileNumber", &map_CrRecordingFileNumber, 0, } },
	{ PCode::CrDeviceProperty_RecordingFolderFormat,	{ -1, "RecordingFolderFormat", &map_CrRecordingFolderFormat, 0, } },
	{ PCode::CrDeviceProperty_RecordingMedia,	{ -1, "RecordingMedia", &map_CrRecordingMedia, 0, } },
	{ PCode::CrDeviceProperty_RecordingSelfTimer,	{ -1, "RecordingSelfTimer", &map_CrMovieRecordingSelfTimer, 0, } },
	{ PCode::CrDeviceProperty_RecordingSelfTimerContinuous,	{ -1, "RecordingSelfTimerContinuous", &map_CrMovieRecordingSelfTimerContinuous, 0, } },
	{ PCode::CrDeviceProperty_RecordingSelfTimerCountTime,	{ -1, "RecordingSelfTimerCountTime", 0, 0, } },
	{ PCode::CrDeviceProperty_RecordingSelfTimerStatus,	{ -1, "RecordingSelfTimerStatus", &map_CrMovieRecordingSelfTimerStatus, 0, } },
	{ PCode::CrDeviceProperty_RecordingState,	{ -1, "RecordingState", &map_CrMovie_Recording_State, 0, } },
	{ PCode::CrDeviceProperty_RedEyeReduction,	{ -1, "RedEyeReduction", &map_CrRedEyeReduction, 0, } },
	{ PCode::CrDeviceProperty_ReleaseWithoutCard,	{ -1, "ReleaseWithoutCard", &map_CrReleaseWithoutCard, 0, } },
	{ PCode::CrDeviceProperty_ReleaseWithoutLens,	{ -1, "ReleaseWithoutLens", &map_CrReleaseWithoutLens, 0, } },
	{ PCode::CrDeviceProperty_Remocon_Zoom_Speed_Type,	{ -1, "Remocon_Zoom_Speed_Type", &map_CrRemoconZoomSpeedType, 0, } },
	{ PCode::CrDeviceProperty_RemoteSaveImageSize,	{ -1, "RemoteSaveImageSize", &map_CrRemoteSaveImageSize, 0, } },
	{ PCode::CrDeviceProperty_RemoteTouchOperation,	{ -1, "RemoteTouchOperation", 0, 0, } },
	{ PCode::CrDeviceProperty_RemoteTouchOperationEnableStatus,	{ -1, "RemoteTouchOperationEnableStatus", &map_CrRemoteTouchOperationEnableStatus, 0, } },
	{ PCode::CrDeviceProperty_RightLeftEyeSelect,	{ -1, "RightLeftEyeSelect", &map_CrRightLeftEyeSelect, 0, } },
	{ PCode::CrDeviceProperty_S1,	{ -1, "S1", &map_CrLockIndicator, 0, } },
	{ PCode::CrDeviceProperty_S2,	{ -1, "S2", &map_CrLockIndicator, 0, } },
	{ PCode::CrDeviceProperty_SceneFileIndex,	{ -1, "SceneFileIndex", 0, 0, } },
	{ PCode::CrDeviceProperty_SdkControlMode,	{ -1, "SdkControlMode", &map_CrSdkControlMode, 0, } },
	{ PCode::CrDeviceProperty_SecondBatteryLevel,	{ -1, "SecondBatteryLevel", &map_CrBatteryLevel, 0, } },
	{ PCode::CrDeviceProperty_SecondBatteryRemain,	{ -1, "SecondBatteryRemain", 0, 0, } },
	{ PCode::CrDeviceProperty_SelectFinder,	{ -1, "SelectFinder", &map_CrSelectFinder, 0, } },
	{ PCode::CrDeviceProperty_SelectFTPServer,	{ -1, "SelectFTPServer", 0, 0, } },
	{ PCode::CrDeviceProperty_SelectFTPServerID,	{ -1, "SelectFTPServerID", 0, 0, } },
	{ PCode::CrDeviceProperty_SelectUserBaseLookToEdit,	{ -1, "SelectUserBaseLookToEdit", 0, 0, } },
	{ PCode::CrDeviceProperty_SelectUserBaseLookToSetInPPLUT,	{ -1, "SelectUserBaseLookToSetInPPLUT", 0, 0, } },
	{ PCode::CrDeviceProperty_SensorCleaningEnableStatus,	{ -1, "SensorCleaningEnableStatus", &map_CrSensorCleaningEnableStatus, 0, } },
	{ PCode::CrDeviceProperty_ShootingSelfTimerStatus,	{ -1, "ShootingSelfTimerStatus", &map_CrShootingSelfTimerStatus, 0, } },
	{ PCode::CrDeviceProperty_ShutterAngle,	{ -1, "ShutterAngle", 0, 0, } },
	{ PCode::CrDeviceProperty_ShutterECSFrequency,	{ -1, "ShutterECSFrequency", 0, 0, } },
	{ PCode::CrDeviceProperty_ShutterECSNumber,	{ -1, "ShutterECSNumber", 0, 0, } },
	{ PCode::CrDeviceProperty_ShutterECSNumberStep,	{ -1, "ShutterECSNumberStep", 0, 0, } },
	{ PCode::CrDeviceProperty_ShutterECSSetting,	{ -1, "ShutterECSSetting", &map_CrShutterECSSetting, 0, } },
	{ PCode::CrDeviceProperty_ShutterMode,	{ -1, "ShutterMode", &map_CrShutterModeSetting, 0, } },
	{ PCode::CrDeviceProperty_ShutterModeSetting,	{ -1, "ShutterModeSetting", &map_CrShutterModeSetting, 0, } },
	{ PCode::CrDeviceProperty_ShutterModeStatus,	{ -1, "ShutterModeStatus", &map_CrShutterModeStatus, 0, } },
	{ PCode::CrDeviceProperty_ShutterReleaseTimeLagControl,	{ -1, "ShutterReleaseTimeLagControl", &map_CrShutterReleaseTimeLagControl, 0, } },
	{ PCode::CrDeviceProperty_ShutterSetting,	{ -1, "ShutterSetting", &map_CrShutterSetting, 0, } },
	{ PCode::CrDeviceProperty_ShutterSlow,	{ -1, "ShutterSlow", &map_CrShutterSlow, 0, } },
	{ PCode::CrDeviceProperty_ShutterSlowFrames,	{ -1, "ShutterSlowFrames", 0, 0, } },
	{ PCode::CrDeviceProperty_ShutterSpeed,	{ -1, "ShutterSpeed", 0, format_shutter_speed, } },
	{ PCode::CrDeviceProperty_ShutterSpeedCurrentValue,	{ -1, "ShutterSpeedCurrentValue", 0, 0, } },
	{ PCode::CrDeviceProperty_ShutterSpeedValue,	{ -1, "ShutterSpeedValue", 0, format_shutter_speed_value, } },
	{ PCode::CrDeviceProperty_ShutterType,	{ -1, "ShutterType", &map_CrShutterType, 0, } },
	{ PCode::CrDeviceProperty_SilentMode,	{ -1, "SilentMode", &map_CrSilentMode, 0, } },
	{ PCode::CrDeviceProperty_SilentModeApertureDriveInAF,	{ -1, "SilentModeApertureDriveInAF", &map_CrSilentModeApertureDriveInAF, 0, } },
	{ PCode::CrDeviceProperty_SilentModeAutoPixelMapping,	{ -1, "SilentModeAutoPixelMapping", &map_CrSilentModeAutoPixelMapping, 0, } },
	{ PCode::CrDeviceProperty_SilentModeShutterWhenPowerOff,	{ -1, "SilentModeShutterWhenPowerOff", &map_CrSilentModeShutterWhenPowerOff, 0, } },
	{ PCode::CrDeviceProperty_SnapshotInfo,	{ -1, "SnapshotInfo", 0, 0, } },
	{ PCode::CrDeviceProperty_SoftSkinEffect,	{ -1, "SoftSkinEffect", &map_CrSoftSkinEffect, 0, } },
	{ PCode::CrDeviceProperty_SQFrameRate,	{ -1, "SQFrameRate", 0, 0, } },
	{ PCode::CrDeviceProperty_SQRecordingFrameRateSetting,	{ -1, "SQRecordingFrameRateSetting", &map_CrRecordingFrameRateSettingMovie, 0, } },
	{ PCode::CrDeviceProperty_SQRecordingSetting,	{ -1, "SQRecordingSetting", &map_CrRecordingSettingMovie, 0, } },
	{ PCode::CrDeviceProperty_Still_Image_Trans_Size,	{ -1, "Still_Image_Trans_Size", &map_CrPropertyStillImageTransSize, 0, } },
	{ PCode::CrDeviceProperty_StillImageQuality,	{ -1, "StillImageQuality", &map_CrImageQuality, 0, } },
	{ PCode::CrDeviceProperty_StillImageStoreDestination,	{ -1, "StillImageStoreDestination", &map_CrStillImageStoreDestination, 0, } },
	{ PCode::CrDeviceProperty_SubjectRecognitionAF,	{ -1, "SubjectRecognitionAF", &map_CrSubjectRecognitionAF, 0, } },
	{ PCode::CrDeviceProperty_SubjectRecognitionAnimalBirdDetectionParts,	{ -1, "SubjectRecognitionAnimalBirdDetectionParts", &map_CrSubjectRecognitionAnimalBirdDetectionParts, 0, } },
	{ PCode::CrDeviceProperty_SubjectRecognitionAnimalBirdPriority,	{ -1, "SubjectRecognitionAnimalBirdPriority", &map_CrSubjectRecognitionAnimalBirdPriority, 0, } },
	{ PCode::CrDeviceProperty_SubjectRecognitionAnimalDetectionParts,	{ -1, "SubjectRecognitionAnimalDetectionParts", &map_CrSubjectRecognitionAnimalBirdDetectionParts, 0, } },
	{ PCode::CrDeviceProperty_SubjectRecognitionAnimalDetectionSensitivity,	{ -1, "SubjectRecognitionAnimalDetectionSensitivity", 0, 0, } },
	{ PCode::CrDeviceProperty_SubjectRecognitionAnimalTrackingSensitivity,	{ -1, "SubjectRecognitionAnimalTrackingSensitivity", 0, 0, } },
	{ PCode::CrDeviceProperty_SubjectRecognitionAnimalTrackingSubjectShiftRange,	{ -1, "SubjectRecognitionAnimalTrackingSubjectShiftRange", 0, 0, } },
	{ PCode::CrDeviceProperty_SubjectRecognitionBirdDetectionParts,	{ -1, "SubjectRecognitionBirdDetectionParts", &map_CrSubjectRecognitionAnimalBirdDetectionParts, 0, } },
	{ PCode::CrDeviceProperty_SubjectRecognitionBirdDetectionSensitivity,	{ -1, "SubjectRecognitionBirdDetectionSensitivity", 0, 0, } },
	{ PCode::CrDeviceProperty_SubjectRecognitionBirdTrackingSensitivity,	{ -1, "SubjectRecognitionBirdTrackingSensitivity", 0, 0, } },
	{ PCode::CrDeviceProperty_SubjectRecognitionBirdTrackingSubjectShiftRange,	{ -1, "SubjectRecognitionBirdTrackingSubjectShiftRange", 0, 0, } },
	{ PCode::CrDeviceProperty_SubjectRecognitionCarTrainDetectionSensitivity,	{ -1, "SubjectRecognitionCarTrainDetectionSensitivity", 0, 0, } },
	{ PCode::CrDeviceProperty_SubjectRecognitionCarTrainTrackingSensitivity,	{ -1, "SubjectRecognitionCarTrainTrackingSensitivity", 0, 0, } },
	{ PCode::CrDeviceProperty_SubjectRecognitionCarTrainTrackingSubjectShiftRange,	{ -1, "SubjectRecognitionCarTrainTrackingSubjectShiftRange", 0, 0, } },
	{ PCode::CrDeviceProperty_SubjectRecognitionInAF,	{ -1, "SubjectRecognitionInAF", &map_CrSubjectRecognitionInAF, 0, } },
	{ PCode::CrDeviceProperty_SubjectRecognitionInsectDetectionSensitivity,	{ -1, "SubjectRecognitionInsectDetectionSensitivity", 0, 0, } },
	{ PCode::CrDeviceProperty_SubjectRecognitionInsectTrackingSensitivity,	{ -1, "SubjectRecognitionInsectTrackingSensitivity", 0, 0, } },
	{ PCode::CrDeviceProperty_SubjectRecognitionInsectTrackingSubjectShiftRange,	{ -1, "SubjectRecognitionInsectTrackingSubjectShiftRange", 0, 0, } },
	{ PCode::CrDeviceProperty_SubjectRecognitionPersonTrackingSubjectShiftRange,	{ -1, "SubjectRecognitionPersonTrackingSubjectShiftRange", 0, 0, } },
	{ PCode::CrDeviceProperty_SubjectRecognitionPlaneDetectionSensitivity,	{ -1, "SubjectRecognitionPlaneDetectionSensitivity", 0, 0, } },
	{ PCode::CrDeviceProperty_SubjectRecognitionPlaneTrackingSensitivity,	{ -1, "SubjectRecognitionPlaneTrackingSensitivity", 0, 0, } },
	{ PCode::CrDeviceProperty_SubjectRecognitionPlaneTrackingSubjectShiftRange,	{ -1, "SubjectRecognitionPlaneTrackingSubjectShiftRange", 0, 0, } },
	{ PCode::CrDeviceProperty_SubjectRecognitionPriorityOnRegisteredFace,	{ -1, "SubjectRecognitionPriorityOnRegisteredFace", &map_CrSubjectRecognitionPriorityOnRegisteredFace, 0, } },
	{ PCode::CrDeviceProperty_SynchroterminalForcedOutput,	{ -1, "SynchroterminalForcedOutput", &map_CrSynchroterminalForcedOutput, 0, } },
	{ PCode::CrDeviceProperty_SystemErrorCautionStatus,	{ -1, "SystemErrorCautionStatus", &map_CrSystemErrorCautionStatus, 0, } },
	{ PCode::CrDeviceProperty_TCUBDisplaySetting,	{ -1, "TCUBDisplaySetting", &map_CrTCUBDisplaySetting, 0, } },
	{ PCode::CrDeviceProperty_TimeCodeFormat,	{ -1, "TimeCodeFormat", &map_CrTimeCodeFormat, 0, } },
	{ PCode::CrDeviceProperty_TimeCodeMake,	{ -1, "TimeCodeMake", &map_CrTimeCodeMake, 0, } },
	{ PCode::CrDeviceProperty_TimeCodePreset,	{ -1, "TimeCodePreset", 0, 0, } },
	{ PCode::CrDeviceProperty_TimeCodePresetResetEnableStatus,	{ -1, "TimeCodePresetResetEnableStatus", &map_CrTimeCodePresetResetEnableStatus, 0, } },
	{ PCode::CrDeviceProperty_TimeCodeRun,	{ -1, "TimeCodeRun", &map_CrTimeCodeRun, 0, } },
	{ PCode::CrDeviceProperty_TimeShiftPreShootingTimeSetting,	{ -1, "TimeShiftPreShootingTimeSetting", 0, 0, } },
	{ PCode::CrDeviceProperty_TimeShiftShooting,	{ -1, "TimeShiftShooting", &map_CrTimeShiftShooting, 0, } },
	{ PCode::CrDeviceProperty_TimeShiftShootingStatus,	{ -1, "TimeShiftShootingStatus", &map_CrTimeShiftShootingStatus, 0, } },
	{ PCode::CrDeviceProperty_TimeShiftTriggerSetting,	{ -1, "TimeShiftTriggerSetting", &map_CrTimeShiftTriggerSetting, 0, } },
	{ PCode::CrDeviceProperty_TNumber,	{ -1, "TNumber", 0, 0, } },
	{ PCode::CrDeviceProperty_TotalBatteryLevel,	{ -1, "TotalBatteryLevel", &map_CrBatteryLevel, 0, } },
	{ PCode::CrDeviceProperty_TotalBatteryRemain,	{ -1, "TotalBatteryRemain", 0, 0, } },
	{ PCode::CrDeviceProperty_TouchOperation,	{ -1, "TouchOperation", &map_CrTouchOperation, 0, } },
	{ PCode::CrDeviceProperty_TrackingOnAndAFOnEnableStatus,	{ -1, "TrackingOnAndAFOnEnableStatus", &map_CrTrackingOnAndAFOnEnableStatus, 0, } },
	{ PCode::CrDeviceProperty_UpdateBodyStatus,	{ -1, "UpdateBodyStatus", &map_CrUpdateStatus, 0, } },
	{ PCode::CrDeviceProperty_USBPowerSupply,	{ -1, "USBPowerSupply", &map_CrUSBPowerSupply, 0, } },
	{ PCode::CrDeviceProperty_UserBaseLookAELevelOffset,	{ -1, "UserBaseLookAELevelOffset", 0, 0, } },
	{ PCode::CrDeviceProperty_UserBaseLookInput,	{ -1, "UserBaseLookInput", &map_CrUserBaseLookInput, 0, } },
	{ PCode::CrDeviceProperty_UserBitPreset,	{ -1, "UserBitPreset", 0, 0, } },
	{ PCode::CrDeviceProperty_UserBitPresetResetEnableStatus,	{ -1, "UserBitPresetResetEnableStatus", &map_CrUserBitPresetResetEnableStatus, 0, } },
	{ PCode::CrDeviceProperty_UserBitTimeRec,	{ -1, "UserBitTimeRec", &map_CrUserBitTimeRec, 0, } },
	{ PCode::CrDeviceProperty_WakeOnLAN,	{ -1, "WakeOnLAN", &map_CrWakeOnLAN, 0, } },
	{ PCode::CrDeviceProperty_WhiteBalance,	{ -1, "WhiteBalance", &map_CrWhiteBalanceSetting, 0, } },
	{ PCode::CrDeviceProperty_WhiteBalanceModeSetting,	{ -1, "WhiteBalanceModeSetting", &map_CrWhiteBalanceModeSetting, 0, } },
	{ PCode::CrDeviceProperty_WhiteBalanceTint,	{ -1, "WhiteBalanceTint", 0, 0, } },
	{ PCode::CrDeviceProperty_WhiteBalanceTintStep,	{ -1, "WhiteBalanceTintStep", 0, 0, } },
	{ PCode::CrDeviceProperty_WindNoiseReduct,	{ -1, "WindNoiseReduct", &map_CrWindNoiseReduction, 0, } },
	{ PCode::CrDeviceProperty_WirelessFlash,	{ -1, "WirelessFlash", &map_CrWirelessFlash, 0, } },
	{ PCode::CrDeviceProperty_WriteCopyrightInfo,	{ -1, "WriteCopyrightInfo", &map_CrWriteCopyrightInfo, 0, } },
	{ PCode::CrDeviceProperty_Zoom_Bar_Information,	{ -1, "Zoom_Bar_Information", 0, 0, } },
	{ PCode::CrDeviceProperty_Zoom_Operation,	{ -1, "Zoom_Operation", 0, 0, } },
	{ PCode::CrDeviceProperty_Zoom_Operation_Status,	{ -1, "Zoom_Operation_Status", &map_CrZoomOperationEnableStatus, 0, } },
	{ PCode::CrDeviceProperty_Zoom_Scale,	{ -1, "Zoom_Scale", 0, 0, } },
	{ PCode::CrDeviceProperty_Zoom_Setting,	{ -1, "Zoom_Setting", &map_CrZoomSettingType, 0, } },
	{ PCode::CrDeviceProperty_Zoom_Speed_Range,	{ -1, "Zoom_Speed_Range", 0, 0, } },
	{ PCode::CrDeviceProperty_Zoom_Type_Status,	{ -1, "Zoom_Type_Status", &map_CrZoomTypeStatus, 0, } },
	{ PCode::CrDeviceProperty_ZoomAndFocusPosition_Load,	{ -1, "ZoomAndFocusPosition_Load", 0, 0, } },
	{ PCode::CrDeviceProperty_ZoomAndFocusPosition_Save,	{ -1, "ZoomAndFocusPosition_Save", 0, 0, } },
	{ PCode::CrDeviceProperty_ZoomAndFocusPresetDataVersion,	{ -1, "ZoomAndFocusPresetDataVersion", 0, 0, } },
	{ PCode::CrDeviceProperty_ZoomAndFocusPresetZoomOnly_Set,	{ -1, "ZoomAndFocusPresetZoomOnly_Set", &map_CrZoomAndFocusPresetZoomOnlyValue, 0, } },
	{ PCode::CrDeviceProperty_ZoomDistance,	{ -1, "ZoomDistance", 0, 0, } },
	{ PCode::CrDeviceProperty_ZoomDistanceUnitSetting,	{ -1, "ZoomDistanceUnitSetting", &map_CrZoomDistanceUnitSetting, 0, } },
	{ PCode::CrDeviceProperty_ZoomDrivingStatus,	{ -1, "ZoomDrivingStatus", &map_CrZoomDrivingStatus, 0, } },
};

//	{ PCode::CrDeviceProperty_\1,	{ -1, "\1", } },
std::map<PCode, struct PropertyValueString> PropStr {
	{ PCode::CrDeviceProperty_ImageID_String,	{ -1, "ImageID_String", } },
	{ PCode::CrDeviceProperty_LensModelName,	{ -1, "LensModelName", } },
	{ PCode::CrDeviceProperty_LensVersionNumber,	{ -1, "LensVersionNumber", } },
	{ PCode::CrDeviceProperty_RecorderClipName,	{ -1, "RecorderClipName", } },
	{ PCode::CrDeviceProperty_SoftwareVersion,	{ -1, "SoftwareVersion", } },
};

CameraDevice::CameraDevice(std::int32_t no, SCRSDK::ICrCameraObjectInfo const* camera_info)
    : m_number(no)
    , m_device_handle(0)
    , m_connected(false)
    , m_conn_type(ConnectionType::UNKNOWN)
    , m_net_info()
    , m_usb_info()
    , m_modeSDK(SCRSDK::CrSdkControlMode_Remote)
    , m_spontaneous_disconnection(false)
    , m_fingerprint("")
    , m_userPassword("")
    , m_eventPromise(nullptr)
    , m_cb_respProp(nullptr)
{
    m_info = SDK::CreateCameraObjectInfo(
        camera_info->GetName(),
        camera_info->GetModel(),
        camera_info->GetUsbPid(),
        camera_info->GetIdType(),
        camera_info->GetIdSize(),
        camera_info->GetId(),
        camera_info->GetConnectionTypeName(),
        camera_info->GetAdaptorName(),
        camera_info->GetPairingNecessity(),
        camera_info->GetSSHsupport()
    );

    m_conn_type = parse_connection_type(m_info->GetConnectionTypeName());
    switch (m_conn_type)
    {
    case ConnectionType::NETWORK:
        m_net_info = parse_ip_info(m_info->GetId(), m_info->GetIdSize());
        break;
    case ConnectionType::USB:
        m_usb_info.pid = m_info->GetUsbPid();
        break;
    case ConnectionType::UNKNOWN:
        [[fallthrough]];
    default:
        // Do nothing
        break;
    }
}

CameraDevice::~CameraDevice()
{
    if (m_info) m_info->Release();
}

bool CameraDevice::getfingerprint()
{
    CrInt32u fpLen = 0;
    char fpBuff[128] = { 0 };
    SDK::CrError err = SDK::GetFingerprint(m_info, fpBuff, &fpLen);

    if (CR_SUCCEEDED(err))
    {
        m_fingerprint = std::string(fpBuff, fpLen);
        return true;
    }
    return false;
}

bool CameraDevice::connect(SCRSDK::CrSdkControlMode openMode, SCRSDK::CrReconnectingSet reconnect)
{
    const char* inputId = "admin";
    char inputPassword[32] = { 0 };
    if (SDK::CrSSHsupportValue::CrSSHsupport_ON == get_sshsupport())
    {
        if (!is_getfingerprint())
        {
            bool resFp = getfingerprint();
            if (resFp)
            {
                tout << "fingerprint: \n" << m_fingerprint.c_str() << std::endl;
                tout << std::endl << "Are you sure you want to continue connecting ? (y/n) > ";
                text yesno;
                std::getline(cli::tin, yesno);
                if (yesno != TEXT("y"))
                {
                    m_fingerprint.clear();
                    return false;
                }
            }
        }
        if (!is_setpassword())
        {
            cli::tout << "Please SSH password > ";
            cli::text userPw;
 
            // Stores the password
            char maskPw = '*';
            char ch_ipt = {};

            // Until condition is true
            while (true) {

#if defined (_WIN32) || defined(_WIN64)
                ch_ipt = getch();
#else
                ch_ipt = getch_for_Nix();
#endif

                // if the ch_ipt
                if (ch_ipt == Password_Key_Enter) {
                    tout << std::endl;
                    break;
                }
                else if (ch_ipt == Password_Key_Back
                    && userPw.length() != 0) {
                    userPw.pop_back();

                    // Cout statement is very
                    // important as it will erase
                    // previously printed character
                    tout << "\b \b";

                    continue;
                }

                // Without using this, program
                // will crash as \b can't be
                // print in beginning of line
                else if (ch_ipt == Password_Key_Back
                    && userPw.length() == 0) {
                    continue;
                }

                userPw.push_back(ch_ipt);
                tout << maskPw;
            }

#if defined(_WIN32) || (_WIN64)
            mbstate_t mbstate;
            size_t retPw;
            memset(&mbstate, 0, sizeof(mbstate_t));
            const wchar_t* wcsInStr = userPw.c_str();
            errno_t erno = wcsrtombs_s(&retPw, inputPassword, &wcsInStr, 32, &mbstate);
#else
            strncpy(inputPassword, (const char*)userPw.c_str(), userPw.size());
#endif
            m_userPassword = std::string(inputPassword, userPw.size());

        }
    }

    m_spontaneous_disconnection = false;
    auto connect_status = SDK::Connect(m_info, this, &m_device_handle, openMode, reconnect, inputId, m_userPassword.c_str(), m_fingerprint.c_str(), m_fingerprint.size());
    if (CR_FAILED(connect_status)) {
        text id(this->get_id());
        tout << std::endl << "Failed to connect: 0x" << std::hex << connect_status << std::dec << ". " << m_info->GetModel() << " (" << id.data() << ")\n";
        m_userPassword.clear();
        return false;
    }
#ifndef PORT82
    set_save_info(TEXT("DSC"));
#else
    set_save_info(TEXT("DSC2"));
#endif
    return true;
}

bool CameraDevice::disconnect()
{
    // m_fingerprint.clear();  // Use as needed
    // m_userPassword.clear(); // Use as needed
    m_spontaneous_disconnection = true;
    tout << "Disconnect from camera...\n";
    auto disconnect_status = SDK::Disconnect(m_device_handle);
    if (CR_FAILED(disconnect_status)) {
        tout << "Disconnect failed to initialize.\n";
        return false;
    }
    return true;
}

bool CameraDevice::release()
{
    tout << "Release camera...\n";
    auto finalize_status = SDK::ReleaseDevice(m_device_handle);
    m_device_handle = 0; // clear
    if (CR_FAILED(finalize_status)) {
        tout << "Finalize device failed to initialize.\n";
        return false;
    }
    return true;
}

CrInt32u CameraDevice::get_sshsupport()
{
    return m_info->GetSSHsupport();
}

SCRSDK::CrSdkControlMode CameraDevice::get_sdkmode() 
{
    load_properties();
    if (SDK::CrSdkControlMode_ContentsTransfer == m_modeSDK) {
        tout << TEXT("Contents Transfer Mode\n");
    } else {
        tout << TEXT("Remote Control Mode\n");
    }
    return m_modeSDK;
}

////////////////

void CameraDevice::s1_shooting()
{
	std::cout << "Shutter Half Press down&up\n";
	setProp(PCode::CrDeviceProperty_S1, (uint32_t)SDK::CrLockIndicator::CrLockIndicator_Locked);
	int ret = waitProp(PCode::CrDeviceProperty_FocusIndication, 1000);
	setProp(PCode::CrDeviceProperty_S1, (uint32_t)SDK::CrLockIndicator::CrLockIndicator_Unlocked);
}

void CameraDevice::af_shutter()
{
	std::cout << "S1 shooting...\n";
	if(GetProp_(PCode::CrDeviceProperty_S1)->current != SDK::CrLockIndicator::CrLockIndicator_Locked) {
		auto focusMode = GetProp_(PCode::CrDeviceProperty_FocusMode)->current;
		if(focusMode != SDK::CrFocus_MF) {
			setProp(PCode::CrDeviceProperty_S1, (uint32_t)SDK::CrLockIndicator::CrLockIndicator_Locked);
			int ret = waitProp(PCode::CrDeviceProperty_FocusIndication, 1000);
			if(ret) {
				setProp(PCode::CrDeviceProperty_S1, (uint32_t)SDK::CrLockIndicator::CrLockIndicator_Unlocked);
				return;
			}
		}
	}

	SDK::SendCommand(m_device_handle, SDK::CrCommandId::CrCommandId_Release, SDK::CrCommandParam::CrCommandParam_Down);
	std::this_thread::sleep_for(35ms);
	SDK::SendCommand(m_device_handle, SDK::CrCommandId::CrCommandId_Release, SDK::CrCommandParam::CrCommandParam_Up);

	setProp(PCode::CrDeviceProperty_S1, (uint32_t)SDK::CrLockIndicator::CrLockIndicator_Unlocked);
	std::cout << "Shutter down&up\n";
}

////////////////

bool CameraDevice::is_connected() const
{
    return m_connected.load();
}

std::uint32_t CameraDevice::ip_address() const
{
    if (m_conn_type == ConnectionType::NETWORK)
        return m_net_info.ip_address;
    return 0;
}

text CameraDevice::ip_address_fmt() const
{
    if (m_conn_type == ConnectionType::NETWORK)
    {
        return m_net_info.ip_address_fmt;
    }
    return text(TEXT("N/A"));
}

text CameraDevice::mac_address() const
{
    if (m_conn_type == ConnectionType::NETWORK)
        return m_net_info.mac_address;
    return text(TEXT("N/A"));
}

std::int16_t CameraDevice::pid() const
{
    if (m_conn_type == ConnectionType::USB)
        return m_usb_info.pid;
    return 0;
}

text CameraDevice::get_id()
{
    if (ConnectionType::NETWORK == m_conn_type) {
        return m_net_info.mac_address;
    }
    else
        return text((TCHAR*)m_info->GetId());
}

void CameraDevice::OnConnected(SDK::DeviceConnectionVersioin version)
{
    m_connected.store(true);
    text id(this->get_id());
    tout << "Connected to " << m_info->GetModel() << " (" << id.data() << ")\n";
}

void CameraDevice::OnDisconnected(CrInt32u error)
{
    m_connected.store(false);
    text id(this->get_id());
    tout << "Disconnected from " << m_info->GetModel() << " (" << id.data() << ")\n";
    if ((false == m_spontaneous_disconnection) && (SDK::CrSdkControlMode_ContentsTransfer == m_modeSDK)) {
        std::cout << "ERROR: Please reboot this command(" << __LINE__ << ").\n";
    }
}

void CameraDevice::OnCompleteDownload(CrChar* filename, CrInt32u type )
{
    std::cout << "OnCompleteDownload.\n";
}

void CameraDevice::OnNotifyContentsTransfer(CrInt32u notify, SDK::CrContentHandle contentHandle, CrChar* filename)
{
    std::cout << "OnNotifyContentsTransfer.\n";
}

void CameraDevice::OnWarning(CrInt32u warning)
{
    text id(this->get_id());
    if (SDK::CrWarning_Connect_Reconnecting == warning) {
        tout << "Device Disconnected. Reconnecting... " << m_info->GetModel() << " (" << id.data() << ")\n";
        return;
    }
    switch (warning)
    {
    case SDK::CrWarning_ContentsTransferMode_Invalid:
    case SDK::CrWarning_ContentsTransferMode_DeviceBusy:
    case SDK::CrWarning_ContentsTransferMode_StatusError:
        std::cout << "\nThe camera is in a condition where it cannot transfer content.\n\n";
        std::cout << "Please input '0' to return to the TOP-MENU and connect again.\n";
        break;
    case SDK::CrWarning_ContentsTransferMode_CanceledFromCamera:
        std::cout << "\nContent transfer mode canceled.\n";
        std::cout << "If you want to continue content transfer, input '0' to return to the TOP-MENU and connect again.\n\n";
        break;
    case SDK::CrWarning_CameraSettings_Read_Result_OK:
        std::cout << "\nConfiguration file read successfully.\n\n";
        break;
    case SDK::CrWarning_CameraSettings_Read_Result_NG:
        std::cout << "\nFailed to load configuration file\n\n";
        break;
    case SDK::CrWarning_CameraSettings_Save_Result_NG:
        std::cout << "\nConfiguration file save request failed.\n\n";
        break;
    case SDK::CrWarning_RequestDisplayStringList_Success:
        std::cout << "\nRequest for DisplayStringList  successfully\n\n";        
        break;
    case SDK::CrWarning_RequestDisplayStringList_Error: 
        std::cout << "\nFailed to Request for DisplayStringList\n\n";
        break;
    case SDK::CrWarning_CustomWBCapture_Result_OK:
        std::cout << "\nCustom WB capture successful.\n\n";
        break;
    case SDK::CrWarning_CustomWBCapture_Result_Invalid:
    case SDK::CrWarning_CustomWBCapture_Result_NG:
        std::cout << "\nCustom WB capture failure.\n\n";
        break;
    case SDK::CrWarning_FocusPosition_Result_Invalid:
        std::cout << "\nFocus Position Result Invalid.\n\n";
        break;
    case SDK::CrWarning_FocusPosition_Result_OK:
        std::cout << "\nFocus Position Result OK.\n\n";
        break;
    case SDK::CrWarning_FocusPosition_Result_NG:
        std::cout << "\nFocus Position Result NG.\n\n";
        break;
    default:
        return;
    }
}

void CameraDevice::OnWarningExt(CrInt32u warning, CrInt32 param1, CrInt32 param2, CrInt32 param3)
{
    std::cout << "<Receive>\n";
#if defined(_WIN64)
    printf_s("warning: 0x%08X\n", warning);
    printf_s(" param1: 0x%08X\n", param1);
    printf_s(" param2: 0x%08X\n", param2);
    printf_s(" param3: 0x%08X\n", param3);
#else // temporary
    printf("warning: 0x%08X\n", warning);
    printf(" param1: 0x%08X\n", param1);
    printf(" param2: 0x%08X\n", param2);
    printf(" param3: 0x%08X\n", param3);
#endif
    std::cout << "\n<warning>\n";
    std::cout << " 0x00060001: CrWarningExt_AFStatus\n";
    std::cout << "             <param1> Focus Indication\n";
    std::cout << " 0x00060002: CrWarningExt_OperationResults\n";
    std::cout << "             <param1> enum CrSdkApi\n";
    std::cout << "                      0x00000002: CrSdkApi_SetDeviceProperty\n";
    std::cout << "                      0x00000003: CrSdkApi_SendCommand\n";
    std::cout << "             <param2> CrDevicePropertyCode or CrCommandId\n";
    std::cout << "             <param3> enum CrWarningExt_OperationResultsParam\n";
    std::cout << "                      0x00000000: CrWarningExt_OperationResultsParam_Invalid\n";
    std::cout << "                      0x00000001: CrWarningExt_OperationResultsParam_OK\n";
    std::cout << "                      0x00000002: CrWarningExt_OperationResultsParam_NG\n";
}

void CameraDevice::OnPropertyChanged()
{
    // std::cout << "Property changed.\n";
}

void CameraDevice::OnLvPropertyChanged()
{
    // std::cout << "LvProperty changed.\n";
}

void CameraDevice::OnError(CrInt32u error)
{
    text id(this->get_id());
    text msg = get_message_desc(error);
    if (!msg.empty()) {
        // output is 2 line
        tout << std::endl << msg.data() << std::endl;
        tout << m_info->GetModel() << " (" << id.data() << ")" << std::endl;
        if (SDK::CrError_Connect_TimeOut == error) {
            // append 1 line
            std::cout << "Please input '0' after Connect camera" << std::endl;
            return;
        }
        if (SDK::CrError_Connect_Disconnected == error)
        {
            return;
        }
        if (SDK::CrError_Connect_SSH_ServerConnectFailed == error
            || SDK::CrError_Connect_SSH_InvalidParameter == error
            || SDK::CrError_Connect_SSH_ServerAuthenticationFailed == error
            || SDK::CrError_Connect_SSH_UserAuthenticationFailed == error
            || SDK::CrError_Connect_SSH_PortForwardFailed == error
            || SDK::CrError_Connect_SSH_GetFingerprintFailed == error)
        {
            m_fingerprint.clear();
            m_userPassword.clear();
        }
        //std::cout << "Please input '0' to return to the TOP-MENU\n";
		if(is_connected())
			disconnect();
        std::cout << "ERROR: Please reboot this command(" << __LINE__ << ").\n";
    }
}
//////////////// for CrSDK.IP

void CameraDevice::OnLvPropertyChangedCodes(CrInt32u num, CrInt32u* codes)
{
	for(std::uint32_t i = 0; i < num; ++i) {
		SDK::CrLiveViewPropertyCode prop = (SDK::CrLiveViewPropertyCode)codes[i];

		switch(prop) {
		case SDK::CrLiveViewPropertyCode::CrLiveViewProperty_AF_Area_Position:			// FocusFrameInfo
		case SDK::CrLiveViewPropertyCode::CrLiveViewProperty_FaceFrame:					// FaceFrameInfo
		case SDK::CrLiveViewPropertyCode::CrLiveViewProperty_Focus_Magnifier_Position:	// Magnifier_Position
		case SDK::CrLiveViewPropertyCode::CrLiveViewProperty_TrackingFrame:				// TrackingFrameInfo
		//	load_liveview_properties(1, &codes[i]);
			break;
		default:
			break;
		}
	}
}

void CameraDevice::OnPropertyChangedCodes(CrInt32u num, CrInt32u* codes)
{
	for(std::uint32_t i = 0; i < num; ++i) {
		PCode id = (PCode)codes[i];

		auto iter = Prop.find(id);
		if(iter != end(Prop)) {
			iter->second.old = true;
		//	std::cout << iter->second.tag.c_str() << "\n";
		}

		if(m_respPropId == id) {
			m_respPropId = (PCode)0;
			if(m_cb_respProp) {
				(*m_cb_respProp)(id);
				m_cb_respProp = NULL;
			}
			if(m_eventPromise) {
				m_eventPromise->set_value();
				m_eventPromise = NULL;
			}
		} else {
			switch(id) {
			case PCode::CrDeviceProperty_FNumber:
			case PCode::CrDeviceProperty_ShutterSpeed:
			case PCode::CrDeviceProperty_IsoSensitivity:

			case PCode::CrDeviceProperty_S1:
			case PCode::CrDeviceProperty_CancelRemoteTouchOperationEnableStatus:
			case PCode::CrDeviceProperty_RecordingState:
			case PCode::CrDeviceProperty_FocusIndication:
			case PCode::CrDeviceProperty_FollowFocusPositionCurrentValue:	// FX3
				SendProp(id);
				break;
			default:
				SendProp(id);
				break;
			}
		}
	}
}

bool CameraDevice::set_save_info(text prefix) const
{
#if defined(__APPLE__)
	text_char path[MAC_MAX_PATH]; /*MAX_PATH*/
	memset(path, 0, sizeof(path));
	if(NULL == getcwd(path, sizeof(path) - 1)){
		std::cout << "Folder path is too long.\n";
		return false;
	}
	auto save_status = SDK::SetSaveInfo(m_device_handle, path, 
							const_cast<text_char*>(prefix.data()), -1/*startNo*/);
#else
	text path = fs::current_path().native();
	tout << path.data() << '\n';

	auto save_status = SDK::SetSaveInfo(m_device_handle, const_cast<text_char*>(path.data()), 
							const_cast<text_char*>(prefix.data()), -1/*startNo*/);
#endif
	if (CR_FAILED(save_status)) {
		std::cout << "Failed to set save path.\n";
		return false;
	}
	return true;
}
/*
std::int32_t CameraDevice::get_live_view(std::uint8_t* buf[])
{
	// ?
	CrInt32 num = 0;
	SDK::CrLiveViewProperty* property = nullptr;
	auto err = SDK::GetLiveViewProperties(m_device_handle, &property, &num);
	if(CR_FAILED(err)) {
		std::cout << "GetLiveView FAILED\n";
		return -1;
	}
	SDK::ReleaseLiveViewProperties(m_device_handle, property);

	SDK::CrImageInfo inf;
	err = SDK::GetLiveViewImageInfo(m_device_handle, &inf);
	if(CR_FAILED(err)) {
		std::cout << "GetLiveView FAILED\n";
		return -1;
	}

	CrInt32u bufSize = inf.GetBufferSize();
	if(bufSize < 1) {
		std::cout << "GetLiveView FAILED\n";
		return -1;
	}

	auto* image_data = new SDK::CrImageDataBlock();  // 
	if(!image_data) {
		std::cout << "GetLiveView FAILED\n";
		return -1;
	}

	CrInt8u* image_buff = new CrInt8u[bufSize];  //
	if(!image_buff) {
		delete image_data;
		std::cout << "GetLiveView FAILED\n";
		return -1;
	}

	std::int32_t imageSize = -1;
	image_data->SetSize(bufSize);
	image_data->SetData(image_buff);
	err = SDK::GetLiveViewImage(m_device_handle, image_data);
	if(CR_FAILED(err)) {
		std::cout << "GetLiveView FAILED\n";
	} else if(0 < image_data->GetSize()) {
		imageSize = image_data->GetImageSize();
		*buf = new std::uint8_t[imageSize];  //
		if(!*buf) {
			imageSize = -1;
		} else {
			MemCpyEx(*buf, image_data->GetImageData(), imageSize);
		}
	}
	delete[] image_buff;
	delete image_data;
	return imageSize;
}
*/
void CameraDevice::parse_prop(SDK::CrDeviceProperty& devProp, PCode id)
{
	PropertyValue& prop = Prop.at(id);

	prop.writable = devProp.IsSetEnableCurrentValue();
	prop.readable = devProp.IsGetEnableCurrentValue();
	prop.dataType = devProp.GetValueType();
	prop.current = devProp.GetCurrentValue();

	int dataLen = 1;
	switch(prop.dataType & 0x100F) {
	case SDK::CrDataType::CrDataType_UInt8:		dataLen = sizeof(std::uint8_t); break;
	case SDK::CrDataType::CrDataType_Int8:		dataLen = sizeof(std::int8_t); break;
	case SDK::CrDataType::CrDataType_UInt16:	dataLen = sizeof(std::uint16_t); break;
	case SDK::CrDataType::CrDataType_Int16:		dataLen = sizeof(std::int16_t); break;
	case SDK::CrDataType::CrDataType_UInt32:	dataLen = sizeof(std::uint32_t); break;
	case SDK::CrDataType::CrDataType_UInt64:	dataLen = sizeof(std::uint64_t); break;
	default: return;
	}

	unsigned char const* buf = devProp.GetValues();
	std::uint32_t nval = devProp.GetValueSize() / dataLen;
	prop.possible.resize(nval);
	for (std::uint32_t i = 0; i < nval; ++i) {
		int64_t data = 0;
		switch(prop.dataType & 0x100F) {
		case SDK::CrDataType::CrDataType_UInt8:		data = (reinterpret_cast<std::uint8_t const*>(buf))[i]; break;
		case SDK::CrDataType::CrDataType_Int8:		data = (reinterpret_cast<std::int8_t const*>(buf))[i]; break;
		case SDK::CrDataType::CrDataType_UInt16:	data = (reinterpret_cast<std::uint16_t const*>(buf))[i]; break;
		case SDK::CrDataType::CrDataType_Int16:		data = (reinterpret_cast<std::int16_t const*>(buf))[i]; break;
		case SDK::CrDataType::CrDataType_UInt32:	data = (reinterpret_cast<std::uint32_t const*>(buf))[i]; break;
		case SDK::CrDataType::CrDataType_UInt64:	data = (reinterpret_cast<std::uint64_t const*>(buf))[i]; break;
		default: break;
		}
		prop.possible.at(i) = data;
	}
}

void CameraDevice::parse_propStr(SDK::CrDeviceProperty& devProp, PCode id)
{
	PropertyValueString& prop = PropStr.at(id);

	prop.writable = devProp.IsSetEnableCurrentValue();
	prop.readable = devProp.IsGetEnableCurrentValue();
	prop.dataType = devProp.GetValueType();

	uint16_t* dp = devProp.GetCurrentStr();
	if(!dp) return;

#if defined (_WIN32) || defined(_WIN64)
	prop.current = wstring_convert.to_bytes((wchar_t*)(dp+1));
#else
	int length = dp[0];
	prop.current = wstring_convert.to_bytes(std::u16string((dp+1), (dp+1)+length));
#endif

}

void CameraDevice::load_properties(std::uint32_t num, std::uint32_t* codes)
{
	std::int32_t nprop = 0;
	SDK::CrDeviceProperty* prop_list = nullptr;
	SDK::CrError status = SDK::CrError_Generic;
	if (0 == num){
		status = SDK::GetDeviceProperties(m_device_handle, &prop_list, &nprop);
	} else {
		status = SDK::GetSelectDeviceProperties(m_device_handle, num, codes, &prop_list, &nprop);
	}
	if(CR_FAILED(status)) {
		std::cout << "Failed to get device properties.\n";
		return;
	}
	if(!prop_list || nprop <= 0) {
		std::cout << "Failed to get device properties.\n";
		return;
	}

	for (std::int32_t i = 0; i < nprop; ++i) {
		auto devProp = prop_list[i];
	//	std::cout << "," << devProp.IsGetEnableCurrentValue() << "," << devProp.IsSetEnableCurrentValue() << "," << (int)devProp.GetPropertyEnableFlag() << "=" << PropCurrentText(id) << "\n";

		PCode id = (PCode)devProp.GetCode();
		SDK::CrDataType type = devProp.GetValueType();
		if(type == SDK::CrDataType::CrDataType_STR) {
			auto iter = PropStr.find(id);
			if(iter != end(PropStr)) {
				parse_propStr(devProp, id);
				iter->second.old = false;
			#if defined(_DEBUG)
				if(num==0) std::cout << iter->second.tag.c_str() << "=" << iter->second.current << "\n";	// debug
			#endif
			} else {
			#if defined(_DEBUG)
				std::cout << "unknown(" << std::hex << id << ")=" << devProp.GetCurrentStr() << "\n";
			#endif
			}
		} else {
			auto iter = Prop.find(id);
			if(iter != end(Prop)) {
				parse_prop(devProp, id);
				iter->second.old = false;
			#if defined(_DEBUG)
				if(num==0) std::cout << iter->second.tag.c_str() << "=" << PropCurrentText(id) << "\n";	// debug
			#endif
				if(id == PCode::CrDeviceProperty_SdkControlMode)
					m_modeSDK = (SDK::CrSdkControlMode)Prop.at(id).current;
			} else {
			#if defined(_DEBUG)
				std::cout << "unknown(" << std::hex << id << ")=" << devProp.GetCurrentValue() << "\n";
			#endif
			}
		}
    }
    SDK::ReleaseDeviceProperties(m_device_handle, prop_list);
}

PCode CameraDevice::Prop_tag2id(std::string tag) const
{
	for(const auto& iter : Prop) {
		if(iter.second.tag == tag) {
			return iter.first;
		}
	}
	return (PCode)0;
}

struct PropertyValue* CameraDevice::GetProp_(PCode id)
{
	try {
		auto prop = &Prop.at(id);
		if(prop->old) {
			CrInt32u code = static_cast<CrInt32u>(id);
			load_properties(1, &code);
		}
		return prop;
	} catch(std::exception const& e) {
		return nullptr;
	} 
}

std::int32_t CameraDevice::setProp(PCode id, std::uint64_t value)
{
	if(1 != Prop.at(id).writable) {
		std::cout << "not writable\n";
		return -1;
	}

	SDK::CrDataType type = Prop.at(id).dataType;
	if(type == SDK::CrDataType::CrDataType_STR) {
		std::cout << "not supported - string\n";
		return -1;
	} else if(type == SDK::CrDataType::CrDataType_Undefined) {
		type = SDK::CrDataType::CrDataType_UInt32;
	}

	type = (SDK::CrDataType)(type & 0x100F);

	SDK::CrDeviceProperty devProp;
	devProp.SetCode(id);
	devProp.SetCurrentValue(value);
	devProp.SetValueType(type);
	return SDK::SetDeviceProperty(m_device_handle, &devProp);
}

std::int32_t CameraDevice::waitProp(PCode id, std::int32_t timeoutMs)
{
	int result = 0;

	std::promise<void> eventPromise;
	m_eventPromise = &eventPromise;
	m_cb_respProp = NULL;
	m_respPropId = id;
	std::future<void> eventFuture = eventPromise.get_future();
	if(eventFuture.wait_for(std::chrono::milliseconds(timeoutMs)) == std::future_status::timeout) {
		std::cout << "Timeout occurred." << std::endl;
		result = -1;
	}
	m_eventPromise = NULL;
	m_respPropId = (PCode)0;
	return result;
}

std::int32_t CameraDevice::SetProp_(PCode id, std::uint64_t value)
{
	auto prop = GetProp_(id);
	if(prop->readable && id != PCode::CrDeviceProperty_NearFar && prop->current == value) {
		std::cout << "skipped\n";
		SendProp(id);
		return 0;
	}

	int ret = setProp(id, value);
	if(ret) {
		ErrorProp(id, "write error");
		return -1;
	}
	if(!(prop->readable && id != PCode::CrDeviceProperty_NearFar)) {
		ErrorProp(id, "not readable");
		return -1;
	}

	m_cb_respProp = SendProp;
	m_eventPromise = NULL;
	m_respPropId = id;
	return 0;
};

std::int32_t CameraDevice::SetProp_(PCode id, std::string _text)
{
	PropertyValue& prop = Prop.at(id);
	if(prop.mapEnum) {
		for(const auto& iter : *prop.mapEnum) {
			if(iter.second == _text) {
				return SetProp_(id, iter.first);
			}
		}
	} else if(prop.formatFunc && (prop.dataType & SDK::CrDataType::CrDataType_ArrayBit)) {
		for(int i = 0; i < prop.possible.size(); i++) {
			if(_text == prop.formatFunc(prop.possible[i])) {
				return SetProp_(id, prop.possible[i]);
			}
		}
	}
	std::cout << "unkknown text-" << _text << "\n";
	return -1;
}

std::string CameraDevice::PropCurrentText(PCode id) const	// convVal2Text
{
	auto iter1 = Prop.find(id);
	if(iter1 == end(Prop))
		return "";

	uint64_t current = iter1->second.current;
	if(iter1->second.mapEnum) {
		auto iter2 = iter1->second.mapEnum->find(current);
		if(iter2 != end(*iter1->second.mapEnum))
			return iter2->second;
	} else if(iter1->second.formatFunc) {
		return iter1->second.formatFunc(current);
	}
	return std::to_string(current);
}

void CameraDevice::GetAvailablePropList(std::vector<std::string>& propList)
{
	propList.resize(0);
	for(const auto& iter : Prop) {
		if(iter.second.writable != -1) {
			propList.push_back(iter.second.tag);
		}
	}
}

SDK::CrCommandId CameraDevice::Cmd_tag2id(std::string tag) const
{
	for(const auto& iter : Cmds) {
		if(iter.second == tag) {
			return iter.first;
		}
	}
	return (SDK::CrCommandId)-1;
}

std::int32_t CameraDevice::SendCommand(SDK::CrCommandId cmd, std::string ope) const
{
	if(ope == "DownUp") {
		SDK::SendCommand(m_device_handle, cmd, SDK::CrCommandParam::CrCommandParam_Down);
		std::this_thread::sleep_for(35ms);
		SDK::SendCommand(m_device_handle, cmd, SDK::CrCommandParam::CrCommandParam_Up);

	} else if(ope == "Up") {
		SDK::SendCommand(m_device_handle, cmd, SDK::CrCommandParam::CrCommandParam_Up);

	} else if(ope == "Down") {
		SDK::SendCommand(m_device_handle, cmd, SDK::CrCommandParam::CrCommandParam_Down);
	}
	return 0;
}

std::int32_t CameraDevice::SendCommand(std::string _text, std::string ope) const
{
	for(const auto& iter : Cmds) {
		if(iter.second == _text) {
			return SendCommand(iter.first, ope);
		}
	}
	return -1;
}

}
// namespace cli
