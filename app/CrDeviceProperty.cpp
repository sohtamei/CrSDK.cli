const std::map<std::uint64_t, std::string> map_CrLiveViewPropertyCode
{
	{ SDK::CrLiveViewPropertyCode::CrLiveViewProperty_AF_Area_Position,	"AF_Area_Position" },
	{ SDK::CrLiveViewPropertyCode::CrLiveViewProperty_Focus_Magnifier_Position,	"Focus_Magnifier_Position" },
	{ SDK::CrLiveViewPropertyCode::CrLiveViewProperty_FaceFrame,	"FaceFrame" },
	{ SDK::CrLiveViewPropertyCode::CrLiveViewProperty_TrackingFrame,	"TrackingFrame" },
	{ SDK::CrLiveViewPropertyCode::CrLiveViewProperty_Level,	"Level" },
	{ SDK::CrLiveViewPropertyCode::CrLiveViewProperty_LiveViewUndefined,	"LiveViewUndefined" },
	{ SDK::CrLiveViewPropertyCode::CrLiveViewProperty__LiveViewMaxVal,	"_LiveViewMaxVal" },
};

const std::map<std::uint64_t, std::string> map_CrSdkControlMode
{
	{ SDK::CrSdkControlMode::CrSdkControlMode_Remote,	"Remote" },
	{ SDK::CrSdkControlMode::CrSdkControlMode_ContentsTransfer,	"ContentsTransfer" },
};

const std::map<std::uint64_t, std::string> map_CrLockIndicator
{
	{ SDK::CrLockIndicator::CrLockIndicator_Unknown,	"Unknown" },
	{ SDK::CrLockIndicator::CrLockIndicator_Unlocked,	"Unlocked" },
	{ SDK::CrLockIndicator::CrLockIndicator_Locked,	"Locked" },
};

const std::map<std::uint64_t, std::string> map_CrPropValueSet
{
};

const std::map<std::uint64_t, std::string> map_CrFnumberSet
{
	{ SDK::CrFnumberSet::CrFnumber_Unknown,	"Unknown" },
	{ SDK::CrFnumberSet::CrFnumber_Nothing,	"Nothing" },
};

const std::map<std::uint64_t, std::string> map_CrShutterSpeedSet
{
	{ SDK::CrShutterSpeedSet::CrShutterSpeed_Bulb,	"Bulb" },
	{ SDK::CrShutterSpeedSet::CrShutterSpeed_Nothing,	"Nothing" },
};

const std::map<std::uint64_t, std::string> map_CrISOMode
{
	{ SDK::CrISOMode::CrISO_Normal,	"Normal" },
	{ SDK::CrISOMode::CrISO_MultiFrameNR,	"MultiFrameNR" },
	{ SDK::CrISOMode::CrISO_MultiFrameNR_High,	"MultiFrameNR_High" },
	{ SDK::CrISOMode::CrISO_Ext,	"Ext" },
	{ SDK::CrISOMode::CrISO_AUTO,	"AUTO" },
};

const std::map<std::uint64_t, std::string> map_CrMoviePlayingSpeed
{
	{ SDK::CrMoviePlayingSpeed::CrMoviePlayingSpeed_Nothing,	"Nothing" },
};

const std::map<std::uint64_t, std::string> map_CrNDFilterValue
{
	{ SDK::CrNDFilterValue::CrNDFilterValue_Nothing,	"Nothing" },
};

const std::map<std::uint64_t, std::string> map_CrExposureProgram
{
	{ SDK::CrExposureProgram::CrExposure_M_Manual,	"M_Manual" },
	{ SDK::CrExposureProgram::CrExposure_P_Auto,	"P_Auto" },
	{ SDK::CrExposureProgram::CrExposure_A_AperturePriority,	"A_AperturePriority" },
	{ SDK::CrExposureProgram::CrExposure_S_ShutterSpeedPriority,	"S_ShutterSpeedPriority" },
	{ SDK::CrExposureProgram::CrExposure_Program_Creative,	"Program_Creative" },
	{ SDK::CrExposureProgram::CrExposure_Program_Action,	"Program_Action" },
	{ SDK::CrExposureProgram::CrExposure_Portrait,	"Portrait" },
	{ SDK::CrExposureProgram::CrExposure_Auto,	"Auto" },
	{ SDK::CrExposureProgram::CrExposure_Auto_Plus,	"Auto_Plus" },
	{ SDK::CrExposureProgram::CrExposure_P_A,	"P_A" },
	{ SDK::CrExposureProgram::CrExposure_P_S,	"P_S" },
	{ SDK::CrExposureProgram::CrExposure_Sports_Action,	"Sports_Action" },
	{ SDK::CrExposureProgram::CrExposure_Sunset,	"Sunset" },
	{ SDK::CrExposureProgram::CrExposure_Night,	"Night" },
	{ SDK::CrExposureProgram::CrExposure_Landscape,	"Landscape" },
	{ SDK::CrExposureProgram::CrExposure_Macro,	"Macro" },
	{ SDK::CrExposureProgram::CrExposure_HandheldTwilight,	"HandheldTwilight" },
	{ SDK::CrExposureProgram::CrExposure_NightPortrait,	"NightPortrait" },
	{ SDK::CrExposureProgram::CrExposure_AntiMotionBlur,	"AntiMotionBlur" },
	{ SDK::CrExposureProgram::CrExposure_Pet,	"Pet" },
	{ SDK::CrExposureProgram::CrExposure_Gourmet,	"Gourmet" },
	{ SDK::CrExposureProgram::CrExposure_Fireworks,	"Fireworks" },
	{ SDK::CrExposureProgram::CrExposure_HighSensitivity,	"HighSensitivity" },
	{ SDK::CrExposureProgram::CrExposure_MemoryRecall,	"MemoryRecall" },
	{ SDK::CrExposureProgram::CrExposure_ContinuousPriority_AE_8pics,	"ContinuousPriority_AE_8pics" },
	{ SDK::CrExposureProgram::CrExposure_ContinuousPriority_AE_10pics,	"ContinuousPriority_AE_10pics" },
	{ SDK::CrExposureProgram::CrExposure_ContinuousPriority_AE_12pics,	"ContinuousPriority_AE_12pics" },
	{ SDK::CrExposureProgram::CrExposure_3D_SweepPanorama,	"3D_SweepPanorama" },
	{ SDK::CrExposureProgram::CrExposure_SweepPanorama,	"SweepPanorama" },
	{ SDK::CrExposureProgram::CrExposure_Movie_P,	"Movie_P" },
	{ SDK::CrExposureProgram::CrExposure_Movie_A,	"Movie_A" },
	{ SDK::CrExposureProgram::CrExposure_Movie_S,	"Movie_S" },
	{ SDK::CrExposureProgram::CrExposure_Movie_M,	"Movie_M" },
	{ SDK::CrExposureProgram::CrExposure_Movie_Auto,	"Movie_Auto" },
	{ SDK::CrExposureProgram::CrExposure_Movie_F,	"Movie_F" },
	{ SDK::CrExposureProgram::CrExposure_Movie_SQMotion_P,	"Movie_SQMotion_P" },
	{ SDK::CrExposureProgram::CrExposure_Movie_SQMotion_A,	"Movie_SQMotion_A" },
	{ SDK::CrExposureProgram::CrExposure_Movie_SQMotion_S,	"Movie_SQMotion_S" },
	{ SDK::CrExposureProgram::CrExposure_Movie_SQMotion_M,	"Movie_SQMotion_M" },
	{ SDK::CrExposureProgram::CrExposure_Movie_SQMotion_AUTO,	"Movie_SQMotion_AUTO" },
	{ SDK::CrExposureProgram::CrExposure_Movie_SQMotion_F,	"Movie_SQMotion_F" },
	{ SDK::CrExposureProgram::CrExposure_Flash_Off,	"Flash_Off" },
	{ SDK::CrExposureProgram::CrExposure_PictureEffect,	"PictureEffect" },
	{ SDK::CrExposureProgram::CrExposure_HiFrameRate_P,	"HiFrameRate_P" },
	{ SDK::CrExposureProgram::CrExposure_HiFrameRate_A,	"HiFrameRate_A" },
	{ SDK::CrExposureProgram::CrExposure_HiFrameRate_S,	"HiFrameRate_S" },
	{ SDK::CrExposureProgram::CrExposure_HiFrameRate_M,	"HiFrameRate_M" },
	{ SDK::CrExposureProgram::CrExposure_SQMotion_P,	"SQMotion_P" },
	{ SDK::CrExposureProgram::CrExposure_SQMotion_A,	"SQMotion_A" },
	{ SDK::CrExposureProgram::CrExposure_SQMotion_S,	"SQMotion_S" },
	{ SDK::CrExposureProgram::CrExposure_SQMotion_M,	"SQMotion_M" },
	{ SDK::CrExposureProgram::CrExposure_MOVIE,	"MOVIE" },
	{ SDK::CrExposureProgram::CrExposure_STILL,	"STILL" },
	{ SDK::CrExposureProgram::CrExposure_F_MovieOrSQMotion,	"F_MovieOrSQMotion" },
	{ SDK::CrExposureProgram::CrExposure_Movie_IntervalRec_F,	"Movie_IntervalRec_F" },
	{ SDK::CrExposureProgram::CrExposure_Movie_IntervalRec_P,	"Movie_IntervalRec_P" },
	{ SDK::CrExposureProgram::CrExposure_Movie_IntervalRec_A,	"Movie_IntervalRec_A" },
	{ SDK::CrExposureProgram::CrExposure_Movie_IntervalRec_S,	"Movie_IntervalRec_S" },
	{ SDK::CrExposureProgram::CrExposure_Movie_IntervalRec_M,	"Movie_IntervalRec_M" },
	{ SDK::CrExposureProgram::CrExposure_Movie_IntervalRec_AUTO,	"Movie_IntervalRec_AUTO" },
};

const std::map<std::uint64_t, std::string> map_CrFileType
{
	{ SDK::CrFileType::CrFileType_None,	"None" },
	{ SDK::CrFileType::CrFileType_Jpeg,	"Jpeg" },
	{ SDK::CrFileType::CrFileType_Raw,	"Raw" },
	{ SDK::CrFileType::CrFileType_RawJpeg,	"RawJpeg" },
	{ SDK::CrFileType::CrFileType_RawHeif,	"RawHeif" },
	{ SDK::CrFileType::CrFileType_Heif,	"Heif" },
};

const std::map<std::uint64_t, std::string> map_CrJpegQuality
{
	{ SDK::CrJpegQuality::CrJpegQuality_Unknown,	"Unknown" },
	{ SDK::CrJpegQuality::CrJpegQuality_Light,	"Light" },
	{ SDK::CrJpegQuality::CrJpegQuality_Standard,	"Standard" },
	{ SDK::CrJpegQuality::CrJpegQuality_Fine,	"Fine" },
	{ SDK::CrJpegQuality::CrJpegQuality_ExFine,	"ExFine" },
};

const std::map<std::uint64_t, std::string> map_CrImageQuality
{
	{ SDK::CrImageQuality::CrImageQuality_Unknown,	"Unknown" },
	{ SDK::CrImageQuality::CrImageQuality_Light,	"Light" },
	{ SDK::CrImageQuality::CrImageQuality_Standard,	"Standard" },
	{ SDK::CrImageQuality::CrImageQuality_Fine,	"Fine" },
	{ SDK::CrImageQuality::CrImageQuality_ExFine,	"ExFine" },
};

const std::map<std::uint64_t, std::string> map_CrWhiteBalanceSetting
{
	{ SDK::CrWhiteBalanceSetting::CrWhiteBalance_AWB,	"AWB" },
	{ SDK::CrWhiteBalanceSetting::CrWhiteBalance_Underwater_Auto,	"Underwater_Auto" },
	{ SDK::CrWhiteBalanceSetting::CrWhiteBalance_Daylight,	"Daylight" },
	{ SDK::CrWhiteBalanceSetting::CrWhiteBalance_Shadow,	"Shadow" },
	{ SDK::CrWhiteBalanceSetting::CrWhiteBalance_Cloudy,	"Cloudy" },
	{ SDK::CrWhiteBalanceSetting::CrWhiteBalance_Tungsten,	"Tungsten" },
	{ SDK::CrWhiteBalanceSetting::CrWhiteBalance_Fluorescent,	"Fluorescent" },
	{ SDK::CrWhiteBalanceSetting::CrWhiteBalance_Fluorescent_WarmWhite,	"Fluorescent_WarmWhite" },
	{ SDK::CrWhiteBalanceSetting::CrWhiteBalance_Fluorescent_CoolWhite,	"Fluorescent_CoolWhite" },
	{ SDK::CrWhiteBalanceSetting::CrWhiteBalance_Fluorescent_DayWhite,	"Fluorescent_DayWhite" },
	{ SDK::CrWhiteBalanceSetting::CrWhiteBalance_Fluorescent_Daylight,	"Fluorescent_Daylight" },
	{ SDK::CrWhiteBalanceSetting::CrWhiteBalance_Flush,	"Flush" },
	{ SDK::CrWhiteBalanceSetting::CrWhiteBalance_ColorTemp,	"ColorTemp" },
	{ SDK::CrWhiteBalanceSetting::CrWhiteBalance_Custom_1,	"Custom_1" },
	{ SDK::CrWhiteBalanceSetting::CrWhiteBalance_Custom_2,	"Custom_2" },
	{ SDK::CrWhiteBalanceSetting::CrWhiteBalance_Custom_3,	"Custom_3" },
	{ SDK::CrWhiteBalanceSetting::CrWhiteBalance_Custom,	"Custom" },
};

const std::map<std::uint64_t, std::string> map_CrFocusMode
{
	{ SDK::CrFocusMode::CrFocus_MF,	"MF" },
	{ SDK::CrFocusMode::CrFocus_AF_S,	"AF_S" },
	{ SDK::CrFocusMode::CrFocus_AF_C,	"AF_C" },
	{ SDK::CrFocusMode::CrFocus_AF_A,	"AF_A" },
	{ SDK::CrFocusMode::CrFocus_AF_D,	"AF_D" },
	{ SDK::CrFocusMode::CrFocus_DMF,	"DMF" },
	{ SDK::CrFocusMode::CrFocus_PF,	"PF" },
};

const std::map<std::uint64_t, std::string> map_CrMeteringMode
{
	{ SDK::CrMeteringMode::CrMetering_Average,	"Average" },
	{ SDK::CrMeteringMode::CrMetering_CenterWeightedAverage,	"CenterWeightedAverage" },
	{ SDK::CrMeteringMode::CrMetering_MultiSpot,	"MultiSpot" },
	{ SDK::CrMeteringMode::CrMetering_CenterSpot,	"CenterSpot" },
	{ SDK::CrMeteringMode::CrMetering_Multi,	"Multi" },
	{ SDK::CrMeteringMode::CrMetering_CenterWeighted,	"CenterWeighted" },
	{ SDK::CrMeteringMode::CrMetering_EntireScreenAverage,	"EntireScreenAverage" },
	{ SDK::CrMeteringMode::CrMetering_Spot_Standard,	"Spot_Standard" },
	{ SDK::CrMeteringMode::CrMetering_Spot_Large,	"Spot_Large" },
	{ SDK::CrMeteringMode::CrMetering_HighLightWeighted,	"HighLightWeighted" },
};

const std::map<std::uint64_t, std::string> map_CrFlashMode
{
	{ SDK::CrFlashMode::CrFlash_Auto,	"Auto" },
	{ SDK::CrFlashMode::CrFlash_Off,	"Off" },
	{ SDK::CrFlashMode::CrFlash_Fill,	"Fill" },
	{ SDK::CrFlashMode::CrFlash_ExternalSync,	"ExternalSync" },
	{ SDK::CrFlashMode::CrFlash_SlowSync,	"SlowSync" },
	{ SDK::CrFlashMode::CrFlash_RearSync,	"RearSync" },
};

const std::map<std::uint64_t, std::string> map_CrWirelessFlash
{
	{ SDK::CrWirelessFlash::CrWirelessFlash_Off,	"Off" },
	{ SDK::CrWirelessFlash::CrWirelessFlash_On,	"On" },
};

const std::map<std::uint64_t, std::string> map_CrRedEyeReduction
{
	{ SDK::CrRedEyeReduction::CrRedEye_Off,	"Off" },
	{ SDK::CrRedEyeReduction::CrRedEye_On,	"On" },
};

const std::map<std::uint64_t, std::string> map_CrMediaFormat
{
	{ SDK::CrMediaFormat::CrMediaFormat_Disable,	"Disable" },
	{ SDK::CrMediaFormat::CrMediaFormat_Enable,	"Enable" },
};

const std::map<std::uint64_t, std::string> map_CrCancelMediaFormat
{
	{ SDK::CrCancelMediaFormat::CrCancelMediaFormat_Disable,	"Disable" },
	{ SDK::CrCancelMediaFormat::CrCancelMediaFormat_Enable,	"Enable" },
};

const std::map<std::uint64_t, std::string> map_CrDriveMode
{
	{ SDK::CrDriveMode::CrDrive_Single,	"Single" },
	{ SDK::CrDriveMode::CrDrive_Continuous_Hi,	"Continuous_Hi" },
	{ SDK::CrDriveMode::CrDrive_Continuous_Hi_Plus,	"Continuous_Hi_Plus" },
	{ SDK::CrDriveMode::CrDrive_Continuous_Hi_Live,	"Continuous_Hi_Live" },
	{ SDK::CrDriveMode::CrDrive_Continuous_Lo,	"Continuous_Lo" },
	{ SDK::CrDriveMode::CrDrive_Continuous,	"Continuous" },
	{ SDK::CrDriveMode::CrDrive_Continuous_SpeedPriority,	"Continuous_SpeedPriority" },
	{ SDK::CrDriveMode::CrDrive_Continuous_Mid,	"Continuous_Mid" },
	{ SDK::CrDriveMode::CrDrive_Continuous_Mid_Live,	"Continuous_Mid_Live" },
	{ SDK::CrDriveMode::CrDrive_Continuous_Lo_Live,	"Continuous_Lo_Live" },
	{ SDK::CrDriveMode::CrDrive_SingleBurstShooting_lo,	"SingleBurstShooting_lo" },
	{ SDK::CrDriveMode::CrDrive_SingleBurstShooting_mid,	"SingleBurstShooting_mid" },
	{ SDK::CrDriveMode::CrDrive_SingleBurstShooting_hi,	"SingleBurstShooting_hi" },
	{ SDK::CrDriveMode::CrDrive_FocusBracket,	"FocusBracket" },
	{ SDK::CrDriveMode::CrDrive_Timelapse,	"Timelapse" },
	{ SDK::CrDriveMode::CrDrive_Timer_2s,	"Timer_2s" },
	{ SDK::CrDriveMode::CrDrive_Timer_5s,	"Timer_5s" },
	{ SDK::CrDriveMode::CrDrive_Timer_10s,	"Timer_10s" },
	{ SDK::CrDriveMode::CrDrive_Continuous_Bracket_03Ev_3pics,	"Continuous_Bracket_03Ev_3pics" },
	{ SDK::CrDriveMode::CrDrive_Continuous_Bracket_03Ev_5pics,	"Continuous_Bracket_03Ev_5pics" },
	{ SDK::CrDriveMode::CrDrive_Continuous_Bracket_03Ev_9pics,	"Continuous_Bracket_03Ev_9pics" },
	{ SDK::CrDriveMode::CrDrive_Continuous_Bracket_05Ev_3pics,	"Continuous_Bracket_05Ev_3pics" },
	{ SDK::CrDriveMode::CrDrive_Continuous_Bracket_05Ev_5pics,	"Continuous_Bracket_05Ev_5pics" },
	{ SDK::CrDriveMode::CrDrive_Continuous_Bracket_05Ev_9pics,	"Continuous_Bracket_05Ev_9pics" },
	{ SDK::CrDriveMode::CrDrive_Continuous_Bracket_07Ev_3pics,	"Continuous_Bracket_07Ev_3pics" },
	{ SDK::CrDriveMode::CrDrive_Continuous_Bracket_07Ev_5pics,	"Continuous_Bracket_07Ev_5pics" },
	{ SDK::CrDriveMode::CrDrive_Continuous_Bracket_07Ev_9pics,	"Continuous_Bracket_07Ev_9pics" },
	{ SDK::CrDriveMode::CrDrive_Continuous_Bracket_10Ev_3pics,	"Continuous_Bracket_10Ev_3pics" },
	{ SDK::CrDriveMode::CrDrive_Continuous_Bracket_10Ev_5pics,	"Continuous_Bracket_10Ev_5pics" },
	{ SDK::CrDriveMode::CrDrive_Continuous_Bracket_10Ev_9pics,	"Continuous_Bracket_10Ev_9pics" },
	{ SDK::CrDriveMode::CrDrive_Continuous_Bracket_20Ev_3pics,	"Continuous_Bracket_20Ev_3pics" },
	{ SDK::CrDriveMode::CrDrive_Continuous_Bracket_20Ev_5pics,	"Continuous_Bracket_20Ev_5pics" },
	{ SDK::CrDriveMode::CrDrive_Continuous_Bracket_30Ev_3pics,	"Continuous_Bracket_30Ev_3pics" },
	{ SDK::CrDriveMode::CrDrive_Continuous_Bracket_30Ev_5pics,	"Continuous_Bracket_30Ev_5pics" },
	{ SDK::CrDriveMode::CrDrive_Continuous_Bracket_03Ev_2pics_Plus,	"Continuous_Bracket_03Ev_2pics_Plus" },
	{ SDK::CrDriveMode::CrDrive_Continuous_Bracket_03Ev_2pics_Minus,	"Continuous_Bracket_03Ev_2pics_Minus" },
	{ SDK::CrDriveMode::CrDrive_Continuous_Bracket_03Ev_7pics,	"Continuous_Bracket_03Ev_7pics" },
	{ SDK::CrDriveMode::CrDrive_Continuous_Bracket_05Ev_2pics_Plus,	"Continuous_Bracket_05Ev_2pics_Plus" },
	{ SDK::CrDriveMode::CrDrive_Continuous_Bracket_05Ev_2pics_Minus,	"Continuous_Bracket_05Ev_2pics_Minus" },
	{ SDK::CrDriveMode::CrDrive_Continuous_Bracket_05Ev_7pics,	"Continuous_Bracket_05Ev_7pics" },
	{ SDK::CrDriveMode::CrDrive_Continuous_Bracket_07Ev_2pics_Plus,	"Continuous_Bracket_07Ev_2pics_Plus" },
	{ SDK::CrDriveMode::CrDrive_Continuous_Bracket_07Ev_2pics_Minus,	"Continuous_Bracket_07Ev_2pics_Minus" },
	{ SDK::CrDriveMode::CrDrive_Continuous_Bracket_07Ev_7pics,	"Continuous_Bracket_07Ev_7pics" },
	{ SDK::CrDriveMode::CrDrive_Continuous_Bracket_10Ev_2pics_Plus,	"Continuous_Bracket_10Ev_2pics_Plus" },
	{ SDK::CrDriveMode::CrDrive_Continuous_Bracket_10Ev_2pics_Minus,	"Continuous_Bracket_10Ev_2pics_Minus" },
	{ SDK::CrDriveMode::CrDrive_Continuous_Bracket_10Ev_7pics,	"Continuous_Bracket_10Ev_7pics" },
	{ SDK::CrDriveMode::CrDrive_Continuous_Bracket_13Ev_2pics_Plus,	"Continuous_Bracket_13Ev_2pics_Plus" },
	{ SDK::CrDriveMode::CrDrive_Continuous_Bracket_13Ev_2pics_Minus,	"Continuous_Bracket_13Ev_2pics_Minus" },
	{ SDK::CrDriveMode::CrDrive_Continuous_Bracket_13Ev_3pics,	"Continuous_Bracket_13Ev_3pics" },
	{ SDK::CrDriveMode::CrDrive_Continuous_Bracket_13Ev_5pics,	"Continuous_Bracket_13Ev_5pics" },
	{ SDK::CrDriveMode::CrDrive_Continuous_Bracket_13Ev_7pics,	"Continuous_Bracket_13Ev_7pics" },
	{ SDK::CrDriveMode::CrDrive_Continuous_Bracket_15Ev_2pics_Plus,	"Continuous_Bracket_15Ev_2pics_Plus" },
	{ SDK::CrDriveMode::CrDrive_Continuous_Bracket_15Ev_2pics_Minus,	"Continuous_Bracket_15Ev_2pics_Minus" },
	{ SDK::CrDriveMode::CrDrive_Continuous_Bracket_15Ev_3pics,	"Continuous_Bracket_15Ev_3pics" },
	{ SDK::CrDriveMode::CrDrive_Continuous_Bracket_15Ev_5pics,	"Continuous_Bracket_15Ev_5pics" },
	{ SDK::CrDriveMode::CrDrive_Continuous_Bracket_15Ev_7pics,	"Continuous_Bracket_15Ev_7pics" },
	{ SDK::CrDriveMode::CrDrive_Continuous_Bracket_17Ev_2pics_Plus,	"Continuous_Bracket_17Ev_2pics_Plus" },
	{ SDK::CrDriveMode::CrDrive_Continuous_Bracket_17Ev_2pics_Minus,	"Continuous_Bracket_17Ev_2pics_Minus" },
	{ SDK::CrDriveMode::CrDrive_Continuous_Bracket_17Ev_3pics,	"Continuous_Bracket_17Ev_3pics" },
	{ SDK::CrDriveMode::CrDrive_Continuous_Bracket_17Ev_5pics,	"Continuous_Bracket_17Ev_5pics" },
	{ SDK::CrDriveMode::CrDrive_Continuous_Bracket_17Ev_7pics,	"Continuous_Bracket_17Ev_7pics" },
	{ SDK::CrDriveMode::CrDrive_Continuous_Bracket_20Ev_2pics_Plus,	"Continuous_Bracket_20Ev_2pics_Plus" },
	{ SDK::CrDriveMode::CrDrive_Continuous_Bracket_20Ev_2pics_Minus,	"Continuous_Bracket_20Ev_2pics_Minus" },
	{ SDK::CrDriveMode::CrDrive_Continuous_Bracket_20Ev_7pics,	"Continuous_Bracket_20Ev_7pics" },
	{ SDK::CrDriveMode::CrDrive_Continuous_Bracket_23Ev_2pics_Plus,	"Continuous_Bracket_23Ev_2pics_Plus" },
	{ SDK::CrDriveMode::CrDrive_Continuous_Bracket_23Ev_2pics_Minus,	"Continuous_Bracket_23Ev_2pics_Minus" },
	{ SDK::CrDriveMode::CrDrive_Continuous_Bracket_23Ev_3pics,	"Continuous_Bracket_23Ev_3pics" },
	{ SDK::CrDriveMode::CrDrive_Continuous_Bracket_23Ev_5pics,	"Continuous_Bracket_23Ev_5pics" },
	{ SDK::CrDriveMode::CrDrive_Continuous_Bracket_25Ev_2pics_Plus,	"Continuous_Bracket_25Ev_2pics_Plus" },
	{ SDK::CrDriveMode::CrDrive_Continuous_Bracket_25Ev_2pics_Minus,	"Continuous_Bracket_25Ev_2pics_Minus" },
	{ SDK::CrDriveMode::CrDrive_Continuous_Bracket_25Ev_3pics,	"Continuous_Bracket_25Ev_3pics" },
	{ SDK::CrDriveMode::CrDrive_Continuous_Bracket_25Ev_5pics,	"Continuous_Bracket_25Ev_5pics" },
	{ SDK::CrDriveMode::CrDrive_Continuous_Bracket_27Ev_2pics_Plus,	"Continuous_Bracket_27Ev_2pics_Plus" },
	{ SDK::CrDriveMode::CrDrive_Continuous_Bracket_27Ev_2pics_Minus,	"Continuous_Bracket_27Ev_2pics_Minus" },
	{ SDK::CrDriveMode::CrDrive_Continuous_Bracket_27Ev_3pics,	"Continuous_Bracket_27Ev_3pics" },
	{ SDK::CrDriveMode::CrDrive_Continuous_Bracket_27Ev_5pics,	"Continuous_Bracket_27Ev_5pics" },
	{ SDK::CrDriveMode::CrDrive_Continuous_Bracket_30Ev_2pics_Plus,	"Continuous_Bracket_30Ev_2pics_Plus" },
	{ SDK::CrDriveMode::CrDrive_Continuous_Bracket_30Ev_2pics_Minus,	"Continuous_Bracket_30Ev_2pics_Minus" },
	{ SDK::CrDriveMode::CrDrive_Single_Bracket_03Ev_3pics,	"Single_Bracket_03Ev_3pics" },
	{ SDK::CrDriveMode::CrDrive_Single_Bracket_03Ev_5pics,	"Single_Bracket_03Ev_5pics" },
	{ SDK::CrDriveMode::CrDrive_Single_Bracket_03Ev_9pics,	"Single_Bracket_03Ev_9pics" },
	{ SDK::CrDriveMode::CrDrive_Single_Bracket_05Ev_3pics,	"Single_Bracket_05Ev_3pics" },
	{ SDK::CrDriveMode::CrDrive_Single_Bracket_05Ev_5pics,	"Single_Bracket_05Ev_5pics" },
	{ SDK::CrDriveMode::CrDrive_Single_Bracket_05Ev_9pics,	"Single_Bracket_05Ev_9pics" },
	{ SDK::CrDriveMode::CrDrive_Single_Bracket_07Ev_3pics,	"Single_Bracket_07Ev_3pics" },
	{ SDK::CrDriveMode::CrDrive_Single_Bracket_07Ev_5pics,	"Single_Bracket_07Ev_5pics" },
	{ SDK::CrDriveMode::CrDrive_Single_Bracket_07Ev_9pics,	"Single_Bracket_07Ev_9pics" },
	{ SDK::CrDriveMode::CrDrive_Single_Bracket_10Ev_3pics,	"Single_Bracket_10Ev_3pics" },
	{ SDK::CrDriveMode::CrDrive_Single_Bracket_10Ev_5pics,	"Single_Bracket_10Ev_5pics" },
	{ SDK::CrDriveMode::CrDrive_Single_Bracket_10Ev_9pics,	"Single_Bracket_10Ev_9pics" },
	{ SDK::CrDriveMode::CrDrive_Single_Bracket_20Ev_3pics,	"Single_Bracket_20Ev_3pics" },
	{ SDK::CrDriveMode::CrDrive_Single_Bracket_20Ev_5pics,	"Single_Bracket_20Ev_5pics" },
	{ SDK::CrDriveMode::CrDrive_Single_Bracket_30Ev_3pics,	"Single_Bracket_30Ev_3pics" },
	{ SDK::CrDriveMode::CrDrive_Single_Bracket_30Ev_5pics,	"Single_Bracket_30Ev_5pics" },
	{ SDK::CrDriveMode::CrDrive_Single_Bracket_03Ev_2pics_Plus,	"Single_Bracket_03Ev_2pics_Plus" },
	{ SDK::CrDriveMode::CrDrive_Single_Bracket_03Ev_2pics_Minus,	"Single_Bracket_03Ev_2pics_Minus" },
	{ SDK::CrDriveMode::CrDrive_Single_Bracket_03Ev_7pics,	"Single_Bracket_03Ev_7pics" },
	{ SDK::CrDriveMode::CrDrive_Single_Bracket_05Ev_2pics_Plus,	"Single_Bracket_05Ev_2pics_Plus" },
	{ SDK::CrDriveMode::CrDrive_Single_Bracket_05Ev_2pics_Minus,	"Single_Bracket_05Ev_2pics_Minus" },
	{ SDK::CrDriveMode::CrDrive_Single_Bracket_05Ev_7pics,	"Single_Bracket_05Ev_7pics" },
	{ SDK::CrDriveMode::CrDrive_Single_Bracket_07Ev_2pics_Plus,	"Single_Bracket_07Ev_2pics_Plus" },
	{ SDK::CrDriveMode::CrDrive_Single_Bracket_07Ev_2pics_Minus,	"Single_Bracket_07Ev_2pics_Minus" },
	{ SDK::CrDriveMode::CrDrive_Single_Bracket_07Ev_7pics,	"Single_Bracket_07Ev_7pics" },
	{ SDK::CrDriveMode::CrDrive_Single_Bracket_10Ev_2pics_Plus,	"Single_Bracket_10Ev_2pics_Plus" },
	{ SDK::CrDriveMode::CrDrive_Single_Bracket_10Ev_2pics_Minus,	"Single_Bracket_10Ev_2pics_Minus" },
	{ SDK::CrDriveMode::CrDrive_Single_Bracket_10Ev_7pics,	"Single_Bracket_10Ev_7pics" },
	{ SDK::CrDriveMode::CrDrive_Single_Bracket_13Ev_2pics_Plus,	"Single_Bracket_13Ev_2pics_Plus" },
	{ SDK::CrDriveMode::CrDrive_Single_Bracket_13Ev_2pics_Minus,	"Single_Bracket_13Ev_2pics_Minus" },
	{ SDK::CrDriveMode::CrDrive_Single_Bracket_13Ev_3pics,	"Single_Bracket_13Ev_3pics" },
	{ SDK::CrDriveMode::CrDrive_Single_Bracket_13Ev_5pics,	"Single_Bracket_13Ev_5pics" },
	{ SDK::CrDriveMode::CrDrive_Single_Bracket_13Ev_7pics,	"Single_Bracket_13Ev_7pics" },
	{ SDK::CrDriveMode::CrDrive_Single_Bracket_15Ev_2pics_Plus,	"Single_Bracket_15Ev_2pics_Plus" },
	{ SDK::CrDriveMode::CrDrive_Single_Bracket_15Ev_2pics_Minus,	"Single_Bracket_15Ev_2pics_Minus" },
	{ SDK::CrDriveMode::CrDrive_Single_Bracket_15Ev_3pics,	"Single_Bracket_15Ev_3pics" },
	{ SDK::CrDriveMode::CrDrive_Single_Bracket_15Ev_5pics,	"Single_Bracket_15Ev_5pics" },
	{ SDK::CrDriveMode::CrDrive_Single_Bracket_15Ev_7pics,	"Single_Bracket_15Ev_7pics" },
	{ SDK::CrDriveMode::CrDrive_Single_Bracket_17Ev_2pics_Plus,	"Single_Bracket_17Ev_2pics_Plus" },
	{ SDK::CrDriveMode::CrDrive_Single_Bracket_17Ev_2pics_Minus,	"Single_Bracket_17Ev_2pics_Minus" },
	{ SDK::CrDriveMode::CrDrive_Single_Bracket_17Ev_3pics,	"Single_Bracket_17Ev_3pics" },
	{ SDK::CrDriveMode::CrDrive_Single_Bracket_17Ev_5pics,	"Single_Bracket_17Ev_5pics" },
	{ SDK::CrDriveMode::CrDrive_Single_Bracket_17Ev_7pics,	"Single_Bracket_17Ev_7pics" },
	{ SDK::CrDriveMode::CrDrive_Single_Bracket_20Ev_2pics_Plus,	"Single_Bracket_20Ev_2pics_Plus" },
	{ SDK::CrDriveMode::CrDrive_Single_Bracket_20Ev_2pics_Minus,	"Single_Bracket_20Ev_2pics_Minus" },
	{ SDK::CrDriveMode::CrDrive_Single_Bracket_20Ev_7pics,	"Single_Bracket_20Ev_7pics" },
	{ SDK::CrDriveMode::CrDrive_Single_Bracket_23Ev_2pics_Plus,	"Single_Bracket_23Ev_2pics_Plus" },
	{ SDK::CrDriveMode::CrDrive_Single_Bracket_23Ev_2pics_Minus,	"Single_Bracket_23Ev_2pics_Minus" },
	{ SDK::CrDriveMode::CrDrive_Single_Bracket_23Ev_3pics,	"Single_Bracket_23Ev_3pics" },
	{ SDK::CrDriveMode::CrDrive_Single_Bracket_23Ev_5pics,	"Single_Bracket_23Ev_5pics" },
	{ SDK::CrDriveMode::CrDrive_Single_Bracket_25Ev_2pics_Plus,	"Single_Bracket_25Ev_2pics_Plus" },
	{ SDK::CrDriveMode::CrDrive_Single_Bracket_25Ev_2pics_Minus,	"Single_Bracket_25Ev_2pics_Minus" },
	{ SDK::CrDriveMode::CrDrive_Single_Bracket_25Ev_3pics,	"Single_Bracket_25Ev_3pics" },
	{ SDK::CrDriveMode::CrDrive_Single_Bracket_25Ev_5pics,	"Single_Bracket_25Ev_5pics" },
	{ SDK::CrDriveMode::CrDrive_Single_Bracket_27Ev_2pics_Plus,	"Single_Bracket_27Ev_2pics_Plus" },
	{ SDK::CrDriveMode::CrDrive_Single_Bracket_27Ev_2pics_Minus,	"Single_Bracket_27Ev_2pics_Minus" },
	{ SDK::CrDriveMode::CrDrive_Single_Bracket_27Ev_3pics,	"Single_Bracket_27Ev_3pics" },
	{ SDK::CrDriveMode::CrDrive_Single_Bracket_27Ev_5pics,	"Single_Bracket_27Ev_5pics" },
	{ SDK::CrDriveMode::CrDrive_Single_Bracket_30Ev_2pics_Plus,	"Single_Bracket_30Ev_2pics_Plus" },
	{ SDK::CrDriveMode::CrDrive_Single_Bracket_30Ev_2pics_Minus,	"Single_Bracket_30Ev_2pics_Minus" },
	{ SDK::CrDriveMode::CrDrive_WB_Bracket_Lo,	"WB_Bracket_Lo" },
	{ SDK::CrDriveMode::CrDrive_WB_Bracket_Hi,	"WB_Bracket_Hi" },
	{ SDK::CrDriveMode::CrDrive_DRO_Bracket_Lo,	"DRO_Bracket_Lo" },
	{ SDK::CrDriveMode::CrDrive_DRO_Bracket_Hi,	"DRO_Bracket_Hi" },
	{ SDK::CrDriveMode::CrDrive_Continuous_Timer_3pics,	"Continuous_Timer_3pics" },
	{ SDK::CrDriveMode::CrDrive_Continuous_Timer_5pics,	"Continuous_Timer_5pics" },
	{ SDK::CrDriveMode::CrDrive_Continuous_Timer_2s_3pics,	"Continuous_Timer_2s_3pics" },
	{ SDK::CrDriveMode::CrDrive_Continuous_Timer_2s_5pics,	"Continuous_Timer_2s_5pics" },
	{ SDK::CrDriveMode::CrDrive_Continuous_Timer_5s_3pics,	"Continuous_Timer_5s_3pics" },
	{ SDK::CrDriveMode::CrDrive_Continuous_Timer_5s_5pics,	"Continuous_Timer_5s_5pics" },
	{ SDK::CrDriveMode::CrDrive_LPF_Bracket,	"LPF_Bracket" },
	{ SDK::CrDriveMode::CrDrive_RemoteCommander,	"RemoteCommander" },
	{ SDK::CrDriveMode::CrDrive_MirrorUp,	"MirrorUp" },
	{ SDK::CrDriveMode::CrDrive_SelfPortrait_1,	"SelfPortrait_1" },
	{ SDK::CrDriveMode::CrDrive_SelfPortrait_2,	"SelfPortrait_2" },
};

const std::map<std::uint64_t, std::string> map_CrDRangeOptimizer
{
	{ SDK::CrDRangeOptimizer::CrDRangeOptimizer_Off,	"Off" },
	{ SDK::CrDRangeOptimizer::CrDRangeOptimizer_On,	"On" },
	{ SDK::CrDRangeOptimizer::CrDRangeOptimizer_Plus,	"Plus" },
	{ SDK::CrDRangeOptimizer::CrDRangeOptimizer_Plus_Manual_1,	"Plus_Manual_1" },
	{ SDK::CrDRangeOptimizer::CrDRangeOptimizer_Plus_Manual_2,	"Plus_Manual_2" },
	{ SDK::CrDRangeOptimizer::CrDRangeOptimizer_Plus_Manual_3,	"Plus_Manual_3" },
	{ SDK::CrDRangeOptimizer::CrDRangeOptimizer_Plus_Manual_4,	"Plus_Manual_4" },
	{ SDK::CrDRangeOptimizer::CrDRangeOptimizer_Plus_Manual_5,	"Plus_Manual_5" },
	{ SDK::CrDRangeOptimizer::CrDRangeOptimizer_Auto,	"Auto" },
	{ SDK::CrDRangeOptimizer::CrDRangeOptimizer_HDR_Auto,	"HDR_Auto" },
	{ SDK::CrDRangeOptimizer::CrDRangeOptimizer_HDR_10Ev,	"HDR_10Ev" },
	{ SDK::CrDRangeOptimizer::CrDRangeOptimizer_HDR_20Ev,	"HDR_20Ev" },
	{ SDK::CrDRangeOptimizer::CrDRangeOptimizer_HDR_30Ev,	"HDR_30Ev" },
	{ SDK::CrDRangeOptimizer::CrDRangeOptimizer_HDR_40Ev,	"HDR_40Ev" },
	{ SDK::CrDRangeOptimizer::CrDRangeOptimizer_HDR_50Ev,	"HDR_50Ev" },
	{ SDK::CrDRangeOptimizer::CrDRangeOptimizer_HDR_60Ev,	"HDR_60Ev" },
};

const std::map<std::uint64_t, std::string> map_CrImageSize
{
	{ SDK::CrImageSize::CrImageSize_L,	"L" },
	{ SDK::CrImageSize::CrImageSize_M,	"M" },
	{ SDK::CrImageSize::CrImageSize_S,	"S" },
	{ SDK::CrImageSize::CrImageSize_VGA,	"VGA" },
};

const std::map<std::uint64_t, std::string> map_CrAspectRatioIndex
{
	{ SDK::CrAspectRatioIndex::CrAspectRatio_3_2,	"3_2" },
	{ SDK::CrAspectRatioIndex::CrAspectRatio_16_9,	"16_9" },
	{ SDK::CrAspectRatioIndex::CrAspectRatio_4_3,	"4_3" },
	{ SDK::CrAspectRatioIndex::CrAspectRatio_1_1,	"1_1" },
};

const std::map<std::uint64_t, std::string> map_CrPictureEffect
{
	{ SDK::CrPictureEffect::CrPictureEffect_Off,	"Off" },
	{ SDK::CrPictureEffect::CrPictureEffect_ToyCameraNormal,	"ToyCameraNormal" },
	{ SDK::CrPictureEffect::CrPictureEffect_ToyCameraCool,	"ToyCameraCool" },
	{ SDK::CrPictureEffect::CrPictureEffect_ToyCameraWarm,	"ToyCameraWarm" },
	{ SDK::CrPictureEffect::CrPictureEffect_ToyCameraGreen,	"ToyCameraGreen" },
	{ SDK::CrPictureEffect::CrPictureEffect_ToyCameraMagenta,	"ToyCameraMagenta" },
	{ SDK::CrPictureEffect::CrPictureEffect_Pop,	"Pop" },
	{ SDK::CrPictureEffect::CrPictureEffect_PosterizationBW,	"PosterizationBW" },
	{ SDK::CrPictureEffect::CrPictureEffect_PosterizationColor,	"PosterizationColor" },
	{ SDK::CrPictureEffect::CrPictureEffect_Retro,	"Retro" },
	{ SDK::CrPictureEffect::CrPictureEffect_SoftHighkey,	"SoftHighkey" },
	{ SDK::CrPictureEffect::CrPictureEffect_PartColorRed,	"PartColorRed" },
	{ SDK::CrPictureEffect::CrPictureEffect_PartColorGreen,	"PartColorGreen" },
	{ SDK::CrPictureEffect::CrPictureEffect_PartColorBlue,	"PartColorBlue" },
	{ SDK::CrPictureEffect::CrPictureEffect_PartColorYellow,	"PartColorYellow" },
	{ SDK::CrPictureEffect::CrPictureEffect_HighContrastMonochrome,	"HighContrastMonochrome" },
	{ SDK::CrPictureEffect::CrPictureEffect_SoftFocusLow,	"SoftFocusLow" },
	{ SDK::CrPictureEffect::CrPictureEffect_SoftFocusMid,	"SoftFocusMid" },
	{ SDK::CrPictureEffect::CrPictureEffect_SoftFocusHigh,	"SoftFocusHigh" },
	{ SDK::CrPictureEffect::CrPictureEffect_HDRPaintingLow,	"HDRPaintingLow" },
	{ SDK::CrPictureEffect::CrPictureEffect_HDRPaintingMid,	"HDRPaintingMid" },
	{ SDK::CrPictureEffect::CrPictureEffect_HDRPaintingHigh,	"HDRPaintingHigh" },
	{ SDK::CrPictureEffect::CrPictureEffect_RichToneMonochrome,	"RichToneMonochrome" },
	{ SDK::CrPictureEffect::CrPictureEffect_MiniatureAuto,	"MiniatureAuto" },
	{ SDK::CrPictureEffect::CrPictureEffect_MiniatureTop,	"MiniatureTop" },
	{ SDK::CrPictureEffect::CrPictureEffect_MiniatureMidHorizontal,	"MiniatureMidHorizontal" },
	{ SDK::CrPictureEffect::CrPictureEffect_MiniatureBottom,	"MiniatureBottom" },
	{ SDK::CrPictureEffect::CrPictureEffect_MiniatureLeft,	"MiniatureLeft" },
	{ SDK::CrPictureEffect::CrPictureEffect_MiniatureMidVertical,	"MiniatureMidVertical" },
	{ SDK::CrPictureEffect::CrPictureEffect_MiniatureRight,	"MiniatureRight" },
	{ SDK::CrPictureEffect::CrPictureEffect_MiniatureWaterColor,	"MiniatureWaterColor" },
	{ SDK::CrPictureEffect::CrPictureEffect_MiniatureIllustrationLow,	"MiniatureIllustrationLow" },
	{ SDK::CrPictureEffect::CrPictureEffect_MiniatureIllustrationMid,	"MiniatureIllustrationMid" },
	{ SDK::CrPictureEffect::CrPictureEffect_MiniatureIllustrationHigh,	"MiniatureIllustrationHigh" },
};

const std::map<std::uint64_t, std::string> map_CrMovie_Recording_State
{
	{ SDK::CrMovie_Recording_State::CrMovie_Recording_State_Not_Recording,	"Not_Recording" },
	{ SDK::CrMovie_Recording_State::CrMovie_Recording_State_Recording,	"Recording" },
	{ SDK::CrMovie_Recording_State::CrMovie_Recording_State_Recording_Failed,	"Recording_Failed" },
	{ SDK::CrMovie_Recording_State::CrMovie_Recording_State_IntervalRec_Waiting_Record,	"IntervalRec_Waiting_Record" },
};

const std::map<std::uint64_t, std::string> map_CrFocusArea
{
	{ SDK::CrFocusArea::CrFocusArea_Unknown,	"Unknown" },
	{ SDK::CrFocusArea::CrFocusArea_Wide,	"Wide" },
	{ SDK::CrFocusArea::CrFocusArea_Zone,	"Zone" },
	{ SDK::CrFocusArea::CrFocusArea_Center,	"Center" },
	{ SDK::CrFocusArea::CrFocusArea_Flexible_Spot_S,	"Flexible_Spot_S" },
	{ SDK::CrFocusArea::CrFocusArea_Flexible_Spot_M,	"Flexible_Spot_M" },
	{ SDK::CrFocusArea::CrFocusArea_Flexible_Spot_L,	"Flexible_Spot_L" },
	{ SDK::CrFocusArea::CrFocusArea_Expand_Flexible_Spot,	"Expand_Flexible_Spot" },
	{ SDK::CrFocusArea::CrFocusArea_Flexible_Spot,	"Flexible_Spot" },
	{ SDK::CrFocusArea::CrFocusArea_Tracking_Wide,	"Tracking_Wide" },
	{ SDK::CrFocusArea::CrFocusArea_Tracking_Zone,	"Tracking_Zone" },
	{ SDK::CrFocusArea::CrFocusArea_Tracking_Center,	"Tracking_Center" },
	{ SDK::CrFocusArea::CrFocusArea_Tracking_Flexible_Spot_S,	"Tracking_Flexible_Spot_S" },
	{ SDK::CrFocusArea::CrFocusArea_Tracking_Flexible_Spot_M,	"Tracking_Flexible_Spot_M" },
	{ SDK::CrFocusArea::CrFocusArea_Tracking_Flexible_Spot_L,	"Tracking_Flexible_Spot_L" },
	{ SDK::CrFocusArea::CrFocusArea_Tracking_Expand_Flexible_Spot,	"Tracking_Expand_Flexible_Spot" },
	{ SDK::CrFocusArea::CrFocusArea_Tracking_Flexible_Spot,	"Tracking_Flexible_Spot" },
	{ SDK::CrFocusArea::CrFocusArea_Flexible_Spot_XS,	"Flexible_Spot_XS" },
	{ SDK::CrFocusArea::CrFocusArea_Flexible_Spot_XL,	"Flexible_Spot_XL" },
	{ SDK::CrFocusArea::CrFocusArea_Flexible_Spot_FreeSize1,	"Flexible_Spot_FreeSize1" },
	{ SDK::CrFocusArea::CrFocusArea_Flexible_Spot_FreeSize2,	"Flexible_Spot_FreeSize2" },
	{ SDK::CrFocusArea::CrFocusArea_Flexible_Spot_FreeSize3,	"Flexible_Spot_FreeSize3" },
	{ SDK::CrFocusArea::CrFocusArea_Tracking_Flexible_Spot_XS,	"Tracking_Flexible_Spot_XS" },
	{ SDK::CrFocusArea::CrFocusArea_Tracking_Flexible_Spot_XL,	"Tracking_Flexible_Spot_XL" },
	{ SDK::CrFocusArea::CrFocusArea_Tracking_Flexible_Spot_FreeSize1,	"Tracking_Flexible_Spot_FreeSize1" },
	{ SDK::CrFocusArea::CrFocusArea_Tracking_Flexible_Spot_FreeSize2,	"Tracking_Flexible_Spot_FreeSize2" },
	{ SDK::CrFocusArea::CrFocusArea_Tracking_Flexible_Spot_FreeSize3,	"Tracking_Flexible_Spot_FreeSize3" },
};

const std::map<std::uint64_t, std::string> map_CrColortemp
{
	{ SDK::CrColortemp::CrColortemp_Min,	"Min" },
	{ SDK::CrColortemp::CrColortemp_Max,	"Max" },
};

const std::map<std::uint64_t, std::string> map_CrColorTuning
{
	{ SDK::CrColorTuning::CrColorTuning_Min,	"Min" },
	{ SDK::CrColorTuning::CrColorTuning_Max,	"Max" },
};

const std::map<std::uint64_t, std::string> map_CrLiveViewDisplayEffect
{
	{ SDK::CrLiveViewDisplayEffect::CrLiveViewDisplayEffect_Unknown,	"Unknown" },
	{ SDK::CrLiveViewDisplayEffect::CrLiveViewDisplayEffect_ON,	"ON" },
	{ SDK::CrLiveViewDisplayEffect::CrLiveViewDisplayEffect_OFF,	"OFF" },
};

const std::map<std::uint64_t, std::string> map_CrStillImageStoreDestination
{
	{ SDK::CrStillImageStoreDestination::CrStillImageStoreDestination_HostPC,	"HostPC" },
	{ SDK::CrStillImageStoreDestination::CrStillImageStoreDestination_MemoryCard,	"MemoryCard" },
	{ SDK::CrStillImageStoreDestination::CrStillImageStoreDestination_HostPCAndMemoryCard,	"HostPCAndMemoryCard" },
};

const std::map<std::uint64_t, std::string> map_CrNearFarEnableStatus
{
	{ SDK::CrNearFarEnableStatus::CrNearFar_Disable,	"Disable" },
	{ SDK::CrNearFarEnableStatus::CrNearFar_Enable,	"Enable" },
};

const std::map<std::uint64_t, std::string> map_CrIntervalRecMode
{
	{ SDK::CrIntervalRecMode::CrIntervalRecMode_OFF,	"OFF" },
	{ SDK::CrIntervalRecMode::CrIntervalRecMode_ON,	"ON" },
};

const std::map<std::uint64_t, std::string> map_CrBatteryLevel
{
	{ SDK::CrBatteryLevel::CrBatteryLevel_PreEndBattery,	"PreEndBattery" },
	{ SDK::CrBatteryLevel::CrBatteryLevel_1_4,	"1_4" },
	{ SDK::CrBatteryLevel::CrBatteryLevel_2_4,	"2_4" },
	{ SDK::CrBatteryLevel::CrBatteryLevel_3_4,	"3_4" },
	{ SDK::CrBatteryLevel::CrBatteryLevel_4_4,	"4_4" },
	{ SDK::CrBatteryLevel::CrBatteryLevel_1_3,	"1_3" },
	{ SDK::CrBatteryLevel::CrBatteryLevel_2_3,	"2_3" },
	{ SDK::CrBatteryLevel::CrBatteryLevel_3_3,	"3_3" },
	{ SDK::CrBatteryLevel::CrBatteryLevel_USBPowerSupply,	"USBPowerSupply" },
	{ SDK::CrBatteryLevel::CrBatteryLevel_PreEnd_PowerSupply,	"PreEnd_PowerSupply" },
	{ SDK::CrBatteryLevel::CrBatteryLevel_1_4_PowerSupply,	"1_4_PowerSupply" },
	{ SDK::CrBatteryLevel::CrBatteryLevel_2_4_PowerSupply,	"2_4_PowerSupply" },
	{ SDK::CrBatteryLevel::CrBatteryLevel_3_4_PowerSupply,	"3_4_PowerSupply" },
	{ SDK::CrBatteryLevel::CrBatteryLevel_4_4_PowerSupply,	"4_4_PowerSupply" },
	{ SDK::CrBatteryLevel::CrBatteryLevel_Fake,	"Fake" },
	{ SDK::CrBatteryLevel::CrBatteryLevel_BatteryNotInstalled,	"BatteryNotInstalled" },
};

const std::map<std::uint64_t, std::string> map_CrWhiteBalanceInitialize
{
	{ SDK::CrWhiteBalanceInitialize::CrWhiteBalance_Initialized,	"Initialized" },
};

const std::map<std::uint64_t, std::string> map_CrLiveViewStatus
{
	{ SDK::CrLiveViewStatus::CrLiveView_NotSupport,	"NotSupport" },
	{ SDK::CrLiveViewStatus::CrLiveView_Disable,	"Disable" },
	{ SDK::CrLiveViewStatus::CrLiveView_Enable,	"Enable" },
};

const std::map<std::uint64_t, std::string> map_CrIntervalRecStatus
{
	{ SDK::CrIntervalRecStatus::CrIntervalRecStatus_WaitingStart,	"WaitingStart" },
	{ SDK::CrIntervalRecStatus::CrIntervalRecStatus_IntervalShooting,	"IntervalShooting" },
};

const std::map<std::uint64_t, std::string> map_CrFocusIndicator
{
	{ SDK::CrFocusIndicator::CrFocusIndicator_Unlocked,	"Unlocked" },
	{ SDK::CrFocusIndicator::CrFocusIndicator_Focused_AF_S,	"Focused_AF_S" },
	{ SDK::CrFocusIndicator::CrFocusIndicator_NotFocused_AF_S,	"NotFocused_AF_S" },
	{ SDK::CrFocusIndicator::CrFocusIndicator_Focused_AF_C,	"Focused_AF_C" },
	{ SDK::CrFocusIndicator::CrFocusIndicator_NotFocused_AF_C,	"NotFocused_AF_C" },
	{ SDK::CrFocusIndicator::CrFocusIndicator_TrackingSubject_AF_C,	"TrackingSubject_AF_C" },
};

const std::map<std::uint64_t, std::string> map_CrSlotStatus
{
	{ SDK::CrSlotStatus::CrSlotStatus_OK,	"OK" },
	{ SDK::CrSlotStatus::CrSlotStatus_NoCard,	"NoCard" },
	{ SDK::CrSlotStatus::CrSlotStatus_CardError,	"CardError" },
	{ SDK::CrSlotStatus::CrSlotStatus_RecognizingOrLockedError,	"RecognizingOrLockedError" },
};

const std::map<std::uint64_t, std::string> map_CrPriorityKeySettings
{
	{ SDK::CrPriorityKeySettings::CrPriorityKey_CameraPosition,	"CameraPosition" },
	{ SDK::CrPriorityKeySettings::CrPriorityKey_PCRemote,	"PCRemote" },
};

const std::map<std::uint64_t, std::string> map_CrLevelState
{
	{ SDK::CrLevelState::CrLevel_Off,	"Off" },
	{ SDK::CrLevelState::CrLevel_On,	"On" },
};

const std::map<std::uint64_t, std::string> map_CrFocusFrameType
{
	{ SDK::CrFocusFrameType::CrFocusFrameType_Unknown,	"Unknown" },
	{ SDK::CrFocusFrameType::CrFocusFrameType_PhaseDetection_AFSensor,	"PhaseDetection_AFSensor" },
	{ SDK::CrFocusFrameType::CrFocusFrameType_PhaseDetection_ImageSensor,	"PhaseDetection_ImageSensor" },
	{ SDK::CrFocusFrameType::CrFocusFrameType_Wide,	"Wide" },
	{ SDK::CrFocusFrameType::CrFocusFrameType_Zone,	"Zone" },
	{ SDK::CrFocusFrameType::CrFocusFrameType_CentralEmphasis,	"CentralEmphasis" },
	{ SDK::CrFocusFrameType::CrFocusFrameType_ContrastFlexibleMain,	"ContrastFlexibleMain" },
	{ SDK::CrFocusFrameType::CrFocusFrameType_ContrastFlexibleAssist,	"ContrastFlexibleAssist" },
	{ SDK::CrFocusFrameType::CrFocusFrameType_Contrast,	"Contrast" },
	{ SDK::CrFocusFrameType::CrFocusFrameType_FrameSomewhere,	"FrameSomewhere" },
};

const std::map<std::uint64_t, std::string> map_CrFocusFrameState
{
	{ SDK::CrFocusFrameState::CrFocusFrameState_Unknown,	"Unknown" },
	{ SDK::CrFocusFrameState::CrFocusFrameState_NotFocused,	"NotFocused" },
	{ SDK::CrFocusFrameState::CrFocusFrameState_Focused,	"Focused" },
	{ SDK::CrFocusFrameState::CrFocusFrameState_FocusFrameSelection,	"FocusFrameSelection" },
	{ SDK::CrFocusFrameState::CrFocusFrameState_Moving,	"Moving" },
	{ SDK::CrFocusFrameState::CrFocusFrameState_RegistrationAF,	"RegistrationAF" },
	{ SDK::CrFocusFrameState::CrFocusFrameState_Island,	"Island" },
};

const std::map<std::uint64_t, std::string> map_CrFocusFrameSelectState
{
	{ SDK::CrFocusFrameSelectState::CrFocusFrameSelectState_Unknown,	"Unknown" },
};

const std::map<std::uint64_t, std::string> map_CrTrackingFrameType
{
	{ SDK::CrTrackingFrameType::CrTrackingFrameType_Unknown,	"Unknown" },
	{ SDK::CrTrackingFrameType::CrTrackingFrameType_NonTargetAF,	"NonTargetAF" },
	{ SDK::CrTrackingFrameType::CrTrackingFrameType_TargetAF,	"TargetAF" },
};

const std::map<std::uint64_t, std::string> map_CrFaceFrameType
{
	{ SDK::CrFaceFrameType::CrFaceFrameType_Unknown,	"Unknown" },
	{ SDK::CrFaceFrameType::CrFaceFrameType_DetectedFace,	"DetectedFace" },
	{ SDK::CrFaceFrameType::CrFaceFrameType_AF_TargetFace,	"AF_TargetFace" },
	{ SDK::CrFaceFrameType::CrFaceFrameType_PersonalRecognitionFace,	"PersonalRecognitionFace" },
	{ SDK::CrFaceFrameType::CrFaceFrameType_SmileDetectionFace,	"SmileDetectionFace" },
	{ SDK::CrFaceFrameType::CrFaceFrameType_SelectedFace,	"SelectedFace" },
	{ SDK::CrFaceFrameType::CrFaceFrameType_AF_TargetSelectionFace,	"AF_TargetSelectionFace" },
	{ SDK::CrFaceFrameType::CrFaceFrameType_SmileDetectionSelectFace,	"SmileDetectionSelectFace" },
};

const std::map<std::uint64_t, std::string> map_CrFrameInfoType
{
	{ SDK::CrFrameInfoType::CrFrameInfoType_Unknown,	"Unknown" },
	{ SDK::CrFrameInfoType::CrFrameInfoType_FocusFrameInfo,	"FocusFrameInfo" },
	{ SDK::CrFrameInfoType::CrFrameInfoType_Magnifier_Position,	"Magnifier_Position" },
	{ SDK::CrFrameInfoType::CrFrameInfoType_FaceFrameInfo,	"FaceFrameInfo" },
	{ SDK::CrFrameInfoType::CrFrameInfoType_TrackingFrameInfo,	"TrackingFrameInfo" },
	{ SDK::CrFrameInfoType::CrFrameInfoType_Level,	"Level" },
};

const std::map<std::uint64_t, std::string> map_CrPropertyEnableFlag
{
	{ SDK::CrPropertyEnableFlag::CrEnableValue_NotSupported,	"NotSupported" },
	{ SDK::CrPropertyEnableFlag::CrEnableValue_False,	"False" },
	{ SDK::CrPropertyEnableFlag::CrEnableValue_True,	"True" },
	{ SDK::CrPropertyEnableFlag::CrEnableValue_DisplayOnly,	"DisplayOnly" },
	{ SDK::CrPropertyEnableFlag::CrEnableValue_SetOnly,	"SetOnly" },
};

const std::map<std::uint64_t, std::string> map_CrPropertyVariableFlag
{
	{ SDK::CrPropertyVariableFlag::CrEnableValue_Invalid,	"Invalid" },
	{ SDK::CrPropertyVariableFlag::CrEnableValue_Invariable,	"Invariable" },
	{ SDK::CrPropertyVariableFlag::CrEnableValue_Variable,	"Variable" },
};

const std::map<std::uint64_t, std::string> map_CrPropertyStillImageTransSize
{
	{ SDK::CrPropertyStillImageTransSize::CrPropertyStillImageTransSize_Original,	"Original" },
	{ SDK::CrPropertyStillImageTransSize::CrPropertyStillImageTransSize_SmallSize,	"SmallSize" },
	{ SDK::CrPropertyStillImageTransSize::CrPropertyStillImageTransSize_SmallSizeJPEG,	"SmallSizeJPEG" },
};

const std::map<std::uint64_t, std::string> map_CrPropertyRAWJPCSaveImage
{
	{ SDK::CrPropertyRAWJPCSaveImage::CrPropertyRAWJPCSaveImage_RAWAndJPEG,	"RAWAndJPEG" },
	{ SDK::CrPropertyRAWJPCSaveImage::CrPropertyRAWJPCSaveImage_JPEGOnly,	"JPEGOnly" },
	{ SDK::CrPropertyRAWJPCSaveImage::CrPropertyRAWJPCSaveImage_RAWOnly,	"RAWOnly" },
	{ SDK::CrPropertyRAWJPCSaveImage::CrPropertyRAWJPCSaveImage_RAWAndHEIF,	"RAWAndHEIF" },
	{ SDK::CrPropertyRAWJPCSaveImage::CrPropertyRAWJPCSaveImage_HEIFOnly,	"HEIFOnly" },
};

const std::map<std::uint64_t, std::string> map_CrPropertyLiveViewImageQuality
{
	{ SDK::CrPropertyLiveViewImageQuality::CrPropertyLiveViewImageQuality_Low,	"Low" },
	{ SDK::CrPropertyLiveViewImageQuality::CrPropertyLiveViewImageQuality_High,	"High" },
};

const std::map<std::uint64_t, std::string> map_CrPropertyCustomWBOperation
{
	{ SDK::CrPropertyCustomWBOperation::CrPropertyCustomWBOperation_Disable,	"Disable" },
	{ SDK::CrPropertyCustomWBOperation::CrPropertyCustomWBOperation_Enable,	"Enable" },
};

const std::map<std::uint64_t, std::string> map_CrPropertyCustomWBExecutionState
{
	{ SDK::CrPropertyCustomWBExecutionState::CrPropertyCustomWBExecutionState_Invalid,	"Invalid" },
	{ SDK::CrPropertyCustomWBExecutionState::CrPropertyCustomWBExecutionState_Standby,	"Standby" },
	{ SDK::CrPropertyCustomWBExecutionState::CrPropertyCustomWBExecutionState_Capturing,	"Capturing" },
	{ SDK::CrPropertyCustomWBExecutionState::CrPropertyCustomWBExecutionState_OperatingCamera,	"OperatingCamera" },
};

const std::map<std::uint64_t, std::string> map_CrPropertyCustomWBCaptureButton
{
	{ SDK::CrPropertyCustomWBCaptureButton::CrPropertyCustomWBCapture_Up,	"Up" },
	{ SDK::CrPropertyCustomWBCaptureButton::CrPropertyCustomWBCapture_Down,	"Down" },
};

const std::map<std::uint64_t, std::string> map_CrFileFormatMovie
{
	{ SDK::CrFileFormatMovie::CrFileFormatMovie_AVCHD,	"AVCHD" },
	{ SDK::CrFileFormatMovie::CrFileFormatMovie_MP4,	"MP4" },
	{ SDK::CrFileFormatMovie::CrFileFormatMovie_XAVC_S_4K,	"XAVC_S_4K" },
	{ SDK::CrFileFormatMovie::CrFileFormatMovie_XAVC_S_HD,	"XAVC_S_HD" },
	{ SDK::CrFileFormatMovie::CrFileFormatMovie_XAVC_HS_8K,	"XAVC_HS_8K" },
	{ SDK::CrFileFormatMovie::CrFileFormatMovie_XAVC_HS_4K,	"XAVC_HS_4K" },
	{ SDK::CrFileFormatMovie::CrFileFormatMovie_XAVC_S_L_4K,	"XAVC_S_L_4K" },
	{ SDK::CrFileFormatMovie::CrFileFormatMovie_XAVC_S_L_HD,	"XAVC_S_L_HD" },
	{ SDK::CrFileFormatMovie::CrFileFormatMovie_XAVC_S_I_4K,	"XAVC_S_I_4K" },
	{ SDK::CrFileFormatMovie::CrFileFormatMovie_XAVC_S_I_HD,	"XAVC_S_I_HD" },
	{ SDK::CrFileFormatMovie::CrFileFormatMovie_XAVC_I,	"XAVC_I" },
	{ SDK::CrFileFormatMovie::CrFileFormatMovie_XAVC_L,	"XAVC_L" },
	{ SDK::CrFileFormatMovie::CrFileFormatMovie_XAVC_HS_HD,	"XAVC_HS_HD" },
	{ SDK::CrFileFormatMovie::CrFileFormatMovie_XAVC_S_I_DCI_4K,	"XAVC_S_I_DCI_4K" },
	{ SDK::CrFileFormatMovie::CrFileFormatMovie_XAVC_H_I_HQ,	"XAVC_H_I_HQ" },
	{ SDK::CrFileFormatMovie::CrFileFormatMovie_XAVC_H_I_SQ,	"XAVC_H_I_SQ" },
	{ SDK::CrFileFormatMovie::CrFileFormatMovie_XAVC_H_L,	"XAVC_H_L" },
	{ SDK::CrFileFormatMovie::CrFileFormatMovie_X_OCN_XT,	"X_OCN_XT" },
	{ SDK::CrFileFormatMovie::CrFileFormatMovie_X_OCN_ST,	"X_OCN_ST" },
	{ SDK::CrFileFormatMovie::CrFileFormatMovie_X_OCN_LT,	"X_OCN_LT" },
};

const std::map<std::uint64_t, std::string> map_CrRecordingSettingMovie
{
	{ SDK::CrRecordingSettingMovie::CrRecordingSettingMovie_Invalid,	"Invalid" },
	{ SDK::CrRecordingSettingMovie::CrRecordingSettingMovie_60p_50M,	"60p_50M" },
	{ SDK::CrRecordingSettingMovie::CrRecordingSettingMovie_30p_50M,	"30p_50M" },
	{ SDK::CrRecordingSettingMovie::CrRecordingSettingMovie_24p_50M,	"24p_50M" },
	{ SDK::CrRecordingSettingMovie::CrRecordingSettingMovie_50p_50M,	"50p_50M" },
	{ SDK::CrRecordingSettingMovie::CrRecordingSettingMovie_25p_50M,	"25p_50M" },
	{ SDK::CrRecordingSettingMovie::CrRecordingSettingMovie_60i_24M,	"60i_24M" },
	{ SDK::CrRecordingSettingMovie::CrRecordingSettingMovie_50i_24M_FX,	"50i_24M_FX" },
	{ SDK::CrRecordingSettingMovie::CrRecordingSettingMovie_60i_17M_FH,	"60i_17M_FH" },
	{ SDK::CrRecordingSettingMovie::CrRecordingSettingMovie_50i_17M_FH,	"50i_17M_FH" },
	{ SDK::CrRecordingSettingMovie::CrRecordingSettingMovie_60p_28M_PS,	"60p_28M_PS" },
	{ SDK::CrRecordingSettingMovie::CrRecordingSettingMovie_50p_28M_PS,	"50p_28M_PS" },
	{ SDK::CrRecordingSettingMovie::CrRecordingSettingMovie_24p_24M_FX,	"24p_24M_FX" },
	{ SDK::CrRecordingSettingMovie::CrRecordingSettingMovie_25p_24M_FX,	"25p_24M_FX" },
	{ SDK::CrRecordingSettingMovie::CrRecordingSettingMovie_24p_17M_FH,	"24p_17M_FH" },
	{ SDK::CrRecordingSettingMovie::CrRecordingSettingMovie_25p_17M_FH,	"25p_17M_FH" },
	{ SDK::CrRecordingSettingMovie::CrRecordingSettingMovie_120p_50M_1280x720,	"120p_50M_1280x720" },
	{ SDK::CrRecordingSettingMovie::CrRecordingSettingMovie_100p_50M_1280x720,	"100p_50M_1280x720" },
	{ SDK::CrRecordingSettingMovie::CrRecordingSettingMovie_1920x1080_30p_16M,	"1920x1080_30p_16M" },
	{ SDK::CrRecordingSettingMovie::CrRecordingSettingMovie_1920x1080_25p_16M,	"1920x1080_25p_16M" },
	{ SDK::CrRecordingSettingMovie::CrRecordingSettingMovie_1280x720_30p_6M,	"1280x720_30p_6M" },
	{ SDK::CrRecordingSettingMovie::CrRecordingSettingMovie_1280x720_25p_6M,	"1280x720_25p_6M" },
	{ SDK::CrRecordingSettingMovie::CrRecordingSettingMovie_1920x1080_60p_28M,	"1920x1080_60p_28M" },
	{ SDK::CrRecordingSettingMovie::CrRecordingSettingMovie_1920x1080_50p_28M,	"1920x1080_50p_28M" },
	{ SDK::CrRecordingSettingMovie::CrRecordingSettingMovie_60p_25M_XAVC_S_HD,	"60p_25M_XAVC_S_HD" },
	{ SDK::CrRecordingSettingMovie::CrRecordingSettingMovie_50p_25M_XAVC_S_HD,	"50p_25M_XAVC_S_HD" },
	{ SDK::CrRecordingSettingMovie::CrRecordingSettingMovie_30p_16M_XAVC_S_HD,	"30p_16M_XAVC_S_HD" },
	{ SDK::CrRecordingSettingMovie::CrRecordingSettingMovie_25p_16M_XAVC_S_HD,	"25p_16M_XAVC_S_HD" },
	{ SDK::CrRecordingSettingMovie::CrRecordingSettingMovie_120p_100M_1920x1080_XAVC_S_HD,	"120p_100M_1920x1080_XAVC_S_HD" },
	{ SDK::CrRecordingSettingMovie::CrRecordingSettingMovie_100p_100M_1920x1080_XAVC_S_HD,	"100p_100M_1920x1080_XAVC_S_HD" },
	{ SDK::CrRecordingSettingMovie::CrRecordingSettingMovie_120p_60M_1920x1080_XAVC_S_HD,	"120p_60M_1920x1080_XAVC_S_HD" },
	{ SDK::CrRecordingSettingMovie::CrRecordingSettingMovie_100p_60M_1920x1080_XAVC_S_HD,	"100p_60M_1920x1080_XAVC_S_HD" },
	{ SDK::CrRecordingSettingMovie::CrRecordingSettingMovie_30p_100M_XAVC_S_4K,	"30p_100M_XAVC_S_4K" },
	{ SDK::CrRecordingSettingMovie::CrRecordingSettingMovie_25p_100M_XAVC_S_4K,	"25p_100M_XAVC_S_4K" },
	{ SDK::CrRecordingSettingMovie::CrRecordingSettingMovie_24p_100M_XAVC_S_4K,	"24p_100M_XAVC_S_4K" },
	{ SDK::CrRecordingSettingMovie::CrRecordingSettingMovie_30p_60M_XAVC_S_4K,	"30p_60M_XAVC_S_4K" },
	{ SDK::CrRecordingSettingMovie::CrRecordingSettingMovie_25p_60M_XAVC_S_4K,	"25p_60M_XAVC_S_4K" },
	{ SDK::CrRecordingSettingMovie::CrRecordingSettingMovie_24p_60M_XAVC_S_4K,	"24p_60M_XAVC_S_4K" },
	{ SDK::CrRecordingSettingMovie::CrRecordingSettingMovie_600M_422_10bit,	"600M_422_10bit" },
	{ SDK::CrRecordingSettingMovie::CrRecordingSettingMovie_500M_422_10bit,	"500M_422_10bit" },
	{ SDK::CrRecordingSettingMovie::CrRecordingSettingMovie_400M_420_10bit,	"400M_420_10bit" },
	{ SDK::CrRecordingSettingMovie::CrRecordingSettingMovie_300M_422_10bit,	"300M_422_10bit" },
	{ SDK::CrRecordingSettingMovie::CrRecordingSettingMovie_280M_422_10bit,	"280M_422_10bit" },
	{ SDK::CrRecordingSettingMovie::CrRecordingSettingMovie_250M_422_10bit,	"250M_422_10bit" },
	{ SDK::CrRecordingSettingMovie::CrRecordingSettingMovie_240M_422_10bit,	"240M_422_10bit" },
	{ SDK::CrRecordingSettingMovie::CrRecordingSettingMovie_222M_422_10bit,	"222M_422_10bit" },
	{ SDK::CrRecordingSettingMovie::CrRecordingSettingMovie_200M_422_10bit,	"200M_422_10bit" },
	{ SDK::CrRecordingSettingMovie::CrRecordingSettingMovie_200M_420_10bit,	"200M_420_10bit" },
	{ SDK::CrRecordingSettingMovie::CrRecordingSettingMovie_200M_420_8bit,	"200M_420_8bit" },
	{ SDK::CrRecordingSettingMovie::CrRecordingSettingMovie_185M_422_10bit,	"185M_422_10bit" },
	{ SDK::CrRecordingSettingMovie::CrRecordingSettingMovie_150M_420_10bit,	"150M_420_10bit" },
	{ SDK::CrRecordingSettingMovie::CrRecordingSettingMovie_150M_420_8bit,	"150M_420_8bit" },
	{ SDK::CrRecordingSettingMovie::CrRecordingSettingMovie_140M_422_10bit,	"140M_422_10bit" },
	{ SDK::CrRecordingSettingMovie::CrRecordingSettingMovie_111M_422_10bit,	"111M_422_10bit" },
	{ SDK::CrRecordingSettingMovie::CrRecordingSettingMovie_100M_422_10bit,	"100M_422_10bit" },
	{ SDK::CrRecordingSettingMovie::CrRecordingSettingMovie_100M_420_10bit,	"100M_420_10bit" },
	{ SDK::CrRecordingSettingMovie::CrRecordingSettingMovie_100M_420_8bit,	"100M_420_8bit" },
	{ SDK::CrRecordingSettingMovie::CrRecordingSettingMovie_93M_422_10bit,	"93M_422_10bit" },
	{ SDK::CrRecordingSettingMovie::CrRecordingSettingMovie_89M_422_10bit,	"89M_422_10bit" },
	{ SDK::CrRecordingSettingMovie::CrRecordingSettingMovie_75M_420_10bit,	"75M_420_10bit" },
	{ SDK::CrRecordingSettingMovie::CrRecordingSettingMovie_60M_420_8bit,	"60M_420_8bit" },
	{ SDK::CrRecordingSettingMovie::CrRecordingSettingMovie_50M_422_10bit,	"50M_422_10bit" },
	{ SDK::CrRecordingSettingMovie::CrRecordingSettingMovie_50M_420_10bit,	"50M_420_10bit" },
	{ SDK::CrRecordingSettingMovie::CrRecordingSettingMovie_50M_420_8bit,	"50M_420_8bit" },
	{ SDK::CrRecordingSettingMovie::CrRecordingSettingMovie_45M_420_10bit,	"45M_420_10bit" },
	{ SDK::CrRecordingSettingMovie::CrRecordingSettingMovie_30M_420_10bit,	"30M_420_10bit" },
	{ SDK::CrRecordingSettingMovie::CrRecordingSettingMovie_25M_420_8bit,	"25M_420_8bit" },
	{ SDK::CrRecordingSettingMovie::CrRecordingSettingMovie_16M_420_8bit,	"16M_420_8bit" },
	{ SDK::CrRecordingSettingMovie::CrRecordingSettingMovie_520M_422_10bit,	"520M_422_10bit" },
	{ SDK::CrRecordingSettingMovie::CrRecordingSettingMovie_260M_422_10bit,	"260M_422_10bit" },
};

const std::map<std::uint64_t, std::string> map_CrRecordingFrameRateSettingMovie
{
	{ SDK::CrRecordingFrameRateSettingMovie::CrRecordingFrameRateSettingMovie_120p,	"120p" },
	{ SDK::CrRecordingFrameRateSettingMovie::CrRecordingFrameRateSettingMovie_100p,	"100p" },
	{ SDK::CrRecordingFrameRateSettingMovie::CrRecordingFrameRateSettingMovie_60p,	"60p" },
	{ SDK::CrRecordingFrameRateSettingMovie::CrRecordingFrameRateSettingMovie_50p,	"50p" },
	{ SDK::CrRecordingFrameRateSettingMovie::CrRecordingFrameRateSettingMovie_30p,	"30p" },
	{ SDK::CrRecordingFrameRateSettingMovie::CrRecordingFrameRateSettingMovie_25p,	"25p" },
	{ SDK::CrRecordingFrameRateSettingMovie::CrRecordingFrameRateSettingMovie_24p,	"24p" },
	{ SDK::CrRecordingFrameRateSettingMovie::CrRecordingFrameRateSettingMovie_23_98p,	"23_98p" },
	{ SDK::CrRecordingFrameRateSettingMovie::CrRecordingFrameRateSettingMovie_29_97p,	"29_97p" },
	{ SDK::CrRecordingFrameRateSettingMovie::CrRecordingFrameRateSettingMovie_59_94p,	"59_94p" },
	{ SDK::CrRecordingFrameRateSettingMovie::CrRecordingFrameRateSettingMovie_24_00p,	"24_00p" },
	{ SDK::CrRecordingFrameRateSettingMovie::CrRecordingFrameRateSettingMovie_119_88p,	"119_88p" },
};

const std::map<std::uint64_t, std::string> map_CrCompressionFileFormat
{
	{ SDK::CrCompressionFileFormat::CrCompressionFileFormat_JPEG,	"JPEG" },
	{ SDK::CrCompressionFileFormat::CrCompressionFileFormat_HEIF_422,	"HEIF_422" },
	{ SDK::CrCompressionFileFormat::CrCompressionFileFormat_HEIF_420,	"HEIF_420" },
};

const std::map<std::uint64_t, std::string> map_CrZoomOperationEnableStatus
{
	{ SDK::CrZoomOperationEnableStatus::CrZoomOperationEnableStatus_Default,	"Default" },
	{ SDK::CrZoomOperationEnableStatus::CrZoomOperationEnableStatus_Disable,	"Disable" },
	{ SDK::CrZoomOperationEnableStatus::CrZoomOperationEnableStatus_Enable,	"Enable" },
};

const std::map<std::uint64_t, std::string> map_CrZoomSettingType
{
	{ SDK::CrZoomSettingType::CrZoomSetting_OpticalZoomOnly,	"OpticalZoomOnly" },
	{ SDK::CrZoomSettingType::CrZoomSetting_SmartZoomOnly,	"SmartZoomOnly" },
	{ SDK::CrZoomSettingType::CrZoomSetting_On_ClearImageZoom,	"On_ClearImageZoom" },
	{ SDK::CrZoomSettingType::CrZoomSetting_On_DigitalZoom,	"On_DigitalZoom" },
};

const std::map<std::uint64_t, std::string> map_CrZoomTypeStatus
{
	{ SDK::CrZoomTypeStatus::CrZoomTypeStatus_OpticalZoom,	"OpticalZoom" },
	{ SDK::CrZoomTypeStatus::CrZoomTypeStatus_SmartZoom,	"SmartZoom" },
	{ SDK::CrZoomTypeStatus::CrZoomTypeStatus_ClearImageZoom,	"ClearImageZoom" },
	{ SDK::CrZoomTypeStatus::CrZoomTypeStatus_DigitalZoom,	"DigitalZoom" },
};

const std::map<std::uint64_t, std::string> map_CrZoomOperation
{
	{ SDK::CrZoomOperation::CrZoomOperation_Wide,	"Wide" },
	{ SDK::CrZoomOperation::CrZoomOperation_Stop,	"Stop" },
	{ SDK::CrZoomOperation::CrZoomOperation_Tele,	"Tele" },
};

const std::map<std::uint64_t, std::string> map_CrRemoconZoomSpeedType
{
	{ SDK::CrRemoconZoomSpeedType::CrRemoconZoomSpeedType_Invalid,	"Invalid" },
	{ SDK::CrRemoconZoomSpeedType::CrRemoconZoomSpeedType_Variable,	"Variable" },
	{ SDK::CrRemoconZoomSpeedType::CrRemoconZoomSpeedType_Fixed,	"Fixed" },
};

const std::map<std::uint64_t, std::string> map_CrRAWFileCompressionType
{
	{ SDK::CrRAWFileCompressionType::CrRAWFile_Uncompression,	"Uncompression" },
	{ SDK::CrRAWFileCompressionType::CrRAWFile_Compression,	"Compression" },
	{ SDK::CrRAWFileCompressionType::CrRAWFile_LossLess,	"LossLess" },
	{ SDK::CrRAWFileCompressionType::CrRAWFile_LossLessS,	"LossLessS" },
	{ SDK::CrRAWFileCompressionType::CrRAWFile_LossLessM,	"LossLessM" },
	{ SDK::CrRAWFileCompressionType::CrRAWFile_LossLessL,	"LossLessL" },
};

const std::map<std::uint64_t, std::string> map_CrContentsTransferStatus
{
	{ SDK::CrContentsTransferStatus::CrContentsTransfer_OFF,	"OFF" },
	{ SDK::CrContentsTransferStatus::CrContentsTransfer_ON,	"ON" },
};

const std::map<std::uint64_t, std::string> map_CrCancelContentsTransferEnableStatus
{
	{ SDK::CrCancelContentsTransferEnableStatus::CrCancelContentsTransfer_Disable,	"Disable" },
	{ SDK::CrCancelContentsTransferEnableStatus::CrCancelContentsTransfer_Enable,	"Enable" },
};

const std::map<std::uint64_t, std::string> map_CrAPS_C_or_Full_SwitchingSetting
{
	{ SDK::CrAPS_C_or_Full_SwitchingSetting::CrAPS_C_or_Full_SwitchingSetting_Full,	"Full" },
	{ SDK::CrAPS_C_or_Full_SwitchingSetting::CrAPS_C_or_Full_SwitchingSetting_APS_C,	"APS_C" },
};

const std::map<std::uint64_t, std::string> map_CrAPS_C_or_Full_SwitchingEnableStatus
{
	{ SDK::CrAPS_C_or_Full_SwitchingEnableStatus::CrAPS_C_or_Full_Switching_Disable,	"Disable" },
	{ SDK::CrAPS_C_or_Full_SwitchingEnableStatus::CrAPS_C_or_Full_Switching_Enable,	"Enable" },
};

const std::map<std::uint64_t, std::string> map_CrCameraSettingSaveOperation
{
	{ SDK::CrCameraSettingSaveOperation::CrCameraSettingSaveOperation_Disable,	"Disable" },
	{ SDK::CrCameraSettingSaveOperation::CrCameraSettingSaveOperation_Enable,	"Enable" },
};

const std::map<std::uint64_t, std::string> map_CrCameraSettingReadOperation
{
	{ SDK::CrCameraSettingReadOperation::CrCameraSettingReadOperation_Disable,	"Disable" },
	{ SDK::CrCameraSettingReadOperation::CrCameraSettingReadOperation_Enable,	"Enable" },
};

const std::map<std::uint64_t, std::string> map_CrCameraSettingSaveReadState
{
	{ SDK::CrCameraSettingSaveReadState::CrCameraSettingSaveReadState_Idle,	"Idle" },
	{ SDK::CrCameraSettingSaveReadState::CrCameraSettingSaveReadState_Reading,	"Reading" },
};

const std::map<std::uint64_t, std::string> map_CrDownloadSettingFileType
{
	{ SDK::CrDownloadSettingFileType::CrDownloadSettingFileType_Setup,	"Setup" },
	{ SDK::CrDownloadSettingFileType::CrDownloadSettingFileType_FTPTransferSetting,	"FTPTransferSetting" },
	{ SDK::CrDownloadSettingFileType::CrDownloadSettingFileType_None,	"None" },
};

const std::map<std::uint64_t, std::string> map_CrUploadSettingFileType
{
	{ SDK::CrUploadSettingFileType::CrUploadSettingFileType_Setup,	"Setup" },
	{ SDK::CrUploadSettingFileType::CrUploadSettingFileType_FTPTransferSetting,	"FTPTransferSetting" },
};

const std::map<std::uint64_t, std::string> map_CrPlaybackMedia
{
	{ SDK::CrPlaybackMedia::CrPlaybackMedia_Slot1,	"Slot1" },
	{ SDK::CrPlaybackMedia::CrPlaybackMedia_Slot2,	"Slot2" },
};

const std::map<std::uint64_t, std::string> map_CrTouchOperation
{
	{ SDK::CrTouchOperation::CrTouchOperation_Off,	"Off" },
	{ SDK::CrTouchOperation::CrTouchOperation_On,	"On" },
	{ SDK::CrTouchOperation::CrTouchOperation_PlaybackOnly,	"PlaybackOnly" },
};

const std::map<std::uint64_t, std::string> map_CrCameraSettingsResetEnableStatus
{
	{ SDK::CrCameraSettingsResetEnableStatus::CrCameraSettingsReset_Disable,	"Disable" },
	{ SDK::CrCameraSettingsResetEnableStatus::CrCameraSettingsReset_Enable,	"Enable" },
};

const std::map<std::uint64_t, std::string> map_CrAutoPowerOffTemperature
{
	{ SDK::CrAutoPowerOffTemperature::CrAutoPowerOffTemperature_Standard,	"Standard" },
	{ SDK::CrAutoPowerOffTemperature::CrAutoPowerOffTemperature_High,	"High" },
};

const std::map<std::uint64_t, std::string> map_CrBodyKeyLock
{
	{ SDK::CrBodyKeyLock::CrBodyKey_Unlock,	"Unlock" },
	{ SDK::CrBodyKeyLock::CrBodyKey_Lock,	"Lock" },
};

const std::map<std::uint64_t, std::string> map_CrSelectFinder
{
	{ SDK::CrSelectFinder::CrSelectFinder_Auto,	"Auto" },
	{ SDK::CrSelectFinder::CrSelectFinder_ViewFinder_M,	"ViewFinder_M" },
	{ SDK::CrSelectFinder::CrSelectFinder_Monitor_M,	"Monitor_M" },
	{ SDK::CrSelectFinder::CrSelectFinder_Auto2,	"Auto2" },
};

const std::map<std::uint64_t, std::string> map_CrDispMode
{
	{ SDK::CrDispMode::CrDispMode_GraphicDisplay,	"GraphicDisplay" },
	{ SDK::CrDispMode::CrDispMode_DisplayAllInfo,	"DisplayAllInfo" },
	{ SDK::CrDispMode::CrDispMode_NoDispInfo,	"NoDispInfo" },
	{ SDK::CrDispMode::CrDispMode_Histogram,	"Histogram" },
	{ SDK::CrDispMode::CrDispMode_Level,	"Level" },
	{ SDK::CrDispMode::CrDispMode_ForViewFinder,	"ForViewFinder" },
	{ SDK::CrDispMode::CrDispMode_MonitorOff,	"MonitorOff" },
};

const std::map<std::uint64_t, std::string> map_CrDispModeBitNum
{
	{ SDK::CrDispModeBitNum::CrDispModeBitNum_GraphicDisplay,	"GraphicDisplay" },
	{ SDK::CrDispModeBitNum::CrDispModeBitNum_DisplayAllInfo,	"DisplayAllInfo" },
	{ SDK::CrDispModeBitNum::CrDispModeBitNum_Histogram,	"Histogram" },
	{ SDK::CrDispModeBitNum::CrDispModeBitNum_Level,	"Level" },
	{ SDK::CrDispModeBitNum::CrDispModeBitNum_NoDispInfo,	"NoDispInfo" },
	{ SDK::CrDispModeBitNum::CrDispModeBitNum_NoDispInfoExposureOn,	"NoDispInfoExposureOn" },
	{ SDK::CrDispModeBitNum::CrDispModeBitNum_NoDispInfoExposureTimeOut,	"NoDispInfoExposureTimeOut" },
	{ SDK::CrDispModeBitNum::CrDispModeBitNum_ForViewFinder,	"ForViewFinder" },
	{ SDK::CrDispModeBitNum::CrDispModeBitNum_MonitorOff,	"MonitorOff" },
};

const std::map<std::uint64_t, std::string> map_CrGainBaseSensitivity
{
	{ SDK::CrGainBaseSensitivity::CrGainBaseSensitivity_High,	"High" },
	{ SDK::CrGainBaseSensitivity::CrGainBaseSensitivity_Low,	"Low" },
};

const std::map<std::uint64_t, std::string> map_CrGainBaseIsoSensitivity
{
	{ SDK::CrGainBaseIsoSensitivity::CrGainBaseIsoSensitivity_High,	"High" },
	{ SDK::CrGainBaseIsoSensitivity::CrGainBaseIsoSensitivity_Low,	"Low" },
};

const std::map<std::uint64_t, std::string> map_CrBaseLookValueSetter
{
	{ SDK::CrBaseLookValueSetter::CrBaseLookValue_Preset,	"Preset" },
	{ SDK::CrBaseLookValueSetter::CrBaseLookValue_User,	"User" },
};

const std::map<std::uint64_t, std::string> map_CrMonitorLUTSetting
{
	{ SDK::CrMonitorLUTSetting::CrMonitorLUT_OFF,	"OFF" },
	{ SDK::CrMonitorLUTSetting::CrMonitorLUT_ON,	"ON" },
};

const std::map<std::uint64_t, std::string> map_CrDisplayStringType
{
	{ SDK::CrDisplayStringType::CrDisplayStringType_AllList,	"AllList" },
	{ SDK::CrDisplayStringType::CrDisplayStringType_BaseLook_AELevelOffset_ExposureValue,	"BaseLook_AELevelOffset_ExposureValue" },
	{ SDK::CrDisplayStringType::CrDisplayStringType_BaseLook_Input_Display,	"BaseLook_Input_Display" },
	{ SDK::CrDisplayStringType::CrDisplayStringType_BaseLook_Name_Display,	"BaseLook_Name_Display" },
	{ SDK::CrDisplayStringType::CrDisplayStringType_BaseLook_Output_Display,	"BaseLook_Output_Display" },
	{ SDK::CrDisplayStringType::CrDisplayStringType_SceneFile_Name_Display,	"SceneFile_Name_Display" },
	{ SDK::CrDisplayStringType::CrDisplayStringType_ShootingMode_Cinema_ColorGamut_Display,	"ShootingMode_Cinema_ColorGamut_Display" },
	{ SDK::CrDisplayStringType::CrDisplayStringType_ShootingMode_TargetDisplay_Display,	"ShootingMode_TargetDisplay_Display" },
	{ SDK::CrDisplayStringType::CrDisplayStringType_Camera_Gain_BaseISO_Display,	"Camera_Gain_BaseISO_Display" },
	{ SDK::CrDisplayStringType::CrDisplayStringType_Video_EIGain_Display,	"Video_EIGain_Display" },
	{ SDK::CrDisplayStringType::CrDisplayStringType_Button_Assign_Display,	"Button_Assign_Display" },
	{ SDK::CrDisplayStringType::CrDisplayStringType_Button_Assign_ShortDisplay,	"Button_Assign_ShortDisplay" },
	{ SDK::CrDisplayStringType::CrDisplayStringType_FTP_ServerName_Display,	"FTP_ServerName_Display" },
	{ SDK::CrDisplayStringType::CrDisplayStringType_FTP_UpLoadDirectory_Display,	"FTP_UpLoadDirectory_Display" },
	{ SDK::CrDisplayStringType::CrDisplayStringType_FTP_JobStatus_Display,	"FTP_JobStatus_Display" },
	{ SDK::CrDisplayStringType::CrDisplayStringType_Reserved4,	"Reserved4" },
	{ SDK::CrDisplayStringType::CrDisplayStringType_Reserved5,	"Reserved5" },
	{ SDK::CrDisplayStringType::CrDisplayStringType_Reserved6,	"Reserved6" },
	{ SDK::CrDisplayStringType::CrDisplayStringType_Reserved7,	"Reserved7" },
	{ SDK::CrDisplayStringType::CrDisplayStringType_CreativeLook_Name_Display,	"CreativeLook_Name_Display" },
	{ SDK::CrDisplayStringType::CrDisplayStringType_IPTC_Metadata_Display,	"IPTC_Metadata_Display" },
	{ SDK::CrDisplayStringType::CrDisplayStringType_SubjectRecognitionAF_Display,	"SubjectRecognitionAF_Display" },
	{ SDK::CrDisplayStringType::CrDisplayStringType_Reserved11,	"Reserved11" },
};

const std::map<std::uint64_t, std::string> map_CrImageIDNumSetting
{
	{ SDK::CrImageIDNumSetting::CrImageIDNumSetting_Off,	"Off" },
	{ SDK::CrImageIDNumSetting::CrImageIDNumSetting_On,	"On" },
};

const std::map<std::uint64_t, std::string> map_CrIrisModeSetting
{
	{ SDK::CrIrisModeSetting::CrIrisMode_Automatic,	"Automatic" },
	{ SDK::CrIrisModeSetting::CrIrisMode_Manual,	"Manual" },
};

const std::map<std::uint64_t, std::string> map_CrShutterModeSetting
{
	{ SDK::CrShutterModeSetting::CrShutterMode_Automatic,	"Automatic" },
	{ SDK::CrShutterModeSetting::CrShutterMode_Manual,	"Manual" },
};

const std::map<std::uint64_t, std::string> map_CrExposureCtrlType
{
	{ SDK::CrExposureCtrlType::CrExposureCtrlType_PASMMode,	"PASMMode" },
	{ SDK::CrExposureCtrlType::CrExposureCtrlType_FlexibleExposureMode,	"FlexibleExposureMode" },
};

const std::map<std::uint64_t, std::string> map_CrGainControlSetting
{
	{ SDK::CrGainControlSetting::CrGainControl_Automatic,	"Automatic" },
	{ SDK::CrGainControlSetting::CrGainControl_Manual,	"Manual" },
};

const std::map<std::uint64_t, std::string> map_CrFocalDistanceUnitSetting
{
	{ SDK::CrFocalDistanceUnitSetting::CrFocalDistanceUnitSetting_Meter,	"Meter" },
	{ SDK::CrFocalDistanceUnitSetting::CrFocalDistanceUnitSetting_Feet,	"Feet" },
};

const std::map<std::uint64_t, std::string> map_CrShutterModeStatus
{
	{ SDK::CrShutterModeStatus::CrShutterModeStatus_Off,	"Off" },
	{ SDK::CrShutterModeStatus::CrShutterModeStatus_Speed,	"Speed" },
	{ SDK::CrShutterModeStatus::CrShutterModeStatus_Angle,	"Angle" },
	{ SDK::CrShutterModeStatus::CrShutterModeStatus_ECS,	"ECS" },
	{ SDK::CrShutterModeStatus::CrShutterModeStatus_Auto,	"Auto" },
};

const std::map<std::uint64_t, std::string> map_CrShutterSlow
{
	{ SDK::CrShutterSlow::CrShutterSlow_Off,	"Off" },
	{ SDK::CrShutterSlow::CrShutterSlow_On,	"On" },
};

const std::map<std::uint64_t, std::string> map_CrRecordingFrameRateProxySettingMovie
{
	{ SDK::CrRecordingFrameRateProxySettingMovie::CrRecordingFrameRateProxySettingMovie_50p,	"50p" },
	{ SDK::CrRecordingFrameRateProxySettingMovie::CrRecordingFrameRateProxySettingMovie_25p,	"25p" },
	{ SDK::CrRecordingFrameRateProxySettingMovie::CrRecordingFrameRateProxySettingMovie_24p,	"24p" },
	{ SDK::CrRecordingFrameRateProxySettingMovie::CrRecordingFrameRateProxySettingMovie_23_98p,	"23_98p" },
	{ SDK::CrRecordingFrameRateProxySettingMovie::CrRecordingFrameRateProxySettingMovie_29_97p,	"29_97p" },
	{ SDK::CrRecordingFrameRateProxySettingMovie::CrRecordingFrameRateProxySettingMovie_59_94p,	"59_94p" },
	{ SDK::CrRecordingFrameRateProxySettingMovie::CrRecordingFrameRateProxySettingMovie_24_00p,	"24_00p" },
	{ SDK::CrRecordingFrameRateProxySettingMovie::CrRecordingFrameRateProxySettingMovie_119_88p,	"119_88p" },
};

const std::map<std::uint64_t, std::string> map_CrZoomDistanceUnitSetting
{
	{ SDK::CrZoomDistanceUnitSetting::CrZoomDistanceUnitSetting_mm,	"mm" },
	{ SDK::CrZoomDistanceUnitSetting::CrZoomDistanceUnitSetting_percent,	"percent" },
};

const std::map<std::uint64_t, std::string> map_CrBatteryRemainDisplayUnit
{
	{ SDK::CrBatteryRemainDisplayUnit::CrBatteryRemainDisplayUnit_minute,	"minute" },
	{ SDK::CrBatteryRemainDisplayUnit::CrBatteryRemainDisplayUnit_percent,	"percent" },
	{ SDK::CrBatteryRemainDisplayUnit::CrBatteryRemainDisplayUnit_voltage,	"voltage" },
};

const std::map<std::uint64_t, std::string> map_CrPowerSource
{
	{ SDK::CrPowerSource::CrPowerSource_DC,	"DC" },
	{ SDK::CrPowerSource::CrPowerSource_Battery,	"Battery" },
};

const std::map<std::uint64_t, std::string> map_CrNDFilterMode
{
	{ SDK::CrNDFilterMode::CrNDFilterMode_Auto,	"Auto" },
	{ SDK::CrNDFilterMode::CrNDFilterMode_Preset,	"Preset" },
	{ SDK::CrNDFilterMode::CrNDFilterMode_PresetClear,	"PresetClear" },
	{ SDK::CrNDFilterMode::CrNDFilterMode_Variable,	"Variable" },
	{ SDK::CrNDFilterMode::CrNDFilterMode_VariableClear,	"VariableClear" },
	{ SDK::CrNDFilterMode::CrNDFilterMode_Step,	"Step" },
	{ SDK::CrNDFilterMode::CrNDFilterMode_StepClear,	"StepClear" },
};

const std::map<std::uint64_t, std::string> map_CrMediaPlayer
{
	{ SDK::CrMediaPlayer::CrMediaPlayer_None,	"None" },
	{ SDK::CrMediaPlayer::CrMediaPlayer_Player,	"Player" },
	{ SDK::CrMediaPlayer::CrMediaPlayer_Recorder,	"Recorder" },
	{ SDK::CrMediaPlayer::CrMediaPlayer_Player_Recorder,	"Player_Recorder" },
};

const std::map<std::uint64_t, std::string> map_CrMoviePlayingState
{
	{ SDK::CrMoviePlayingState::CrMoviePlayingState_NotPlaying,	"NotPlaying" },
	{ SDK::CrMoviePlayingState::CrMoviePlayingState_Playing,	"Playing" },
};

const std::map<std::uint64_t, std::string> map_CrMovieShootingModeColorGamut
{
	{ SDK::CrMovieShootingModeColorGamut::CrMovieShootingModeColorGamut_S_Gamut3_Cine,	"S_Gamut3_Cine" },
	{ SDK::CrMovieShootingModeColorGamut::CrMovieShootingModeColorGamut_S_Gamut3,	"S_Gamut3" },
};

const std::map<std::uint64_t, std::string> map_CrDepthOfFieldAdjustmentMode
{
	{ SDK::CrDepthOfFieldAdjustmentMode::CrDepthOfFieldAdjustmentMode_OFF,	"OFF" },
	{ SDK::CrDepthOfFieldAdjustmentMode::CrDepthOfFieldAdjustmentMode_ON,	"ON" },
};

const std::map<std::uint64_t, std::string> map_CrFocusTouchSpotStatus
{
	{ SDK::CrFocusTouchSpotStatus::CrFocusTouchSpotStatus_Stopped,	"Stopped" },
	{ SDK::CrFocusTouchSpotStatus::CrFocusTouchSpotStatus_Running,	"Running" },
};

const std::map<std::uint64_t, std::string> map_CrFocusTrackingStatus
{
	{ SDK::CrFocusTrackingStatus::CrFocusTrackingStatus_OFF,	"OFF" },
	{ SDK::CrFocusTrackingStatus::CrFocusTrackingStatus_Focusing,	"Focusing" },
	{ SDK::CrFocusTrackingStatus::CrFocusTrackingStatus_Tracking,	"Tracking" },
};

const std::map<std::uint64_t, std::string> map_CrDepthOfFieldAdjustmentInterlockingMode
{
	{ SDK::CrDepthOfFieldAdjustmentInterlockingMode::CrDepthOfFieldAdjustmentInterlockingMode_NDInterlockingMode,	"NDInterlockingMode" },
	{ SDK::CrDepthOfFieldAdjustmentInterlockingMode::CrDepthOfFieldAdjustmentInterlockingMode_GainInterlockingMode,	"GainInterlockingMode" },
};

const std::map<std::uint64_t, std::string> map_CrRecorderControlSetting
{
	{ SDK::CrRecorderControlSetting::CrRecorderControlSetting_RecDisable,	"RecDisable" },
	{ SDK::CrRecorderControlSetting::CrRecorderControlSetting_RecEnable,	"RecEnable" },
};

const std::map<std::uint64_t, std::string> map_CrRecorderStart
{
	{ SDK::CrRecorderStart::CrRecorderStart_RecStartDisable,	"RecStartDisable" },
	{ SDK::CrRecorderStart::CrRecorderStart_RecStartEnable,	"RecStartEnable" },
};

const std::map<std::uint64_t, std::string> map_CrRecorderStatus
{
	{ SDK::CrRecorderStatus::CrRecorderStatus_Idle,	"Idle" },
	{ SDK::CrRecorderStatus::CrRecorderStatus_Ready,	"Ready" },
	{ SDK::CrRecorderStatus::CrRecorderStatus_PreparingToRecord,	"PreparingToRecord" },
	{ SDK::CrRecorderStatus::CrRecorderStatus_Standby,	"Standby" },
	{ SDK::CrRecorderStatus::CrRecorderStatus_Recording,	"Recording" },
	{ SDK::CrRecorderStatus::CrRecorderStatus_Stopping,	"Stopping" },
};

const std::map<std::uint64_t, std::string> map_CrRecorderSaveDestination
{
	{ SDK::CrRecorderSaveDestination::CrRecorderSaveDestination_External,	"External" },
	{ SDK::CrRecorderSaveDestination::CrRecorderSaveDestination_Internal,	"Internal" },
	{ SDK::CrRecorderSaveDestination::CrRecorderSaveDestination_ExternalAndInternal,	"ExternalAndInternal" },
};

const std::map<std::uint64_t, std::string> map_CrFocusOperation
{
	{ SDK::CrFocusOperation::CrFocusOperation_Wide,	"Wide" },
	{ SDK::CrFocusOperation::CrFocusOperation_Stop,	"Stop" },
	{ SDK::CrFocusOperation::CrFocusOperation_Tele,	"Tele" },
};

const std::map<std::uint64_t, std::string> map_CrMovieShootingModeTargetDisplay
{
	{ SDK::CrMovieShootingModeTargetDisplay::CrMovieShootingModeTargetDisplay_BT709,	"BT709" },
	{ SDK::CrMovieShootingModeTargetDisplay::CrMovieShootingModeTargetDisplay_BT2020,	"BT2020" },
};

const std::map<std::uint64_t, std::string> map_CrMovieShootingMode
{
	{ SDK::CrMovieShootingMode::CrMovieShootingMode_Off,	"Off" },
	{ SDK::CrMovieShootingMode::CrMovieShootingMode_CineEI,	"CineEI" },
	{ SDK::CrMovieShootingMode::CrMovieShootingMode_CineEIQuick,	"CineEIQuick" },
	{ SDK::CrMovieShootingMode::CrMovieShootingMode_Custom,	"Custom" },
	{ SDK::CrMovieShootingMode::CrMovieShootingMode_FlexibleISO,	"FlexibleISO" },
};

const std::map<std::uint64_t, std::string> map_CrShutterECSSetting
{
	{ SDK::CrShutterECSSetting::CrShutterECSSetting_OFF,	"OFF" },
	{ SDK::CrShutterECSSetting::CrShutterECSSetting_ON,	"ON" },
};

const std::map<std::uint64_t, std::string> map_CrFocusModeSetting
{
	{ SDK::CrFocusModeSetting::CrFocusModeSetting_Automatic,	"Automatic" },
	{ SDK::CrFocusModeSetting::CrFocusModeSetting_Manual,	"Manual" },
};

const std::map<std::uint64_t, std::string> map_CrFunctionOfRemoteTouchOperation
{
	{ SDK::CrFunctionOfRemoteTouchOperation::CrFunctionOfRemoteTouchOperation_Tracking_AF,	"Tracking_AF" },
	{ SDK::CrFunctionOfRemoteTouchOperation::CrFunctionOfRemoteTouchOperation_Spot_AF,	"Spot_AF" },
	{ SDK::CrFunctionOfRemoteTouchOperation::CrFunctionOfRemoteTouchOperation_AFAreaSelect,	"AFAreaSelect" },
};

const std::map<std::uint64_t, std::string> map_CrRemoteTouchOperationEnableStatus
{
	{ SDK::CrRemoteTouchOperationEnableStatus::CrRemoteTouchOperation_Disable,	"Disable" },
	{ SDK::CrRemoteTouchOperationEnableStatus::CrRemoteTouchOperation_Enable,	"Enable" },
};

const std::map<std::uint64_t, std::string> map_CrCancelRemoteTouchOperationEnableStatus
{
	{ SDK::CrCancelRemoteTouchOperationEnableStatus::CrCancelRemoteTouchOperation_Disable,	"Disable" },
	{ SDK::CrCancelRemoteTouchOperationEnableStatus::CrCancelRemoteTouchOperation_Enable,	"Enable" },
};

const std::map<std::uint64_t, std::string> map_CrLensInformationEnableStatus
{
	{ SDK::CrLensInformationEnableStatus::CrLensInformation_Disable,	"Disable" },
	{ SDK::CrLensInformationEnableStatus::CrLensInformation_Enable,	"Enable" },
};

const std::map<std::uint64_t, std::string> map_CrWhiteBalanceModeSetting
{
	{ SDK::CrWhiteBalanceModeSetting::CrWhiteBalanceModeSetting_Automatic,	"Automatic" },
	{ SDK::CrWhiteBalanceModeSetting::CrWhiteBalanceModeSetting_Manual,	"Manual" },
};

const std::map<std::uint64_t, std::string> map_CrShutterSetting
{
	{ SDK::CrShutterSetting::CrShutterSetting_OFF,	"OFF" },
	{ SDK::CrShutterSetting::CrShutterSetting_ON,	"ON" },
};

const std::map<std::uint64_t, std::string> map_CrShutterMode
{
	{ SDK::CrShutterMode::CrShutterMode_Speed,	"Speed" },
	{ SDK::CrShutterMode::CrShutterMode_Angle,	"Angle" },
};

const std::map<std::uint64_t, std::string> map_CrNDFilter
{
	{ SDK::CrNDFilter::CrNDFilter_OFF,	"OFF" },
	{ SDK::CrNDFilter::CrNDFilter_ON,	"ON" },
};

const std::map<std::uint64_t, std::string> map_CrNDFilterModeSetting
{
	{ SDK::CrNDFilterModeSetting::CrNDFilterModeSetting_Automatic,	"Automatic" },
	{ SDK::CrNDFilterModeSetting::CrNDFilterModeSetting_Manual,	"Manual" },
};

const std::map<std::uint64_t, std::string> map_CrGainUnitSetting
{
	{ SDK::CrGainUnitSetting::CrGainUnitSetting_dB,	"dB" },
	{ SDK::CrGainUnitSetting::CrGainUnitSetting_ISO,	"ISO" },
};

const std::map<std::uint64_t, std::string> map_CrAWB
{
	{ SDK::CrAWB::CrAWB_Up,	"Up" },
	{ SDK::CrAWB::CrAWB_Down,	"Down" },
};

const std::map<std::uint64_t, std::string> map_CrCurrentSceneFileEdited
{
	{ SDK::CrCurrentSceneFileEdited::CrCurrentSceneFileEdited_Unedited,	"Unedited" },
	{ SDK::CrCurrentSceneFileEdited::CrCurrentSceneFileEdited_Edited,	"Edited" },
};

const std::map<std::uint64_t, std::string> map_CrMovieXButton
{
	{ SDK::CrMovieXButton::CrMovieXButton_Up,	"Up" },
	{ SDK::CrMovieXButton::CrMovieXButton_Down,	"Down" },
};

const std::map<std::uint64_t, std::string> map_CrMovieRecButtonToggleEnableStatus
{
	{ SDK::CrMovieRecButtonToggleEnableStatus::CrMovieRecButtonToggle_Disable,	"Disable" },
	{ SDK::CrMovieRecButtonToggleEnableStatus::CrMovieRecButtonToggle_Enable,	"Enable" },
};

const std::map<std::uint64_t, std::string> map_CrFaceEyeDetectionAF
{
	{ SDK::CrFaceEyeDetectionAF::CrFaceEyeDetectionAF_Off,	"Off" },
	{ SDK::CrFaceEyeDetectionAF::CrFaceEyeDetectionAF_FaceEyeOnlyAF,	"FaceEyeOnlyAF" },
	{ SDK::CrFaceEyeDetectionAF::CrFaceEyeDetectionAF_FaceEyePriorityAF,	"FaceEyePriorityAF" },
};

const std::map<std::uint64_t, std::string> map_CrSubjectRecognitionAF
{
	{ SDK::CrSubjectRecognitionAF::CrSubjectRecognitionAF_Off,	"Off" },
	{ SDK::CrSubjectRecognitionAF::CrSubjectRecognitionAF_OnlyAF,	"OnlyAF" },
	{ SDK::CrSubjectRecognitionAF::CrSubjectRecognitionAF_PriorityAF,	"PriorityAF" },
};

const std::map<std::uint64_t, std::string> map_CrAFAssist
{
	{ SDK::CrAFAssist::CrAFAssist_Off,	"Off" },
	{ SDK::CrAFAssist::CrAFAssist_On,	"On" },
};

const std::map<std::uint64_t, std::string> map_CrNDPresetOrVariableSwitchingSetting
{
	{ SDK::CrNDPresetOrVariableSwitchingSetting::CrNDPresetOrVariableSwitchingSetting_Preset,	"Preset" },
	{ SDK::CrNDPresetOrVariableSwitchingSetting::CrNDPresetOrVariableSwitchingSetting_Variable,	"Variable" },
};

const std::map<std::uint64_t, std::string> map_CrNDFilterSwitchingSetting
{
	{ SDK::CrNDFilterSwitchingSetting::CrNDFilterSwitchingSetting_Preset,	"Preset" },
	{ SDK::CrNDFilterSwitchingSetting::CrNDFilterSwitchingSetting_Variable,	"Variable" },
	{ SDK::CrNDFilterSwitchingSetting::CrNDFilterSwitchingSetting_Step,	"Step" },
};

const std::map<std::uint64_t, std::string> map_CrLensInformationType
{
	{ SDK::CrLensInformationType::CrLensInformationType_Undefined,	"Undefined" },
	{ SDK::CrLensInformationType::CrLensInformationType_Feet,	"Feet" },
	{ SDK::CrLensInformationType::CrLensInformationType_Meter,	"Meter" },
};

const std::map<std::uint64_t, std::string> map_CrAssignableButton
{
	{ SDK::CrAssignableButton::CrAssignableButton_Up,	"Up" },
	{ SDK::CrAssignableButton::CrAssignableButton_Down,	"Down" },
};

const std::map<std::uint64_t, std::string> map_CrAssignableButtonIndicator
{
	{ SDK::CrAssignableButtonIndicator::CrAssignableButtonIndicator_Off,	"Off" },
	{ SDK::CrAssignableButtonIndicator::CrAssignableButtonIndicator_On,	"On" },
};

const std::map<std::uint64_t, std::string> map_CrFocusBracketShootingStatus
{
	{ SDK::CrFocusBracketShootingStatus::CrFocusBracket_NotShooting,	"NotShooting" },
	{ SDK::CrFocusBracketShootingStatus::CrFocusBracket_Shooting,	"Shooting" },
};

const std::map<std::uint64_t, std::string> map_CrExtendedInterfaceMode
{
	{ SDK::CrExtendedInterfaceMode::CrExtendedInterfaceMode_Off,	"Off" },
	{ SDK::CrExtendedInterfaceMode::CrExtendedInterfaceMode_On,	"On" },
};

const std::map<std::uint64_t, std::string> map_CrPixelMappingEnableStatus
{
	{ SDK::CrPixelMappingEnableStatus::CrPixelMapping_Disable,	"Disable" },
	{ SDK::CrPixelMappingEnableStatus::CrPixelMapping_Enable,	"Enable" },
};

const std::map<std::uint64_t, std::string> map_CrSQFrameRate
{
	{ SDK::CrSQFrameRate::CrSQFrameRate_Invalid,	"Invalid" },
};

const std::map<std::uint64_t, std::string> map_CrAudioRecording
{
	{ SDK::CrAudioRecording::CrAudioRecording_Off,	"Off" },
	{ SDK::CrAudioRecording::CrAudioRecording_On,	"On" },
};

const std::map<std::uint64_t, std::string> map_CrTimeCodePresetResetEnableStatus
{
	{ SDK::CrTimeCodePresetResetEnableStatus::CrTimeCodePresetReset_Disable,	"Disable" },
	{ SDK::CrTimeCodePresetResetEnableStatus::CrTimeCodePresetReset_Enable,	"Enable" },
};

const std::map<std::uint64_t, std::string> map_CrTimeCodeFormat
{
	{ SDK::CrTimeCodeFormat::CrTimeCodeFormat_DF,	"DF" },
	{ SDK::CrTimeCodeFormat::CrTimeCodeFormat_NDF,	"NDF" },
};

const std::map<std::uint64_t, std::string> map_CrTimeCodeRun
{
	{ SDK::CrTimeCodeRun::CrTimeCodeRun_RecRun,	"RecRun" },
	{ SDK::CrTimeCodeRun::CrTimeCodeRun_FreeRun,	"FreeRun" },
};

const std::map<std::uint64_t, std::string> map_CrTimeCodeMake
{
	{ SDK::CrTimeCodeMake::CrTimeCodeMake_Preset,	"Preset" },
	{ SDK::CrTimeCodeMake::CrTimeCodeMake_Regenerate,	"Regenerate" },
};

const std::map<std::uint64_t, std::string> map_CrUserBitPresetResetEnableStatus
{
	{ SDK::CrUserBitPresetResetEnableStatus::CrUserBitPresetReset_Disable,	"Disable" },
	{ SDK::CrUserBitPresetResetEnableStatus::CrUserBitPresetReset_Enable,	"Enable" },
};

const std::map<std::uint64_t, std::string> map_CrUserBitTimeRec
{
	{ SDK::CrUserBitTimeRec::CrUserBitTimeRec_Off,	"Off" },
	{ SDK::CrUserBitTimeRec::CrUserBitTimeRec_On,	"On" },
};

const std::map<std::uint64_t, std::string> map_CrImageStabilizationSteadyShot
{
	{ SDK::CrImageStabilizationSteadyShot::CrImageStabilizationSteadyShot_Off,	"Off" },
	{ SDK::CrImageStabilizationSteadyShot::CrImageStabilizationSteadyShot_On,	"On" },
};

const std::map<std::uint64_t, std::string> map_CrImageStabilizationSteadyShotMovie
{
	{ SDK::CrImageStabilizationSteadyShotMovie::CrImageStabilizationSteadyShotMovie_Off,	"Off" },
	{ SDK::CrImageStabilizationSteadyShotMovie::CrImageStabilizationSteadyShotMovie_Standard,	"Standard" },
	{ SDK::CrImageStabilizationSteadyShotMovie::CrImageStabilizationSteadyShotMovie_Active,	"Active" },
	{ SDK::CrImageStabilizationSteadyShotMovie::CrImageStabilizationSteadyShotMovie_DynamicActive,	"DynamicActive" },
};

const std::map<std::uint64_t, std::string> map_CrSilentMode
{
	{ SDK::CrSilentMode::CrSilentMode_Off,	"Off" },
	{ SDK::CrSilentMode::CrSilentMode_On,	"On" },
};

const std::map<std::uint64_t, std::string> map_CrSilentModeApertureDriveInAF
{
	{ SDK::CrSilentModeApertureDriveInAF::CrSilentModeApertureDriveInAF_NotTarget,	"NotTarget" },
	{ SDK::CrSilentModeApertureDriveInAF::CrSilentModeApertureDriveInAF_Standard,	"Standard" },
	{ SDK::CrSilentModeApertureDriveInAF::CrSilentModeApertureDriveInAF_SilentPriority,	"SilentPriority" },
};

const std::map<std::uint64_t, std::string> map_CrSilentModeShutterWhenPowerOff
{
	{ SDK::CrSilentModeShutterWhenPowerOff::CrSilentModeShutterWhenPowerOff_NotTarget,	"NotTarget" },
	{ SDK::CrSilentModeShutterWhenPowerOff::CrSilentModeShutterWhenPowerOff_Off,	"Off" },
};

const std::map<std::uint64_t, std::string> map_CrSilentModeAutoPixelMapping
{
	{ SDK::CrSilentModeAutoPixelMapping::CrSilentModeAutoPixelMapping_NotTarget,	"NotTarget" },
	{ SDK::CrSilentModeAutoPixelMapping::CrSilentModeAutoPixelMapping_Off,	"Off" },
};

const std::map<std::uint64_t, std::string> map_CrShutterType
{
	{ SDK::CrShutterType::CrShutterType_Auto,	"Auto" },
	{ SDK::CrShutterType::CrShutterType_MechanicalShutter,	"MechanicalShutter" },
	{ SDK::CrShutterType::CrShutterType_ElectronicShutter,	"ElectronicShutter" },
};

const std::map<std::uint64_t, std::string> map_CrPictureProfile
{
	{ SDK::CrPictureProfile::CrPictureProfile_Off,	"Off" },
	{ SDK::CrPictureProfile::CrPictureProfile_Number1,	"Number1" },
	{ SDK::CrPictureProfile::CrPictureProfile_Number2,	"Number2" },
	{ SDK::CrPictureProfile::CrPictureProfile_Number3,	"Number3" },
	{ SDK::CrPictureProfile::CrPictureProfile_Number4,	"Number4" },
	{ SDK::CrPictureProfile::CrPictureProfile_Number5,	"Number5" },
	{ SDK::CrPictureProfile::CrPictureProfile_Number6,	"Number6" },
	{ SDK::CrPictureProfile::CrPictureProfile_Number7,	"Number7" },
	{ SDK::CrPictureProfile::CrPictureProfile_Number8,	"Number8" },
	{ SDK::CrPictureProfile::CrPictureProfile_Number9,	"Number9" },
	{ SDK::CrPictureProfile::CrPictureProfile_Number10,	"Number10" },
	{ SDK::CrPictureProfile::CrPictureProfile_Number11,	"Number11" },
	{ SDK::CrPictureProfile::CrPictureProfile_LUT_Number1,	"LUT_Number1" },
	{ SDK::CrPictureProfile::CrPictureProfile_LUT_Number2,	"LUT_Number2" },
	{ SDK::CrPictureProfile::CrPictureProfile_LUT_Number3,	"LUT_Number3" },
	{ SDK::CrPictureProfile::CrPictureProfile_LUT_Number4,	"LUT_Number4" },
};

const std::map<std::uint64_t, std::string> map_CrPictureProfileGamma
{
	{ SDK::CrPictureProfileGamma::CrPictureProfileGamma_Movie,	"Movie" },
	{ SDK::CrPictureProfileGamma::CrPictureProfileGamma_Still,	"Still" },
	{ SDK::CrPictureProfileGamma::CrPictureProfileGamma_S_Cinetone,	"S_Cinetone" },
	{ SDK::CrPictureProfileGamma::CrPictureProfileGamma_Cine1,	"Cine1" },
	{ SDK::CrPictureProfileGamma::CrPictureProfileGamma_Cine2,	"Cine2" },
	{ SDK::CrPictureProfileGamma::CrPictureProfileGamma_Cine3,	"Cine3" },
	{ SDK::CrPictureProfileGamma::CrPictureProfileGamma_Cine4,	"Cine4" },
	{ SDK::CrPictureProfileGamma::CrPictureProfileGamma_ITU709,	"ITU709" },
	{ SDK::CrPictureProfileGamma::CrPictureProfileGamma_ITU709_800,	"ITU709_800" },
	{ SDK::CrPictureProfileGamma::CrPictureProfileGamma_S_Log2,	"S_Log2" },
	{ SDK::CrPictureProfileGamma::CrPictureProfileGamma_S_Log3,	"S_Log3" },
	{ SDK::CrPictureProfileGamma::CrPictureProfileGamma_HLG,	"HLG" },
	{ SDK::CrPictureProfileGamma::CrPictureProfileGamma_HLG1,	"HLG1" },
	{ SDK::CrPictureProfileGamma::CrPictureProfileGamma_HLG2,	"HLG2" },
	{ SDK::CrPictureProfileGamma::CrPictureProfileGamma_HLG3,	"HLG3" },
};

const std::map<std::uint64_t, std::string> map_CrPictureProfileBlackGammaRange
{
	{ SDK::CrPictureProfileBlackGammaRange::CrPictureProfileBlackGammaRange_Wide,	"Wide" },
	{ SDK::CrPictureProfileBlackGammaRange::CrPictureProfileBlackGammaRange_Middle,	"Middle" },
	{ SDK::CrPictureProfileBlackGammaRange::CrPictureProfileBlackGammaRange_Narrow,	"Narrow" },
};

const std::map<std::uint64_t, std::string> map_CrPictureProfileKneeMode
{
	{ SDK::CrPictureProfileKneeMode::CrPictureProfileKneeMode_Auto,	"Auto" },
	{ SDK::CrPictureProfileKneeMode::CrPictureProfileKneeMode_Manual,	"Manual" },
};

const std::map<std::uint64_t, std::string> map_CrPictureProfileKneeSetPoint
{
	{ SDK::CrPictureProfileKneeSetPoint::CrPictureProfileKneeSetPoint_Invalid,	"Invalid" },
};

const std::map<std::uint64_t, std::string> map_CrPictureProfileKneeAutoSetSensitivity
{
	{ SDK::CrPictureProfileKneeAutoSetSensitivity::CrPictureProfileKneeAutoSetSensitivity_Low,	"Low" },
	{ SDK::CrPictureProfileKneeAutoSetSensitivity::CrPictureProfileKneeAutoSetSensitivity_Mid,	"Mid" },
	{ SDK::CrPictureProfileKneeAutoSetSensitivity::CrPictureProfileKneeAutoSetSensitivity_High,	"High" },
};

const std::map<std::uint64_t, std::string> map_CrPictureProfileColorMode
{
	{ SDK::CrPictureProfileColorMode::CrPictureProfileColorMode_Movie,	"Movie" },
	{ SDK::CrPictureProfileColorMode::CrPictureProfileColorMode_Still,	"Still" },
	{ SDK::CrPictureProfileColorMode::CrPictureProfileColorMode_S_Cinetone,	"S_Cinetone" },
	{ SDK::CrPictureProfileColorMode::CrPictureProfileColorMode_Cinema,	"Cinema" },
	{ SDK::CrPictureProfileColorMode::CrPictureProfileColorMode_Pro,	"Pro" },
	{ SDK::CrPictureProfileColorMode::CrPictureProfileColorMode_ITU709_Matrix,	"ITU709_Matrix" },
	{ SDK::CrPictureProfileColorMode::CrPictureProfileColorMode_BlackWhite,	"BlackWhite" },
	{ SDK::CrPictureProfileColorMode::CrPictureProfileColorMode_S_Gamut3_Cine,	"S_Gamut3_Cine" },
	{ SDK::CrPictureProfileColorMode::CrPictureProfileColorMode_S_Gamut3,	"S_Gamut3" },
	{ SDK::CrPictureProfileColorMode::CrPictureProfileColorMode_BT_2020,	"BT_2020" },
	{ SDK::CrPictureProfileColorMode::CrPictureProfileColorMode_709,	"709" },
	{ SDK::CrPictureProfileColorMode::CrPictureProfileColorMode_S_Gamut,	"S_Gamut" },
};

const std::map<std::uint64_t, std::string> map_CrPictureProfileDetailAdjustMode
{
	{ SDK::CrPictureProfileDetailAdjustMode::CrPictureProfileDetailAdjustMode_Auto,	"Auto" },
	{ SDK::CrPictureProfileDetailAdjustMode::CrPictureProfileDetailAdjustMode_Manual,	"Manual" },
};

const std::map<std::uint64_t, std::string> map_CrPictureProfileResetEnableStatus
{
	{ SDK::CrPictureProfileResetEnableStatus::CrPictureProfileReset_Disable,	"Disable" },
	{ SDK::CrPictureProfileResetEnableStatus::CrPictureProfileReset_Enable,	"Enable" },
};

const std::map<std::uint64_t, std::string> map_CrCreativeLook
{
	{ SDK::CrCreativeLook::CrCreativeLook_ST,	"ST" },
	{ SDK::CrCreativeLook::CrCreativeLook_PT,	"PT" },
	{ SDK::CrCreativeLook::CrCreativeLook_NT,	"NT" },
	{ SDK::CrCreativeLook::CrCreativeLook_VV,	"VV" },
	{ SDK::CrCreativeLook::CrCreativeLook_VV2,	"VV2" },
	{ SDK::CrCreativeLook::CrCreativeLook_FL,	"FL" },
	{ SDK::CrCreativeLook::CrCreativeLook_IN,	"IN" },
	{ SDK::CrCreativeLook::CrCreativeLook_SH,	"SH" },
	{ SDK::CrCreativeLook::CrCreativeLook_BW,	"BW" },
	{ SDK::CrCreativeLook::CrCreativeLook_SE,	"SE" },
	{ SDK::CrCreativeLook::CrCreativeLook_CustomLookOffset,	"CustomLookOffset" },
};

const std::map<std::uint64_t, std::string> map_CrCreativeLookResetEnableStatus
{
	{ SDK::CrCreativeLookResetEnableStatus::CrCreativeLookReset_Disable,	"Disable" },
	{ SDK::CrCreativeLookResetEnableStatus::CrCreativeLookReset_Enable,	"Enable" },
};

const std::map<std::uint64_t, std::string> map_CrSensorCleaningEnableStatus
{
	{ SDK::CrSensorCleaningEnableStatus::CrSensorCleaning_Disable,	"Disable" },
	{ SDK::CrSensorCleaningEnableStatus::CrSensorCleaning_Enable,	"Enable" },
};

const std::map<std::uint64_t, std::string> map_CrProxyRecordingSetting
{
	{ SDK::CrProxyRecordingSetting::CrProxyRecordingSetting_Invalid,	"Invalid" },
	{ SDK::CrProxyRecordingSetting::CrProxyRecordingSetting_16M_420_10bit,	"16M_420_10bit" },
	{ SDK::CrProxyRecordingSetting::CrProxyRecordingSetting_9M_420_10bit,	"9M_420_10bit" },
	{ SDK::CrProxyRecordingSetting::CrProxyRecordingSetting_6M_420_8bit,	"6M_420_8bit" },
};

const std::map<std::uint64_t, std::string> map_CrDeviceOverheatingState
{
	{ SDK::CrDeviceOverheatingState::CrDeviceOverheatingState_NotOverheating,	"NotOverheating" },
	{ SDK::CrDeviceOverheatingState::CrDeviceOverheatingState_PreOverheating,	"PreOverheating" },
	{ SDK::CrDeviceOverheatingState::CrDeviceOverheatingState_Overheating,	"Overheating" },
};

const std::map<std::uint64_t, std::string> map_CrFunctionOfTouchOperation
{
	{ SDK::CrFunctionOfTouchOperation::CrFunctionOfTouchOperation_Off,	"Off" },
	{ SDK::CrFunctionOfTouchOperation::CrFunctionOfTouchOperation_Shutter,	"Shutter" },
	{ SDK::CrFunctionOfTouchOperation::CrFunctionOfTouchOperation_Focus,	"Focus" },
	{ SDK::CrFunctionOfTouchOperation::CrFunctionOfTouchOperation_Tracking,	"Tracking" },
	{ SDK::CrFunctionOfTouchOperation::CrFunctionOfTouchOperation_AE,	"AE" },
	{ SDK::CrFunctionOfTouchOperation::CrFunctionOfTouchOperation_ShutterAndAEOn,	"ShutterAndAEOn" },
	{ SDK::CrFunctionOfTouchOperation::CrFunctionOfTouchOperation_ShutterAndAEOff,	"ShutterAndAEOff" },
	{ SDK::CrFunctionOfTouchOperation::CrFunctionOfTouchOperation_FocusAndAEOn,	"FocusAndAEOn" },
	{ SDK::CrFunctionOfTouchOperation::CrFunctionOfTouchOperation_FocusAndAEOff,	"FocusAndAEOff" },
	{ SDK::CrFunctionOfTouchOperation::CrFunctionOfTouchOperation_TrackingAndAEOn,	"TrackingAndAEOn" },
	{ SDK::CrFunctionOfTouchOperation::CrFunctionOfTouchOperation_TrackingAndAEOff,	"TrackingAndAEOff" },
};

const std::map<std::uint64_t, std::string> map_CrAFTrackingSensitivity
{
	{ SDK::CrAFTrackingSensitivity::CrAFTrackingSensitivity_1,	"1" },
	{ SDK::CrAFTrackingSensitivity::CrAFTrackingSensitivity_2,	"2" },
	{ SDK::CrAFTrackingSensitivity::CrAFTrackingSensitivity_3,	"3" },
	{ SDK::CrAFTrackingSensitivity::CrAFTrackingSensitivity_4,	"4" },
	{ SDK::CrAFTrackingSensitivity::CrAFTrackingSensitivity_5,	"5" },
};

const std::map<std::uint64_t, std::string> map_CrBaseLookImportOperationEnableStatus
{
	{ SDK::CrBaseLookImportOperationEnableStatus::CrBaseLookImportOperation_Disable,	"Disable" },
	{ SDK::CrBaseLookImportOperationEnableStatus::CrBaseLookImportOperation_Enable,	"Enable" },
};

const std::map<std::uint64_t, std::string> map_CrDeleteUserBaseLook
{
	{ SDK::CrDeleteUserBaseLook::CrDeleteUserBaseLook_Invalid,	"Invalid" },
	{ SDK::CrDeleteUserBaseLook::CrDeleteUserBaseLook_All,	"All" },
};

const std::map<std::uint64_t, std::string> map_CrSelectUserBaseLookToEdit
{
	{ SDK::CrSelectUserBaseLookToEdit::CrSelectUserBaseLookToEdit_Invalid,	"Invalid" },
};

const std::map<std::uint64_t, std::string> map_CrSelectUserBaseLookToSetInPPLUT
{
	{ SDK::CrSelectUserBaseLookToSetInPPLUT::CrSelectUserBaseLookToSetInPPLUT_Invalid,	"Invalid" },
};

const std::map<std::uint64_t, std::string> map_CrUserBaseLookInput
{
	{ SDK::CrUserBaseLookInput::CrUserBaseLookInput_S_Gamut3_SLog3,	"S_Gamut3_SLog3" },
	{ SDK::CrUserBaseLookInput::CrUserBaseLookInput_S_Gamut3_Cine_SLog3,	"S_Gamut3_Cine_SLog3" },
};

const std::map<std::uint64_t, std::string> map_CrBaseLookNumber
{
	{ SDK::CrBaseLookNumber::CrBaseLookNumber_1,	"1" },
	{ SDK::CrBaseLookNumber::CrBaseLookNumber_2,	"2" },
	{ SDK::CrBaseLookNumber::CrBaseLookNumber_3,	"3" },
	{ SDK::CrBaseLookNumber::CrBaseLookNumber_4,	"4" },
	{ SDK::CrBaseLookNumber::CrBaseLookNumber_5,	"5" },
	{ SDK::CrBaseLookNumber::CrBaseLookNumber_6,	"6" },
	{ SDK::CrBaseLookNumber::CrBaseLookNumber_7,	"7" },
	{ SDK::CrBaseLookNumber::CrBaseLookNumber_8,	"8" },
	{ SDK::CrBaseLookNumber::CrBaseLookNumber_9,	"9" },
	{ SDK::CrBaseLookNumber::CrBaseLookNumber_10,	"10" },
	{ SDK::CrBaseLookNumber::CrBaseLookNumber_11,	"11" },
	{ SDK::CrBaseLookNumber::CrBaseLookNumber_12,	"12" },
	{ SDK::CrBaseLookNumber::CrBaseLookNumber_13,	"13" },
	{ SDK::CrBaseLookNumber::CrBaseLookNumber_14,	"14" },
	{ SDK::CrBaseLookNumber::CrBaseLookNumber_15,	"15" },
	{ SDK::CrBaseLookNumber::CrBaseLookNumber_16,	"16" },
};

const std::map<std::uint64_t, std::string> map_CrFlickerLessShooting
{
	{ SDK::CrFlickerLessShooting::CrFlickerLessShooting_Off,	"Off" },
	{ SDK::CrFlickerLessShooting::CrFlickerLessShooting_On,	"On" },
};

const std::map<std::uint64_t, std::string> map_CrAutoReview
{
	{ SDK::CrAutoReview::CrAutoReview_Off,	"Off" },
};

const std::map<std::uint64_t, std::string> map_CrAudioSignals
{
	{ SDK::CrAudioSignals::CrAudioSignals_Off,	"Off" },
	{ SDK::CrAudioSignals::CrAudioSignals_On,	"On" },
	{ SDK::CrAudioSignals::CrAudioSignals_OnShutterOnly,	"OnShutterOnly" },
	{ SDK::CrAudioSignals::CrAudioSignals_OnWithoutShutter,	"OnWithoutShutter" },
};

const std::map<std::uint64_t, std::string> map_CrHDMIResolution
{
	{ SDK::CrHDMIResolution::CrHDMIResolution_4320p_2160p,	"4320p_2160p" },
	{ SDK::CrHDMIResolution::CrHDMIResolution_2160p,	"2160p" },
	{ SDK::CrHDMIResolution::CrHDMIResolution_2160p_1080p,	"2160p_1080p" },
	{ SDK::CrHDMIResolution::CrHDMIResolution_1080p,	"1080p" },
	{ SDK::CrHDMIResolution::CrHDMIResolution_720p,	"720p" },
	{ SDK::CrHDMIResolution::CrHDMIResolution_480p,	"480p" },
	{ SDK::CrHDMIResolution::CrHDMIResolution_576p,	"576p" },
	{ SDK::CrHDMIResolution::CrHDMIResolution_1080i,	"1080i" },
	{ SDK::CrHDMIResolution::CrHDMIResolution_480i,	"480i" },
	{ SDK::CrHDMIResolution::CrHDMIResolution_576i,	"576i" },
	{ SDK::CrHDMIResolution::CrHDMIResolution_Auto,	"Auto" },
};

const std::map<std::uint64_t, std::string> map_CrHDMIOutputRecMediaMovie
{
	{ SDK::CrHDMIOutputRecMediaMovie::CrHDMIOutputRecMediaMovie_Off,	"Off" },
	{ SDK::CrHDMIOutputRecMediaMovie::CrHDMIOutputRecMediaMovie_On,	"On" },
};

const std::map<std::uint64_t, std::string> map_CrHDMIOutput4KSettingMovie
{
	{ SDK::CrHDMIOutput4KSettingMovie::CrHDMIOutput4KSettingMovie_59_94p_10bit,	"59_94p_10bit" },
	{ SDK::CrHDMIOutput4KSettingMovie::CrHDMIOutput4KSettingMovie_50_00p_10bit,	"50_00p_10bit" },
	{ SDK::CrHDMIOutput4KSettingMovie::CrHDMIOutput4KSettingMovie_29_97p_10bit,	"29_97p_10bit" },
	{ SDK::CrHDMIOutput4KSettingMovie::CrHDMIOutput4KSettingMovie_25_00p_10bit,	"25_00p_10bit" },
	{ SDK::CrHDMIOutput4KSettingMovie::CrHDMIOutput4KSettingMovie_24_00p_10bit,	"24_00p_10bit" },
	{ SDK::CrHDMIOutput4KSettingMovie::CrHDMIOutput4KSettingMovie_23_98p_10bit,	"23_98p_10bit" },
	{ SDK::CrHDMIOutput4KSettingMovie::CrHDMIOutput4KSettingMovie_59_94p_8bit,	"59_94p_8bit" },
	{ SDK::CrHDMIOutput4KSettingMovie::CrHDMIOutput4KSettingMovie_50_00p_8bit,	"50_00p_8bit" },
	{ SDK::CrHDMIOutput4KSettingMovie::CrHDMIOutput4KSettingMovie_29_97p_8bit,	"29_97p_8bit" },
	{ SDK::CrHDMIOutput4KSettingMovie::CrHDMIOutput4KSettingMovie_25_00p_8bit,	"25_00p_8bit" },
	{ SDK::CrHDMIOutput4KSettingMovie::CrHDMIOutput4KSettingMovie_23_98p_8bit,	"23_98p_8bit" },
};

const std::map<std::uint64_t, std::string> map_CrHDMIOutputRAWMovie
{
	{ SDK::CrHDMIOutputRAWMovie::CrHDMIOutputRAWMovie_Off,	"Off" },
	{ SDK::CrHDMIOutputRAWMovie::CrHDMIOutputRAWMovie_On,	"On" },
};

const std::map<std::uint64_t, std::string> map_CrHDMIOutputRawSettingMovie
{
	{ SDK::CrHDMIOutputRawSettingMovie::CrHDMIOutputRawSettingMovie_59_94p,	"59_94p" },
	{ SDK::CrHDMIOutputRawSettingMovie::CrHDMIOutputRawSettingMovie_50_00p,	"50_00p" },
	{ SDK::CrHDMIOutputRawSettingMovie::CrHDMIOutputRawSettingMovie_29_97p,	"29_97p" },
	{ SDK::CrHDMIOutputRawSettingMovie::CrHDMIOutputRawSettingMovie_25_00p,	"25_00p" },
	{ SDK::CrHDMIOutputRawSettingMovie::CrHDMIOutputRawSettingMovie_24_00p,	"24_00p" },
	{ SDK::CrHDMIOutputRawSettingMovie::CrHDMIOutputRawSettingMovie_23_98p,	"23_98p" },
};

const std::map<std::uint64_t, std::string> map_CrHDMIOutputTimeCodeMovie
{
	{ SDK::CrHDMIOutputTimeCodeMovie::CrHDMIOutputTimeCodeMovie_Off,	"Off" },
	{ SDK::CrHDMIOutputTimeCodeMovie::CrHDMIOutputTimeCodeMovie_On,	"On" },
};

const std::map<std::uint64_t, std::string> map_CrHDMIOutputRecControlMovie
{
	{ SDK::CrHDMIOutputRecControlMovie::CrHDMIOutputRecControlMovie_Off,	"Off" },
	{ SDK::CrHDMIOutputRecControlMovie::CrHDMIOutputRecControlMovie_On,	"On" },
};

const std::map<std::uint64_t, std::string> map_CrMonitoringOutputDisplayHDMI
{
	{ SDK::CrMonitoringOutputDisplayHDMI::CrMonitoringOutputDisplayHDMI_Off,	"Off" },
	{ SDK::CrMonitoringOutputDisplayHDMI::CrMonitoringOutputDisplayHDMI_On,	"On" },
};

const std::map<std::uint64_t, std::string> map_CrHDMIOutputAudioCH
{
	{ SDK::CrHDMIOutputAudioCH::CrHDMIOutputAudioCH_CH1CH2,	"CH1CH2" },
	{ SDK::CrHDMIOutputAudioCH::CrHDMIOutputAudioCH_CH3CH4,	"CH3CH4" },
};

const std::map<std::uint64_t, std::string> map_CrIntervalRecTimeMovie
{
	{ SDK::CrIntervalRecTimeMovie::CrIntervalRecTimeMovie_1sec,	"1sec" },
	{ SDK::CrIntervalRecTimeMovie::CrIntervalRecTimeMovie_2sec,	"2sec" },
	{ SDK::CrIntervalRecTimeMovie::CrIntervalRecTimeMovie_3sec,	"3sec" },
	{ SDK::CrIntervalRecTimeMovie::CrIntervalRecTimeMovie_4sec,	"4sec" },
	{ SDK::CrIntervalRecTimeMovie::CrIntervalRecTimeMovie_5sec,	"5sec" },
	{ SDK::CrIntervalRecTimeMovie::CrIntervalRecTimeMovie_6sec,	"6sec" },
	{ SDK::CrIntervalRecTimeMovie::CrIntervalRecTimeMovie_7sec,	"7sec" },
	{ SDK::CrIntervalRecTimeMovie::CrIntervalRecTimeMovie_8sec,	"8sec" },
	{ SDK::CrIntervalRecTimeMovie::CrIntervalRecTimeMovie_9sec,	"9sec" },
	{ SDK::CrIntervalRecTimeMovie::CrIntervalRecTimeMovie_10sec,	"10sec" },
	{ SDK::CrIntervalRecTimeMovie::CrIntervalRecTimeMovie_15sec,	"15sec" },
	{ SDK::CrIntervalRecTimeMovie::CrIntervalRecTimeMovie_20sec,	"20sec" },
	{ SDK::CrIntervalRecTimeMovie::CrIntervalRecTimeMovie_30sec,	"30sec" },
	{ SDK::CrIntervalRecTimeMovie::CrIntervalRecTimeMovie_40sec,	"40sec" },
	{ SDK::CrIntervalRecTimeMovie::CrIntervalRecTimeMovie_50sec,	"50sec" },
	{ SDK::CrIntervalRecTimeMovie::CrIntervalRecTimeMovie_1min,	"1min" },
	{ SDK::CrIntervalRecTimeMovie::CrIntervalRecTimeMovie_2min,	"2min" },
	{ SDK::CrIntervalRecTimeMovie::CrIntervalRecTimeMovie_3min,	"3min" },
	{ SDK::CrIntervalRecTimeMovie::CrIntervalRecTimeMovie_4min,	"4min" },
	{ SDK::CrIntervalRecTimeMovie::CrIntervalRecTimeMovie_5min,	"5min" },
	{ SDK::CrIntervalRecTimeMovie::CrIntervalRecTimeMovie_6min,	"6min" },
	{ SDK::CrIntervalRecTimeMovie::CrIntervalRecTimeMovie_7min,	"7min" },
	{ SDK::CrIntervalRecTimeMovie::CrIntervalRecTimeMovie_8min,	"8min" },
	{ SDK::CrIntervalRecTimeMovie::CrIntervalRecTimeMovie_9min,	"9min" },
	{ SDK::CrIntervalRecTimeMovie::CrIntervalRecTimeMovie_10min,	"10min" },
	{ SDK::CrIntervalRecTimeMovie::CrIntervalRecTimeMovie_15min,	"15min" },
	{ SDK::CrIntervalRecTimeMovie::CrIntervalRecTimeMovie_20min,	"20min" },
	{ SDK::CrIntervalRecTimeMovie::CrIntervalRecTimeMovie_30min,	"30min" },
	{ SDK::CrIntervalRecTimeMovie::CrIntervalRecTimeMovie_40min,	"40min" },
	{ SDK::CrIntervalRecTimeMovie::CrIntervalRecTimeMovie_50min,	"50min" },
	{ SDK::CrIntervalRecTimeMovie::CrIntervalRecTimeMovie_1hour,	"1hour" },
	{ SDK::CrIntervalRecTimeMovie::CrIntervalRecTimeMovie_2hour,	"2hour" },
	{ SDK::CrIntervalRecTimeMovie::CrIntervalRecTimeMovie_3hour,	"3hour" },
	{ SDK::CrIntervalRecTimeMovie::CrIntervalRecTimeMovie_4hour,	"4hour" },
	{ SDK::CrIntervalRecTimeMovie::CrIntervalRecTimeMovie_6hour,	"6hour" },
	{ SDK::CrIntervalRecTimeMovie::CrIntervalRecTimeMovie_12hour,	"12hour" },
	{ SDK::CrIntervalRecTimeMovie::CrIntervalRecTimeMovie_24hour,	"24hour" },
};

const std::map<std::uint64_t, std::string> map_CrCameraEframing
{
	{ SDK::CrCameraEframing::CrCameraEframing_Off,	"Off" },
	{ SDK::CrCameraEframing::CrCameraEframing_On,	"On" },
};

const std::map<std::uint64_t, std::string> map_CrEframingScaleAuto
{
	{ SDK::CrEframingScaleAuto::CrEframingScaleAuto_Low,	"Low" },
	{ SDK::CrEframingScaleAuto::CrEframingScaleAuto_Mid,	"Mid" },
	{ SDK::CrEframingScaleAuto::CrEframingScaleAuto_High,	"High" },
};

const std::map<std::uint64_t, std::string> map_CrEframingModeAuto
{
	{ SDK::CrEframingModeAuto::CrEframingModeAuto_Auto,	"Auto" },
	{ SDK::CrEframingModeAuto::CrEframingModeAuto_TouchKick,	"TouchKick" },
	{ SDK::CrEframingModeAuto::CrEframingModeAuto_TimeSequenceA,	"TimeSequenceA" },
	{ SDK::CrEframingModeAuto::CrEframingModeAuto_TimeSequenceB,	"TimeSequenceB" },
};

const std::map<std::uint64_t, std::string> map_CrEframingRecordingImageCrop
{
	{ SDK::CrEframingRecordingImageCrop::CrEframingRecordingImageCrop_Off,	"Off" },
	{ SDK::CrEframingRecordingImageCrop::CrEframingRecordingImageCrop_On,	"On" },
};

const std::map<std::uint64_t, std::string> map_CrEframingHDMICrop
{
	{ SDK::CrEframingHDMICrop::CrEframingHDMICrop_Off,	"Off" },
	{ SDK::CrEframingHDMICrop::CrEframingHDMICrop_On,	"On" },
};

const std::map<std::uint64_t, std::string> map_CrUSBPowerSupply
{
	{ SDK::CrUSBPowerSupply::CrUSBPowerSupply_Off,	"Off" },
	{ SDK::CrUSBPowerSupply::CrUSBPowerSupply_On,	"On" },
};

const std::map<std::uint64_t, std::string> map_CrLongExposureNR
{
	{ SDK::CrLongExposureNR::CrLongExposureNR_Off,	"Off" },
	{ SDK::CrLongExposureNR::CrLongExposureNR_On,	"On" },
};

const std::map<std::uint64_t, std::string> map_CrHighIsoNR
{
	{ SDK::CrHighIsoNR::CrHighIsoNR_Off,	"Off" },
	{ SDK::CrHighIsoNR::CrHighIsoNR_Low,	"Low" },
	{ SDK::CrHighIsoNR::CrHighIsoNR_Normal,	"Normal" },
	{ SDK::CrHighIsoNR::CrHighIsoNR_High,	"High" },
};

const std::map<std::uint64_t, std::string> map_CrHLGStillImage
{
	{ SDK::CrHLGStillImage::CrHLGStillImage_Off,	"Off" },
	{ SDK::CrHLGStillImage::CrHLGStillImage_On,	"On" },
};

const std::map<std::uint64_t, std::string> map_CrColorSpace
{
	{ SDK::CrColorSpace::CrColorSpace_SRGB,	"SRGB" },
	{ SDK::CrColorSpace::CrColorSpace_AdobeRGB,	"AdobeRGB" },
};

const std::map<std::uint64_t, std::string> map_CrBracketOrder
{
	{ SDK::CrBracketOrder::CrBracketOrder_0ToMinusToPlus,	"0ToMinusToPlus" },
	{ SDK::CrBracketOrder::CrBracketOrder_MinusTo0ToPlus,	"MinusTo0ToPlus" },
};

const std::map<std::uint64_t, std::string> map_CrFocusBracketOrder
{
	{ SDK::CrFocusBracketOrder::CrFocusBracketOrder_0ToMinusToPlus,	"0ToMinusToPlus" },
	{ SDK::CrFocusBracketOrder::CrFocusBracketOrder_0ToPlus,	"0ToPlus" },
};

const std::map<std::uint64_t, std::string> map_CrFocusBracketExposureLock1stImg
{
	{ SDK::CrFocusBracketExposureLock1stImg::CrFocusBracketExposureLock1stImg_Off,	"Off" },
	{ SDK::CrFocusBracketExposureLock1stImg::CrFocusBracketExposureLock1stImg_On,	"On" },
};

const std::map<std::uint64_t, std::string> map_CrFocusBracketIntervalUntilNextShot
{
	{ SDK::CrFocusBracketIntervalUntilNextShot::CrFocusBracketIntervalUntilNextShot_Invalid,	"Invalid" },
	{ SDK::CrFocusBracketIntervalUntilNextShot::CrFocusBracketIntervalUntilNextShot_ShortestInterval,	"ShortestInterval" },
};

const std::map<std::uint64_t, std::string> map_CrIntervalRecShootIntervalPriority
{
	{ SDK::CrIntervalRecShootIntervalPriority::CrIntervalRecShootIntervalPriority_Off,	"Off" },
	{ SDK::CrIntervalRecShootIntervalPriority::CrIntervalRecShootIntervalPriority_On,	"On" },
};

const std::map<std::uint64_t, std::string> map_CrIntervalRecAETrackingSensitivity
{
	{ SDK::CrIntervalRecAETrackingSensitivity::CrIntervalRecAETrackingSensitivity_Off,	"Off" },
	{ SDK::CrIntervalRecAETrackingSensitivity::CrIntervalRecAETrackingSensitivity_Low,	"Low" },
	{ SDK::CrIntervalRecAETrackingSensitivity::CrIntervalRecAETrackingSensitivity_Mid,	"Mid" },
	{ SDK::CrIntervalRecAETrackingSensitivity::CrIntervalRecAETrackingSensitivity_High,	"High" },
};

const std::map<std::uint64_t, std::string> map_CrIntervalRecShutterType
{
	{ SDK::CrIntervalRecShutterType::CrIntervalRecShutterType_Auto,	"Auto" },
	{ SDK::CrIntervalRecShutterType::CrIntervalRecShutterType_MechanicalShutter,	"MechanicalShutter" },
	{ SDK::CrIntervalRecShutterType::CrIntervalRecShutterType_ElectronicShutter,	"ElectronicShutter" },
};

const std::map<std::uint64_t, std::string> map_CrHighResolutionShutterSpeedSetting
{
	{ SDK::CrHighResolutionShutterSpeedSetting::CrHighResolutionShutterSpeedSetting_Off,	"Off" },
	{ SDK::CrHighResolutionShutterSpeedSetting::CrHighResolutionShutterSpeedSetting_On,	"On" },
};

const std::map<std::uint64_t, std::string> map_CrHighResolutionShutterSpeed
{
	{ SDK::CrHighResolutionShutterSpeed::CrHighResolutionShutterSpeed_Nothing,	"Nothing" },
};

const std::map<std::uint64_t, std::string> map_CrWindNoiseReduction
{
	{ SDK::CrWindNoiseReduction::CrWindNoiseReduction_Off,	"Off" },
	{ SDK::CrWindNoiseReduction::CrWindNoiseReduction_On,	"On" },
	{ SDK::CrWindNoiseReduction::CrWindNoiseReduction_Auto,	"Auto" },
};

const std::map<std::uint64_t, std::string> map_CrMovieRecordingSelfTimer
{
	{ SDK::CrMovieRecordingSelfTimer::CrMovieRecordingSelfTimer_Off,	"Off" },
	{ SDK::CrMovieRecordingSelfTimer::CrMovieRecordingSelfTimer_On,	"On" },
};

const std::map<std::uint64_t, std::string> map_CrMovieRecordingSelfTimerCountTime
{
	{ SDK::CrMovieRecordingSelfTimerCountTime::CrMovieRecordingSelfTimerCountTime_None,	"None" },
};

const std::map<std::uint64_t, std::string> map_CrMovieRecordingSelfTimerContinuous
{
	{ SDK::CrMovieRecordingSelfTimerContinuous::CrMovieRecordingSelfTimerContinuous_Off,	"Off" },
	{ SDK::CrMovieRecordingSelfTimerContinuous::CrMovieRecordingSelfTimerContinuous_On,	"On" },
};

const std::map<std::uint64_t, std::string> map_CrMovieRecordingSelfTimerStatus
{
	{ SDK::CrMovieRecordingSelfTimerStatus::CrMovieRecordingSelfTimerStatus_Idle,	"Idle" },
	{ SDK::CrMovieRecordingSelfTimerStatus::CrMovieRecordingSelfTimerStatus_CountingDown,	"CountingDown" },
};

const std::map<std::uint64_t, std::string> map_CrBulbTimerSetting
{
	{ SDK::CrBulbTimerSetting::CrBulbTimerSetting_Off,	"Off" },
	{ SDK::CrBulbTimerSetting::CrBulbTimerSetting_On,	"On" },
};

const std::map<std::uint64_t, std::string> map_CrAutoSlowShutter
{
	{ SDK::CrAutoSlowShutter::CrAutoSlowShutter_Off,	"Off" },
	{ SDK::CrAutoSlowShutter::CrAutoSlowShutter_On,	"On" },
};

const std::map<std::uint64_t, std::string> map_CrIsoAutoMinShutterSpeedMode
{
	{ SDK::CrIsoAutoMinShutterSpeedMode::CrIsoAutoMinShutterSpeedMode_Preset,	"Preset" },
	{ SDK::CrIsoAutoMinShutterSpeedMode::CrIsoAutoMinShutterSpeedMode_Manual,	"Manual" },
};

const std::map<std::uint64_t, std::string> map_CrIsoAutoMinShutterSpeedManual
{
	{ SDK::CrIsoAutoMinShutterSpeedManual::CrIsoAutoMinShutterSpeedManual_Invalid,	"Invalid" },
};

const std::map<std::uint64_t, std::string> map_CrIsoAutoMinShutterSpeedPreset
{
	{ SDK::CrIsoAutoMinShutterSpeedPreset::CrIsoAutoMinShutterSpeedPreset_Slower,	"Slower" },
	{ SDK::CrIsoAutoMinShutterSpeedPreset::CrIsoAutoMinShutterSpeedPreset_Slow,	"Slow" },
	{ SDK::CrIsoAutoMinShutterSpeedPreset::CrIsoAutoMinShutterSpeedPreset_Standard,	"Standard" },
	{ SDK::CrIsoAutoMinShutterSpeedPreset::CrIsoAutoMinShutterSpeedPreset_Fast,	"Fast" },
	{ SDK::CrIsoAutoMinShutterSpeedPreset::CrIsoAutoMinShutterSpeedPreset_Faster,	"Faster" },
};

const std::map<std::uint64_t, std::string> map_CrFocusDrivingStatus
{
	{ SDK::CrFocusDrivingStatus::CrFocusDrivingStatus_NotDriving,	"NotDriving" },
	{ SDK::CrFocusDrivingStatus::CrFocusDrivingStatus_Driving,	"Driving" },
};

const std::map<std::uint64_t, std::string> map_CrSoftSkinEffect
{
	{ SDK::CrSoftSkinEffect::CrSoftSkinEffect_Off,	"Off" },
	{ SDK::CrSoftSkinEffect::CrSoftSkinEffect_Low,	"Low" },
	{ SDK::CrSoftSkinEffect::CrSoftSkinEffect_Mid,	"Mid" },
	{ SDK::CrSoftSkinEffect::CrSoftSkinEffect_High,	"High" },
};

const std::map<std::uint64_t, std::string> map_CrPrioritySetInAF
{
	{ SDK::CrPrioritySetInAF::CrPrioritySetInAF_AF,	"AF" },
	{ SDK::CrPrioritySetInAF::CrPrioritySetInAF_Release,	"Release" },
	{ SDK::CrPrioritySetInAF::CrPrioritySetInAF_BalancedEmphasis,	"BalancedEmphasis" },
};

const std::map<std::uint64_t, std::string> map_CrFocusMagnificationTime
{
	{ SDK::CrFocusMagnificationTime::CrFocusMagnificationTime_NoLimit,	"NoLimit" },
};

const std::map<std::uint64_t, std::string> map_CrSubjectRecognitionInAF
{
	{ SDK::CrSubjectRecognitionInAF::CrSubjectRecognitionInAF_Off,	"Off" },
	{ SDK::CrSubjectRecognitionInAF::CrSubjectRecognitionInAF_On,	"On" },
};

const std::map<std::uint64_t, std::string> map_CrRecognitionTarget
{
	{ SDK::CrRecognitionTarget::CrRecognitionTarget_Person,	"Person" },
	{ SDK::CrRecognitionTarget::CrRecognitionTarget_AnimalBird,	"AnimalBird" },
	{ SDK::CrRecognitionTarget::CrRecognitionTarget_Animal,	"Animal" },
	{ SDK::CrRecognitionTarget::CrRecognitionTarget_Bird,	"Bird" },
	{ SDK::CrRecognitionTarget::CrRecognitionTarget_Insect,	"Insect" },
	{ SDK::CrRecognitionTarget::CrRecognitionTarget_CarTrain,	"CarTrain" },
	{ SDK::CrRecognitionTarget::CrRecognitionTarget_Plane,	"Plane" },
};

const std::map<std::uint64_t, std::string> map_CrRightLeftEyeSelect
{
	{ SDK::CrRightLeftEyeSelect::CrRightLeftEyeSelect_Auto,	"Auto" },
	{ SDK::CrRightLeftEyeSelect::CrRightLeftEyeSelect_RightEye,	"RightEye" },
	{ SDK::CrRightLeftEyeSelect::CrRightLeftEyeSelect_LeftEye,	"LeftEye" },
};

const std::map<std::uint64_t, std::string> map_CrSelectFTPServerID
{
	{ SDK::CrSelectFTPServerID::CrSelectFTPServerID_Nothing,	"Nothing" },
};

const std::map<std::uint64_t, std::string> map_CrFTPConnectionStatus
{
	{ SDK::CrFTPConnectionStatus::CrFTPConnectionStatus_Connecting,	"Connecting" },
	{ SDK::CrFTPConnectionStatus::CrFTPConnectionStatus_Connected,	"Connected" },
	{ SDK::CrFTPConnectionStatus::CrFTPConnectionStatus_Connected_ServerError,	"Connected_ServerError" },
	{ SDK::CrFTPConnectionStatus::CrFTPConnectionStatus_ConnectionError,	"ConnectionError" },
};

const std::map<std::uint64_t, std::string> map_CrFTPConnectionErrorInfo
{
	{ SDK::CrFTPConnectionErrorInfo::CrFTPConnectionErrorInfo_Unknown,	"Unknown" },
	{ SDK::CrFTPConnectionErrorInfo::CrFTPConnectionErrorInfo_NoError,	"NoError" },
	{ SDK::CrFTPConnectionErrorInfo::CrFTPConnectionErrorInfo_CameraSystemError,	"CameraSystemError" },
	{ SDK::CrFTPConnectionErrorInfo::CrFTPConnectionErrorInfo_WiFi_HardwareError,	"WiFi_HardwareError" },
	{ SDK::CrFTPConnectionErrorInfo::CrFTPConnectionErrorInfo_WiredLAN_HardwareError,	"WiredLAN_HardwareError" },
	{ SDK::CrFTPConnectionErrorInfo::CrFTPConnectionErrorInfo_AP_NotReg,	"AP_NotReg" },
	{ SDK::CrFTPConnectionErrorInfo::CrFTPConnectionErrorInfo_AP_NotFound,	"AP_NotFound" },
	{ SDK::CrFTPConnectionErrorInfo::CrFTPConnectionErrorInfo_AP_ConnectionError,	"AP_ConnectionError" },
	{ SDK::CrFTPConnectionErrorInfo::CrFTPConnectionErrorInfo_AP_PasswordError,	"AP_PasswordError" },
	{ SDK::CrFTPConnectionErrorInfo::CrFTPConnectionErrorInfo_InvalidKeyError_WEP_StaticIPAddrSettingError,	"InvalidKeyError_WEP_StaticIPAddrSettingError" },
	{ SDK::CrFTPConnectionErrorInfo::CrFTPConnectionErrorInfo_InvalidKeyError_WEP_IPAddrAcquisitionError,	"InvalidKeyError_WEP_IPAddrAcquisitionError" },
	{ SDK::CrFTPConnectionErrorInfo::CrFTPConnectionErrorInfo_DHCP_IPAddrAcquisitionError,	"DHCP_IPAddrAcquisitionError" },
	{ SDK::CrFTPConnectionErrorInfo::CrFTPConnectionErrorInfo_DNS_IPAddrAcquisitionError,	"DNS_IPAddrAcquisitionError" },
	{ SDK::CrFTPConnectionErrorInfo::CrFTPConnectionErrorInfo_AirplaneModeON,	"AirplaneModeON" },
	{ SDK::CrFTPConnectionErrorInfo::CrFTPConnectionErrorInfo_LANCableError,	"LANCableError" },
	{ SDK::CrFTPConnectionErrorInfo::CrFTPConnectionErrorInfo_FTPServerSettingNotSet,	"FTPServerSettingNotSet" },
	{ SDK::CrFTPConnectionErrorInfo::CrFTPConnectionErrorInfo_FTPServerSettingError,	"FTPServerSettingError" },
	{ SDK::CrFTPConnectionErrorInfo::CrFTPConnectionErrorInfo_FTPServerSevered,	"FTPServerSevered" },
	{ SDK::CrFTPConnectionErrorInfo::CrFTPConnectionErrorInfo_CertificateError,	"CertificateError" },
	{ SDK::CrFTPConnectionErrorInfo::CrFTPConnectionErrorInfo_DirectoryCreateError,	"DirectoryCreateError" },
	{ SDK::CrFTPConnectionErrorInfo::CrFTPConnectionErrorInfo_AuthorityError_FTPServerOverCapacity,	"AuthorityError_FTPServerOverCapacity" },
	{ SDK::CrFTPConnectionErrorInfo::CrFTPConnectionErrorInfo_CantRecognizeUSBAdapter,	"CantRecognizeUSBAdapter" },
	{ SDK::CrFTPConnectionErrorInfo::CrFTPConnectionErrorInfo_CantRecognizeUSBDevice,	"CantRecognizeUSBDevice" },
	{ SDK::CrFTPConnectionErrorInfo::CrFTPConnectionErrorInfo_CheckConnectDevice,	"CheckConnectDevice" },
	{ SDK::CrFTPConnectionErrorInfo::CrFTPConnectionErrorInfo_Reconnecting_FailedConnectServer,	"Reconnecting_FailedConnectServer" },
	{ SDK::CrFTPConnectionErrorInfo::CrFTPConnectionErrorInfo_Reconnecting_CantTransfer,	"Reconnecting_CantTransfer" },
};

const std::map<std::uint64_t, std::string> map_CrFTPServerSettingOperationEnableStatus
{
	{ SDK::CrFTPServerSettingOperationEnableStatus::CrFTPServerSettingOperation_Disable,	"Disable" },
	{ SDK::CrFTPServerSettingOperationEnableStatus::CrFTPServerSettingOperation_Enable,	"Enable" },
};

const std::map<std::uint64_t, std::string> map_CrFTPTransferSettingSaveOperationEnableStatus
{
	{ SDK::CrFTPTransferSettingSaveOperationEnableStatus::CrFTPTransferSettingSaveOperation_Disable,	"Disable" },
	{ SDK::CrFTPTransferSettingSaveOperationEnableStatus::CrFTPTransferSettingSaveOperation_Enable,	"Enable" },
};

const std::map<std::uint64_t, std::string> map_CrFTPTransferSettingReadOperationEnableStatus
{
	{ SDK::CrFTPTransferSettingReadOperationEnableStatus::CrFTPTransferSettingReadOperation_Disable,	"Disable" },
	{ SDK::CrFTPTransferSettingReadOperationEnableStatus::CrFTPTransferSettingReadOperation_Enable,	"Enable" },
};

const std::map<std::uint64_t, std::string> map_CrFTPTransferSettingSaveReadState
{
	{ SDK::CrFTPTransferSettingSaveReadState::CrFTPTransferSettingSaveReadState_Idle,	"Idle" },
	{ SDK::CrFTPTransferSettingSaveReadState::CrFTPTransferSettingSaveReadState_Reading,	"Reading" },
};

const std::map<std::uint64_t, std::string> map_CrFTPFunction
{
	{ SDK::CrFTPFunction::CrFTPFunction_Off,	"Off" },
	{ SDK::CrFTPFunction::CrFTPFunction_On,	"On" },
};

const std::map<std::uint64_t, std::string> map_CrFTPAutoTransfer
{
	{ SDK::CrFTPAutoTransfer::CrFTPAutoTransfer_Off,	"Off" },
	{ SDK::CrFTPAutoTransfer::CrFTPAutoTransfer_On,	"On" },
};

const std::map<std::uint64_t, std::string> map_CrFTPAutoTransferTarget
{
	{ SDK::CrFTPAutoTransferTarget::CrFTPAutoTransferTarget_StillOnly,	"StillOnly" },
	{ SDK::CrFTPAutoTransferTarget::CrFTPAutoTransferTarget_MovieOnly,	"MovieOnly" },
	{ SDK::CrFTPAutoTransferTarget::CrFTPAutoTransferTarget_StillAndMovie,	"StillAndMovie" },
};

const std::map<std::uint64_t, std::string> map_CrFTPAutoTransferTargetMovie
{
	{ SDK::CrFTPAutoTransferTargetMovie::CrFTPAutoTransferTargetMovie_All,	"All" },
	{ SDK::CrFTPAutoTransferTargetMovie::CrFTPAutoTransferTargetMovie_OnlyShotMark,	"OnlyShotMark" },
	{ SDK::CrFTPAutoTransferTargetMovie::CrFTPAutoTransferTargetMovie_ProtectOnly,	"ProtectOnly" },
};

const std::map<std::uint64_t, std::string> map_CrFTPTransferTargetStill
{
	{ SDK::CrFTPTransferTargetStill::CrFTPTransferTargetStill_JpegHeifOnly,	"JpegHeifOnly" },
	{ SDK::CrFTPTransferTargetStill::CrFTPTransferTargetStill_RawOnly,	"RawOnly" },
	{ SDK::CrFTPTransferTargetStill::CrFTPTransferTargetStill_RawAndJpegHeif,	"RawAndJpegHeif" },
};

const std::map<std::uint64_t, std::string> map_CrFTPTransferTargetMovie
{
	{ SDK::CrFTPTransferTargetMovie::CrFTPTransferTargetMovie_ProxyOnly,	"ProxyOnly" },
	{ SDK::CrFTPTransferTargetMovie::CrFTPTransferTargetMovie_OriginalOnly,	"OriginalOnly" },
	{ SDK::CrFTPTransferTargetMovie::CrFTPTransferTargetMovie_OriginalAndProxy,	"OriginalAndProxy" },
};

const std::map<std::uint64_t, std::string> map_CrFTPPowerSave
{
	{ SDK::CrFTPPowerSave::CrFTPPowerSave_Off,	"Off" },
	{ SDK::CrFTPPowerSave::CrFTPPowerSave_On,	"On" },
};

const std::map<std::uint64_t, std::string> map_CrFlickerScanStatus
{
	{ SDK::CrFlickerScanStatus::CrFlickerScanStatus_Invalid,	"Invalid" },
	{ SDK::CrFlickerScanStatus::CrFlickerScanStatus_Idle,	"Idle" },
	{ SDK::CrFlickerScanStatus::CrFlickerScanStatus_FlickerScanning,	"FlickerScanning" },
};

const std::map<std::uint64_t, std::string> map_CrFlickerScanEnableStatus
{
	{ SDK::CrFlickerScanEnableStatus::CrFlickerScan_Disable,	"Disable" },
	{ SDK::CrFlickerScanEnableStatus::CrFlickerScan_Enable,	"Enable" },
};

const std::map<std::uint64_t, std::string> map_CrCameraShakeStatus
{
	{ SDK::CrCameraShakeStatus::CrCameraShakeStatus_NoError,	"NoError" },
	{ SDK::CrCameraShakeStatus::CrCameraShakeStatus_Error,	"Error" },
};

const std::map<std::uint64_t, std::string> map_CrUpdateStatus
{
	{ SDK::CrUpdateStatus::CrUpdateStatus_NoError,	"NoError" },
	{ SDK::CrUpdateStatus::CrUpdateStatus_OtherError,	"OtherError" },
	{ SDK::CrUpdateStatus::CrUpdateStatus_NoUpdateFileInMedia,	"NoUpdateFileInMedia" },
	{ SDK::CrUpdateStatus::CrUpdateStatus_FileVersionOlder,	"FileVersionOlder" },
	{ SDK::CrUpdateStatus::CrUpdateStatus_FileDamaged,	"FileDamaged" },
	{ SDK::CrUpdateStatus::CrUpdateStatus_FileInvalidData,	"FileInvalidData" },
	{ SDK::CrUpdateStatus::CrUpdateStatus_FileModelNotMatch,	"FileModelNotMatch" },
	{ SDK::CrUpdateStatus::CrUpdateStatus_FileRegionNotMatch,	"FileRegionNotMatch" },
	{ SDK::CrUpdateStatus::CrUpdateStatus_FileVersionNotMatch,	"FileVersionNotMatch" },
	{ SDK::CrUpdateStatus::CrUpdateStatus_LowBattery,	"LowBattery" },
	{ SDK::CrUpdateStatus::CrUpdateStatus_UnsupportedBattery,	"UnsupportedBattery" },
};

const std::map<std::uint64_t, std::string> map_CrMediaSlotWritingState
{
	{ SDK::CrMediaSlotWritingState::CrMediaSlotWritingState_NotWriting,	"NotWriting" },
	{ SDK::CrMediaSlotWritingState::CrMediaSlotWritingState_ContentsWriting,	"ContentsWriting" },
};

const std::map<std::uint64_t, std::string> map_CrMediaSlotRecordingAvailableType
{
	{ SDK::CrMediaSlotRecordingAvailableType::CrMediaSlotRecordingAvailableType_None,	"None" },
	{ SDK::CrMediaSlotRecordingAvailableType::CrMediaSlotRecordingAvailableType_Main,	"Main" },
	{ SDK::CrMediaSlotRecordingAvailableType::CrMediaSlotRecordingAvailableType_Proxy,	"Proxy" },
	{ SDK::CrMediaSlotRecordingAvailableType::CrMediaSlotRecordingAvailableType_MainAndProxy,	"MainAndProxy" },
};

const std::map<std::uint64_t, std::string> map_CrFTPServerServiceType
{
	{ SDK::CrFTPServerServiceType::CrFTPServerServiceType_Invalid,	"Invalid" },
	{ SDK::CrFTPServerServiceType::CrFTPServerServiceType_FTP,	"FTP" },
};

const std::map<std::uint64_t, std::string> map_CrFTPServerPasswordExists
{
	{ SDK::CrFTPServerPasswordExists::CrFTPServerPassword_NotUse,	"NotUse" },
	{ SDK::CrFTPServerPasswordExists::CrFTPServerPassword_Use,	"Use" },
};

const std::map<std::uint64_t, std::string> map_CrFTPServerPassiveMode
{
	{ SDK::CrFTPServerPassiveMode::CrFTPServerPassiveMode_Invalid,	"Invalid" },
	{ SDK::CrFTPServerPassiveMode::CrFTPServerPassiveMode_Off,	"Off" },
	{ SDK::CrFTPServerPassiveMode::CrFTPServerPassiveMode_On,	"On" },
};

const std::map<std::uint64_t, std::string> map_CrFTPServerUsingSecureProtocol
{
	{ SDK::CrFTPServerUsingSecureProtocol::CrFTPServerUsingSecureProtocol_Invalid,	"Invalid" },
	{ SDK::CrFTPServerUsingSecureProtocol::CrFTPServerUsingSecureProtocol_Off,	"Off" },
	{ SDK::CrFTPServerUsingSecureProtocol::CrFTPServerUsingSecureProtocol_On,	"On" },
	{ SDK::CrFTPServerUsingSecureProtocol::CrFTPServerUsingSecureProtocol_On_FTPS,	"On_FTPS" },
	{ SDK::CrFTPServerUsingSecureProtocol::CrFTPServerUsingSecureProtocol_On_SFTP,	"On_SFTP" },
};

const std::map<std::uint64_t, std::string> map_CrFTPServerDirectoryHierarchyType
{
	{ SDK::CrFTPServerDirectoryHierarchyType::CrFTPServerDirectoryHierarchyType_Invalid,	"Invalid" },
	{ SDK::CrFTPServerDirectoryHierarchyType::CrFTPServerDirectoryHierarchyType_Standard,	"Standard" },
	{ SDK::CrFTPServerDirectoryHierarchyType::CrFTPServerDirectoryHierarchyType_SameAsInCamera,	"SameAsInCamera" },
};

const std::map<std::uint64_t, std::string> map_CrFTPServerSameNameFileOverwriteType
{
	{ SDK::CrFTPServerSameNameFileOverwriteType::CrFTPServerSameNameFileOverwriteType_Invalid,	"Invalid" },
	{ SDK::CrFTPServerSameNameFileOverwriteType::CrFTPServerSameNameFileOverwriteType_Overwrite,	"Overwrite" },
	{ SDK::CrFTPServerSameNameFileOverwriteType::CrFTPServerSameNameFileOverwriteType_NotOverwrite,	"NotOverwrite" },
};

const std::map<std::uint64_t, std::string> map_CrFTPServerRootCertificateErrorSetting
{
	{ SDK::CrFTPServerRootCertificateErrorSetting::CrFTPServerRootCertificateErrorSetting_Invalid,	"Invalid" },
	{ SDK::CrFTPServerRootCertificateErrorSetting::CrFTPServerRootCertificateErrorSetting_Connect,	"Connect" },
	{ SDK::CrFTPServerRootCertificateErrorSetting::CrFTPServerRootCertificateErrorSetting_NotConnect,	"NotConnect" },
};

const std::map<std::uint64_t, std::string> map_CrFTPJobTrimType
{
	{ SDK::CrFTPJobTrimType::CrFTPJobTrimType_NoTrim,	"NoTrim" },
	{ SDK::CrFTPJobTrimType::CrFTPJobTrimType_Trim,	"Trim" },
};

const std::map<std::uint64_t, std::string> map_CrFTPJobSlotId
{
	{ SDK::CrFTPJobSlotId::CrFTPJobSlotId_Invalid,	"Invalid" },
	{ SDK::CrFTPJobSlotId::CrFTPJobSlotId_Slot1,	"Slot1" },
	{ SDK::CrFTPJobSlotId::CrFTPJobSlotId_Slot2,	"Slot2" },
	{ SDK::CrFTPJobSlotId::CrFTPJobSlotId_Slot3,	"Slot3" },
};

const std::map<std::uint64_t, std::string> map_CrFTPJobStatus
{
	{ SDK::CrFTPJobStatus::CrFTPJobStatus_Invalid,	"Invalid" },
	{ SDK::CrFTPJobStatus::CrFTPJobStatus_Waiting,	"Waiting" },
	{ SDK::CrFTPJobStatus::CrFTPJobStatus_Transferring,	"Transferring" },
	{ SDK::CrFTPJobStatus::CrFTPJobStatus_Completed,	"Completed" },
	{ SDK::CrFTPJobStatus::CrFTPJobStatus_Aborted,	"Aborted" },
	{ SDK::CrFTPJobStatus::CrFTPJobStatus_OtherErr,	"OtherErr" },
	{ SDK::CrFTPJobStatus::CrFTPJobStatus_DestAuthFailed,	"DestAuthFailed" },
	{ SDK::CrFTPJobStatus::CrFTPJobStatus_ServerCapacityOver,	"ServerCapacityOver" },
	{ SDK::CrFTPJobStatus::CrFTPJobStatus_FileAccessErr,	"FileAccessErr" },
	{ SDK::CrFTPJobStatus::CrFTPJobStatus_DestCertErr,	"DestCertErr" },
	{ SDK::CrFTPJobStatus::CrFTPJobStatus_MediaAccessErr,	"MediaAccessErr" },
	{ SDK::CrFTPJobStatus::CrFTPJobStatus_DestConnErr,	"DestConnErr" },
	{ SDK::CrFTPJobStatus::CrFTPJobStatus_DestServerErr,	"DestServerErr" },
	{ SDK::CrFTPJobStatus::CrFTPJobStatus_UploadErr,	"UploadErr" },
	{ SDK::CrFTPJobStatus::CrFTPJobStatus_DestCertNotValid,	"DestCertNotValid" },
	{ SDK::CrFTPJobStatus::CrFTPJobStatus_DestCertExpired,	"DestCertExpired" },
	{ SDK::CrFTPJobStatus::CrFTPJobStatus_PASVNotSupport,	"PASVNotSupport" },
	{ SDK::CrFTPJobStatus::CrFTPJobStatus_ChunkTransErr,	"ChunkTransErr" },
};

const std::map<std::uint64_t, std::string> map_CrFTPJobControlType
{
	{ SDK::CrFTPJobControlType::CrFTPJobControlType_Add,	"Add" },
	{ SDK::CrFTPJobControlType::CrFTPJobControlType_Delete,	"Delete" },
	{ SDK::CrFTPJobControlType::CrFTPJobControlType_Suspend,	"Suspend" },
	{ SDK::CrFTPJobControlType::CrFTPJobControlType_Resume,	"Resume" },
};

const std::map<std::uint64_t, std::string> map_CrFTPJobDeleteType
{
	{ SDK::CrFTPJobDeleteType::CrFTPJobDeleteType_Individual,	"Individual" },
	{ SDK::CrFTPJobDeleteType::CrFTPJobDeleteType_All,	"All" },
	{ SDK::CrFTPJobDeleteType::CrFTPJobDeleteType_FinishedAll,	"FinishedAll" },
};

const std::map<std::uint64_t, std::string> map_CrFTPJobCompleteAction
{
	{ SDK::CrFTPJobCompleteAction::CrFTPJobCompleteAction_Invalid,	"Invalid" },
	{ SDK::CrFTPJobCompleteAction::CrFTPJobCompleteAction_NoAction,	"NoAction" },
	{ SDK::CrFTPJobCompleteAction::CrFTPJobCompleteAction_DeleteFile,	"DeleteFile" },
};

const std::map<std::uint64_t, std::string> map_CrFTPJobDeleteAction
{
	{ SDK::CrFTPJobDeleteAction::CrFTPJobDeleteAction_Invalid,	"Invalid" },
	{ SDK::CrFTPJobDeleteAction::CrFTPJobDeleteAction_NoAction,	"NoAction" },
	{ SDK::CrFTPJobDeleteAction::CrFTPJobDeleteAction_DeleteFile,	"DeleteFile" },
};

const std::map<std::uint64_t, std::string> map_CrCameraOperatingMode
{
	{ SDK::CrCameraOperatingMode::CrCameraOperatingMode_Record,	"Record" },
	{ SDK::CrCameraOperatingMode::CrCameraOperatingMode_Playback,	"Playback" },
};

const std::map<std::uint64_t, std::string> map_CrPlaybackViewMode
{
	{ SDK::CrPlaybackViewMode::CrPlaybackViewMode_Playback,	"Playback" },
	{ SDK::CrPlaybackViewMode::CrPlaybackViewMode_Index,	"Index" },
};

const std::map<std::uint64_t, std::string> map_CrMonitoringDeliveringStatus
{
	{ SDK::CrMonitoringDeliveringStatus::CrMonitoringDeliveringStatus_RTSP,	"RTSP" },
	{ SDK::CrMonitoringDeliveringStatus::CrMonitoringDeliveringStatus_VenderProtocol,	"VenderProtocol" },
	{ SDK::CrMonitoringDeliveringStatus::CrMonitoringDeliveringStatus_None,	"None" },
};

const std::map<std::uint64_t, std::string> map_CrMonitoringIsDelivering
{
	{ SDK::CrMonitoringIsDelivering::CrMonitoringIsDelivering_False,	"False" },
	{ SDK::CrMonitoringIsDelivering::CrMonitoringIsDelivering_True,	"True" },
};

const std::map<std::uint64_t, std::string> map_CrMonitoringDeliveryType
{
	{ SDK::CrMonitoringDeliveryType::CrMonitoringDeliveryType_None,	"None" },
	{ SDK::CrMonitoringDeliveryType::CrMonitoringDeliveryType_Jpeg,	"Jpeg" },
};

const std::map<std::uint64_t, std::string> map_CrNDFilterUnitSetting
{
	{ SDK::CrNDFilterUnitSetting::CrNDFilterUnitSetting_OpticalDensity,	"OpticalDensity" },
	{ SDK::CrNDFilterUnitSetting::CrNDFilterUnitSetting_Transmittance,	"Transmittance" },
};

const std::map<std::uint64_t, std::string> map_CrNDFilterOpticalDensityValue
{
	{ SDK::CrNDFilterOpticalDensityValue::CrNDFilterOpticalDensityValue_Nothing,	"Nothing" },
};

const std::map<std::uint64_t, std::string> map_CrTnumber
{
	{ SDK::CrTnumber::CrTnumber_Unknown,	"Unknown" },
	{ SDK::CrTnumber::CrTnumber_Nothing,	"Nothing" },
};

const std::map<std::uint64_t, std::string> map_CrIrisDisplayUnit
{
	{ SDK::CrIrisDisplayUnit::CrIrisDisplayUnit_Auto,	"Auto" },
	{ SDK::CrIrisDisplayUnit::CrIrisDisplayUnit_FLock,	"FLock" },
	{ SDK::CrIrisDisplayUnit::CrIrisDisplayUnit_TLock,	"TLock" },
};

const std::map<std::uint64_t, std::string> map_CrImageStabilizationLevelMovie
{
	{ SDK::CrImageStabilizationLevelMovie::CrImageStabilizationLevelMovie_OFF,	"OFF" },
	{ SDK::CrImageStabilizationLevelMovie::CrImageStabilizationLevelMovie_Low,	"Low" },
	{ SDK::CrImageStabilizationLevelMovie::CrImageStabilizationLevelMovie_High,	"High" },
};

const std::map<std::uint64_t, std::string> map_CrImageStabilizationSteadyShotAdjust
{
	{ SDK::CrImageStabilizationSteadyShotAdjust::CrImageStabilizationSteadyShotAdjust_Automatic,	"Automatic" },
	{ SDK::CrImageStabilizationSteadyShotAdjust::CrImageStabilizationSteadyShotAdjust_Manual,	"Manual" },
};

const std::map<std::uint64_t, std::string> map_CrAudioLevelDisplay
{
	{ SDK::CrAudioLevelDisplay::CrAudioLevelDisplay_Off,	"Off" },
	{ SDK::CrAudioLevelDisplay::CrAudioLevelDisplay_On,	"On" },
};

const std::map<std::uint64_t, std::string> map_CrHDMIOutputColorGamutForRAWOutMovie
{
	{ SDK::CrHDMIOutputColorGamutForRAWOutMovie::CrHDMIOutputColorGamutForRAWOutMovie_S_Gamut3_Cine_SLog3,	"S_Gamut3_Cine_SLog3" },
	{ SDK::CrHDMIOutputColorGamutForRAWOutMovie::CrHDMIOutputColorGamutForRAWOutMovie_S_Gamut3_SLog3,	"S_Gamut3_SLog3" },
};

const std::map<std::uint64_t, std::string> map_CrElectricFrontCurtainShutter
{
	{ SDK::CrElectricFrontCurtainShutter::CrElectricFrontCurtainShutter_Off,	"Off" },
	{ SDK::CrElectricFrontCurtainShutter::CrElectricFrontCurtainShutter_On,	"On" },
};

const std::map<std::uint64_t, std::string> map_CrExtendedShutterSpeed
{
	{ SDK::CrExtendedShutterSpeed::CrExtendedShutterSpeed_Bulb,	"Bulb" },
	{ SDK::CrExtendedShutterSpeed::CrExtendedShutterSpeed_Nothing,	"Nothing" },
};

const std::map<std::uint64_t, std::string> map_CrCameraButtonFunction
{
	{ SDK::CrCameraButtonFunction::CrCameraButtonFunction_UpButton,	"UpButton" },
	{ SDK::CrCameraButtonFunction::CrCameraButtonFunction_DownButton,	"DownButton" },
	{ SDK::CrCameraButtonFunction::CrCameraButtonFunction_LeftButton,	"LeftButton" },
	{ SDK::CrCameraButtonFunction::CrCameraButtonFunction_RightButton,	"RightButton" },
	{ SDK::CrCameraButtonFunction::CrCameraButtonFunction_EnterButton,	"EnterButton" },
	{ SDK::CrCameraButtonFunction::CrCameraButtonFunction_MenuButton,	"MenuButton" },
	{ SDK::CrCameraButtonFunction::CrCameraButtonFunction_MultiSelectorUp,	"MultiSelectorUp" },
	{ SDK::CrCameraButtonFunction::CrCameraButtonFunction_MultiSelectorDown,	"MultiSelectorDown" },
	{ SDK::CrCameraButtonFunction::CrCameraButtonFunction_MultiSelectorLeft,	"MultiSelectorLeft" },
	{ SDK::CrCameraButtonFunction::CrCameraButtonFunction_MultiSelectorRight,	"MultiSelectorRight" },
	{ SDK::CrCameraButtonFunction::CrCameraButtonFunction_MultiSelectorEnter,	"MultiSelectorEnter" },
	{ SDK::CrCameraButtonFunction::CrCameraButtonFunction_MultiSelectorRightUp,	"MultiSelectorRightUp" },
	{ SDK::CrCameraButtonFunction::CrCameraButtonFunction_MultiSelectorRightDown,	"MultiSelectorRightDown" },
	{ SDK::CrCameraButtonFunction::CrCameraButtonFunction_MultiSelectorLeftUp,	"MultiSelectorLeftUp" },
	{ SDK::CrCameraButtonFunction::CrCameraButtonFunction_MultiSelectorLeftDown,	"MultiSelectorLeftDown" },
	{ SDK::CrCameraButtonFunction::CrCameraButtonFunction_FnButton,	"FnButton" },
	{ SDK::CrCameraButtonFunction::CrCameraButtonFunction_PlaybackButton,	"PlaybackButton" },
	{ SDK::CrCameraButtonFunction::CrCameraButtonFunction_DeleteButton,	"DeleteButton" },
	{ SDK::CrCameraButtonFunction::CrCameraButtonFunction_ModeButton,	"ModeButton" },
	{ SDK::CrCameraButtonFunction::CrCameraButtonFunction_C1Button,	"C1Button" },
	{ SDK::CrCameraButtonFunction::CrCameraButtonFunction_C2Button,	"C2Button" },
	{ SDK::CrCameraButtonFunction::CrCameraButtonFunction_C3Button,	"C3Button" },
	{ SDK::CrCameraButtonFunction::CrCameraButtonFunction_C4Button,	"C4Button" },
	{ SDK::CrCameraButtonFunction::CrCameraButtonFunction_C5Button,	"C5Button" },
	{ SDK::CrCameraButtonFunction::CrCameraButtonFunction_C6Button,	"C6Button" },
	{ SDK::CrCameraButtonFunction::CrCameraButtonFunction_MovieButton,	"MovieButton" },
	{ SDK::CrCameraButtonFunction::CrCameraButtonFunction_AELButton,	"AELButton" },
	{ SDK::CrCameraButtonFunction::CrCameraButtonFunction_AFOnButton,	"AFOnButton" },
};

const std::map<std::uint64_t, std::string> map_CrCameraButtonFunctionValue
{
	{ SDK::CrCameraButtonFunctionValue::CrCameraButtonFunctionValue_Up,	"Up" },
	{ SDK::CrCameraButtonFunctionValue::CrCameraButtonFunctionValue_Down,	"Down" },
};

const std::map<std::uint64_t, std::string> map_CrCameraDialFunction
{
	{ SDK::CrCameraDialFunction::CrCameraDialFunction_ControlWheel,	"ControlWheel" },
	{ SDK::CrCameraDialFunction::CrCameraDialFunction_FrontDial,	"FrontDial" },
	{ SDK::CrCameraDialFunction::CrCameraDialFunction_RearDialL,	"RearDialL" },
	{ SDK::CrCameraDialFunction::CrCameraDialFunction_RearDialR,	"RearDialR" },
};

const std::map<std::uint64_t, std::string> map_CrCameraButtonFunctionStatus
{
	{ SDK::CrCameraButtonFunctionStatus::CrCameraButtonFunctionStatus_Idle,	"Idle" },
	{ SDK::CrCameraButtonFunctionStatus::CrCameraButtonFunctionStatus_AnyKeyOn,	"AnyKeyOn" },
};

const std::map<std::uint64_t, std::string> map_CrSynchroterminalForcedOutput
{
	{ SDK::CrSynchroterminalForcedOutput::CrSynchroterminalForcedOutput_Off,	"Off" },
	{ SDK::CrSynchroterminalForcedOutput::CrSynchroterminalForcedOutput_On,	"On" },
};

const std::map<std::uint64_t, std::string> map_CrShutterReleaseTimeLagControl
{
	{ SDK::CrShutterReleaseTimeLagControl::CrShutterReleaseTimeLagControl_Off,	"Off" },
	{ SDK::CrShutterReleaseTimeLagControl::CrShutterReleaseTimeLagControl_On_Stability,	"On_Stability" },
	{ SDK::CrShutterReleaseTimeLagControl::CrShutterReleaseTimeLagControl_On_Fastest,	"On_Fastest" },
};

const std::map<std::uint64_t, std::string> map_CrContinuousShootingSpotBoostStatus
{
	{ SDK::CrContinuousShootingSpotBoostStatus::CrContinuousShootingSpotBoostStatus_NotSpotBoosting,	"NotSpotBoosting" },
	{ SDK::CrContinuousShootingSpotBoostStatus::CrContinuousShootingSpotBoostStatus_SpotBoosting,	"SpotBoosting" },
};

const std::map<std::uint64_t, std::string> map_CrContinuousShootingSpotBoostEnableStatus
{
	{ SDK::CrContinuousShootingSpotBoostEnableStatus::CrContinuousShootingSpotBoost_Disable,	"Disable" },
	{ SDK::CrContinuousShootingSpotBoostEnableStatus::CrContinuousShootingSpotBoost_Enable,	"Enable" },
};

const std::map<std::uint64_t, std::string> map_CrTimeShiftShooting
{
	{ SDK::CrTimeShiftShooting::CrTimeShiftShooting_Off,	"Off" },
	{ SDK::CrTimeShiftShooting::CrTimeShiftShooting_On,	"On" },
};

const std::map<std::uint64_t, std::string> map_CrTimeShiftTriggerSetting
{
	{ SDK::CrTimeShiftTriggerSetting::CrTimeShiftTriggerSetting_S1AndAF,	"S1AndAF" },
	{ SDK::CrTimeShiftTriggerSetting::CrTimeShiftTriggerSetting_S1,	"S1" },
	{ SDK::CrTimeShiftTriggerSetting::CrTimeShiftTriggerSetting_AF,	"AF" },
};

const std::map<std::uint64_t, std::string> map_CrTimeShiftShootingStatus
{
	{ SDK::CrTimeShiftShootingStatus::CrTimeShiftShootingStatus_Idle,	"Idle" },
	{ SDK::CrTimeShiftShootingStatus::CrTimeShiftShootingStatus_TimeShiftShooting,	"TimeShiftShooting" },
	{ SDK::CrTimeShiftShootingStatus::CrTimeShiftShootingStatus_Impossible,	"Impossible" },
	{ SDK::CrTimeShiftShootingStatus::CrTimeShiftShootingStatus_Impossible_TimerShiftOverheating,	"Impossible_TimerShiftOverheating" },
	{ SDK::CrTimeShiftShootingStatus::CrTimeShiftShootingStatus_MainShooting,	"MainShooting" },
};

const std::map<std::uint64_t, std::string> map_CrEmbedLUTFile
{
	{ SDK::CrEmbedLUTFile::CrEmbedLUTFile_Off,	"Off" },
	{ SDK::CrEmbedLUTFile::CrEmbedLUTFile_On,	"On" },
};

const std::map<std::uint64_t, std::string> map_CrAPS_C_S35
{
	{ SDK::CrAPS_C_S35::CrAPS_C_S35_Off,	"C_S35_Off" },
	{ SDK::CrAPS_C_S35::CrAPS_C_S35_On,	"C_S35_On" },
	{ SDK::CrAPS_C_S35::CrAPS_C_S35_Auto,	"C_S35_Auto" },
};

const std::map<std::uint64_t, std::string> map_CrLensCompensationShading
{
	{ SDK::CrLensCompensationShading::CrLensCompensationShading_Off,	"Off" },
	{ SDK::CrLensCompensationShading::CrLensCompensationShading_Auto,	"Auto" },
	{ SDK::CrLensCompensationShading::CrLensCompensationShading_Low,	"Low" },
};

const std::map<std::uint64_t, std::string> map_CrLensCompensationChromaticAberration
{
	{ SDK::CrLensCompensationChromaticAberration::CrLensCompensationChromaticAberration_Off,	"Off" },
	{ SDK::CrLensCompensationChromaticAberration::CrLensCompensationChromaticAberration_Auto,	"Auto" },
};

const std::map<std::uint64_t, std::string> map_CrLensCompensationDistortion
{
	{ SDK::CrLensCompensationDistortion::CrLensCompensationDistortion_Off,	"Off" },
	{ SDK::CrLensCompensationDistortion::CrLensCompensationDistortion_Auto,	"Auto" },
};

const std::map<std::uint64_t, std::string> map_CrLensCompensationBreathing
{
	{ SDK::CrLensCompensationBreathing::CrLensCompensationBreathing_Off,	"Off" },
	{ SDK::CrLensCompensationBreathing::CrLensCompensationBreathing_On,	"On" },
};

const std::map<std::uint64_t, std::string> map_CrRecordingMedia
{
	{ SDK::CrRecordingMedia::CrRecordingMedia_Slot1,	"Slot1" },
	{ SDK::CrRecordingMedia::CrRecordingMedia_Slot2,	"Slot2" },
	{ SDK::CrRecordingMedia::CrRecordingMedia_SimultaneousRecording,	"SimultaneousRecording" },
	{ SDK::CrRecordingMedia::CrRecordingMedia_SortRecording,	"SortRecording" },
};

const std::map<std::uint64_t, std::string> map_CrRecordingMediaMovie
{
	{ SDK::CrRecordingMediaMovie::CrRecordingMediaMovie_Slot1,	"Slot1" },
	{ SDK::CrRecordingMediaMovie::CrRecordingMediaMovie_Slot2,	"Slot2" },
	{ SDK::CrRecordingMediaMovie::CrRecordingMediaMovie_SimultaneousRecording,	"SimultaneousRecording" },
};

const std::map<std::uint64_t, std::string> map_CrAutoSwitchMedia
{
	{ SDK::CrAutoSwitchMedia::CrAutoSwitchMedia_Off,	"Off" },
	{ SDK::CrAutoSwitchMedia::CrAutoSwitchMedia_On,	"On" },
};

const std::map<std::uint64_t, std::string> map_CrRecordingFileNumber
{
	{ SDK::CrRecordingFileNumber::CrRecordingFileNumber_Reset,	"Reset" },
	{ SDK::CrRecordingFileNumber::CrRecordingFileNumber_Series,	"Series" },
};

const std::map<std::uint64_t, std::string> map_CrRecordingFolderFormat
{
	{ SDK::CrRecordingFolderFormat::CrRecordingFolderFormat_Standard,	"Standard" },
	{ SDK::CrRecordingFolderFormat::CrRecordingFolderFormat_Date,	"Date" },
};

const std::map<std::uint64_t, std::string> map_CrCreateNewFolderEnableStatus
{
	{ SDK::CrCreateNewFolderEnableStatus::CrCreateNewFolderEnableStatus_Disable,	"Disable" },
	{ SDK::CrCreateNewFolderEnableStatus::CrCreateNewFolderEnableStatus_Enable,	"Enable" },
};

const std::map<std::uint64_t, std::string> map_CrSelectIPTCMetadata
{
	{ SDK::CrSelectIPTCMetadata::CrSelectIPTCMetadata_Off,	"Off" },
};

const std::map<std::uint64_t, std::string> map_CrWriteCopyrightInfo
{
	{ SDK::CrWriteCopyrightInfo::CrWriteCopyrightInfo_Off,	"Off" },
	{ SDK::CrWriteCopyrightInfo::CrWriteCopyrightInfo_On,	"On" },
};

const std::map<std::uint64_t, std::string> map_CrFocusBracketRecordingFolder
{
	{ SDK::CrFocusBracketRecordingFolder::CrFocusBracketRecordingFolder_CurrentFolder,	"CurrentFolder" },
	{ SDK::CrFocusBracketRecordingFolder::CrFocusBracketRecordingFolder_NewFolder,	"NewFolder" },
};

const std::map<std::uint64_t, std::string> map_CrForcedFileNumberReset
{
	{ SDK::CrForcedFileNumberReset::CrForcedFileNumberReset_Disable,	"Disable" },
	{ SDK::CrForcedFileNumberReset::CrForcedFileNumberReset_Enable,	"Enable" },
};

const std::map<std::uint64_t, std::string> map_CrReleaseWithoutLens
{
	{ SDK::CrReleaseWithoutLens::CrReleaseWithoutLens_Disable,	"Disable" },
	{ SDK::CrReleaseWithoutLens::CrReleaseWithoutLens_Enable,	"Enable" },
};

const std::map<std::uint64_t, std::string> map_CrReleaseWithoutCard
{
	{ SDK::CrReleaseWithoutCard::CrReleaseWithoutCard_Disable,	"Disable" },
	{ SDK::CrReleaseWithoutCard::CrReleaseWithoutCard_Enable,	"Enable" },
};

const std::map<std::uint64_t, std::string> map_CrGridLineDisplay
{
	{ SDK::CrGridLineDisplay::CrGridLineDisplay_Off,	"Off" },
	{ SDK::CrGridLineDisplay::CrGridLineDisplay_On,	"On" },
};

const std::map<std::uint64_t, std::string> map_CrContinuousShootingSpeedInElectricShutter
{
	{ SDK::CrContinuousShootingSpeedInElectricShutter::CrContinuousShootingSpeedInElectricShutter_Invalid,	"Invalid" },
};

const std::map<std::uint64_t, std::string> map_CrFacePriorityInMultiMetering
{
	{ SDK::CrFacePriorityInMultiMetering::CrFacePriorityInMultiMetering_Off,	"Off" },
	{ SDK::CrFacePriorityInMultiMetering::CrFacePriorityInMultiMetering_On,	"On" },
};

const std::map<std::uint64_t, std::string> map_CrPrioritySetInAWB
{
	{ SDK::CrPrioritySetInAWB::CrPrioritySetInAWB_Standard,	"Standard" },
	{ SDK::CrPrioritySetInAWB::CrPrioritySetInAWB_Ambience,	"Ambience" },
	{ SDK::CrPrioritySetInAWB::CrPrioritySetInAWB_White,	"White" },
};

const std::map<std::uint64_t, std::string> map_CrCustomWBSizeSetting
{
	{ SDK::CrCustomWBSizeSetting::CrCustomWBSizeSetting_S,	"S" },
	{ SDK::CrCustomWBSizeSetting::CrCustomWBSizeSetting_M,	"M" },
	{ SDK::CrCustomWBSizeSetting::CrCustomWBSizeSetting_L,	"L" },
};

const std::map<std::uint64_t, std::string> map_CrAFIlluminator
{
	{ SDK::CrAFIlluminator::CrAFIlluminator_Off,	"Off" },
	{ SDK::CrAFIlluminator::CrAFIlluminator_Auto,	"Auto" },
};

const std::map<std::uint64_t, std::string> map_CrApertureDriveInAF
{
	{ SDK::CrApertureDriveInAF::CrApertureDriveInAF_Standard,	"Standard" },
	{ SDK::CrApertureDriveInAF::CrApertureDriveInAF_FocusPriority,	"FocusPriority" },
	{ SDK::CrApertureDriveInAF::CrApertureDriveInAF_SilentPriority,	"SilentPriority" },
};

const std::map<std::uint64_t, std::string> map_CrAFWithShutter
{
	{ SDK::CrAFWithShutter::CrAFWithShutter_Off,	"Off" },
	{ SDK::CrAFWithShutter::CrAFWithShutter_On,	"On" },
};

const std::map<std::uint64_t, std::string> map_CrFullTimeDMF
{
	{ SDK::CrFullTimeDMF::CrFullTimeDMF_Off,	"Off" },
	{ SDK::CrFullTimeDMF::CrFullTimeDMF_On,	"On" },
};

const std::map<std::uint64_t, std::string> map_CrPreAF
{
	{ SDK::CrPreAF::CrPreAF_Off,	"Off" },
	{ SDK::CrPreAF::CrPreAF_On,	"On" },
};

const std::map<std::uint64_t, std::string> map_CrSubjectRecognitionAnimalBirdPriority
{
	{ SDK::CrSubjectRecognitionAnimalBirdPriority::CrSubjectRecognitionAnimalBirdPriority_Auto,	"Auto" },
	{ SDK::CrSubjectRecognitionAnimalBirdPriority::CrSubjectRecognitionAnimalBirdPriority_AnimalPriority,	"AnimalPriority" },
	{ SDK::CrSubjectRecognitionAnimalBirdPriority::CrSubjectRecognitionAnimalBirdPriority_BirdPriority,	"BirdPriority" },
};

const std::map<std::uint64_t, std::string> map_CrSubjectRecognitionAnimalBirdDetectionParts
{
	{ SDK::CrSubjectRecognitionAnimalBirdDetectionParts::CrSubjectRecognitionAnimalBirdDetectionParts_FollowIndividualSetting,	"FollowIndividualSetting" },
	{ SDK::CrSubjectRecognitionAnimalBirdDetectionParts::CrSubjectRecognitionAnimalBirdDetectionParts_EyeHeadBody,	"EyeHeadBody" },
	{ SDK::CrSubjectRecognitionAnimalBirdDetectionParts::CrSubjectRecognitionAnimalBirdDetectionParts_EyeHead,	"EyeHead" },
	{ SDK::CrSubjectRecognitionAnimalBirdDetectionParts::CrSubjectRecognitionAnimalBirdDetectionParts_Eye,	"Eye" },
};

const std::map<std::uint64_t, std::string> map_CrSubjectRecognitionPriorityOnRegisteredFace
{
	{ SDK::CrSubjectRecognitionPriorityOnRegisteredFace::CrSubjectRecognitionPriorityOnRegisteredFace_Off,	"Off" },
	{ SDK::CrSubjectRecognitionPriorityOnRegisteredFace::CrSubjectRecognitionPriorityOnRegisteredFace_On,	"On" },
};

const std::map<std::uint64_t, std::string> map_CrFaceEyeFrameDisplay
{
	{ SDK::CrFaceEyeFrameDisplay::CrFaceEyeFrameDisplay_Off,	"Off" },
	{ SDK::CrFaceEyeFrameDisplay::CrFaceEyeFrameDisplay_On,	"On" },
};

const std::map<std::uint64_t, std::string> map_CrFocusMap
{
	{ SDK::CrFocusMap::CrFocusMap_Off,	"Off" },
	{ SDK::CrFocusMap::CrFocusMap_On,	"On" },
};

const std::map<std::uint64_t, std::string> map_CrAFInFocusMagnifier
{
	{ SDK::CrAFInFocusMagnifier::CrAFInFocusMagnifier_Off,	"Off" },
	{ SDK::CrAFInFocusMagnifier::CrAFInFocusMagnifier_On,	"On" },
};

const std::map<std::uint64_t, std::string> map_CrAFTrackForSpeedChange
{
	{ SDK::CrAFTrackForSpeedChange::CrAFTrackForSpeedChange_Stable,	"Stable" },
	{ SDK::CrAFTrackForSpeedChange::CrAFTrackForSpeedChange_Standard,	"Standard" },
	{ SDK::CrAFTrackForSpeedChange::CrAFTrackForSpeedChange_Responsive,	"Responsive" },
};

const std::map<std::uint64_t, std::string> map_CrPlaySetOfMultiMedia
{
	{ SDK::CrPlaySetOfMultiMedia::CrPlaySetOfMultiMedia_Slot1,	"Slot1" },
	{ SDK::CrPlaySetOfMultiMedia::CrPlaySetOfMultiMedia_Slot2,	"Slot2" },
};

const std::map<std::uint64_t, std::string> map_CrRemoteSaveImageSize
{
	{ SDK::CrRemoteSaveImageSize::CrRemoteSaveImageSize_LargeSize,	"LargeSize" },
	{ SDK::CrRemoteSaveImageSize::CrRemoteSaveImageSize_SmallSize,	"SmallSize" },
};

const std::map<std::uint64_t, std::string> map_CrFTPTransferStillImageQualitySize
{
	{ SDK::CrFTPTransferStillImageQualitySize::CrFTPTransferStillImageQualitySize_Small,	"Small" },
	{ SDK::CrFTPTransferStillImageQualitySize::CrFTPTransferStillImageQualitySize_Large,	"Large" },
};

const std::map<std::uint64_t, std::string> map_CrFTPAutoTransferTargetStill
{
	{ SDK::CrFTPAutoTransferTargetStill::CrFTPAutoTransferTargetStill_All,	"All" },
	{ SDK::CrFTPAutoTransferTargetStill::CrFTPAutoTransferTargetStill_ProtectOnly,	"ProtectOnly" },
};

const std::map<std::uint64_t, std::string> map_CrProtectImageInFTPTransfer
{
	{ SDK::CrProtectImageInFTPTransfer::CrProtectImageInFTPTransfer_Off,	"Off" },
	{ SDK::CrProtectImageInFTPTransfer::CrProtectImageInFTPTransfer_On,	"On" },
};

const std::map<std::uint64_t, std::string> map_CrMonitorBrightnessType
{
	{ SDK::CrMonitorBrightnessType::CrMonitorBrightnessType_Manual,	"Manual" },
	{ SDK::CrMonitorBrightnessType::CrMonitorBrightnessType_SunnyWeather,	"SunnyWeather" },
};

const std::map<std::uint64_t, std::string> map_CrDisplayQualityFinder
{
	{ SDK::CrDisplayQualityFinder::CrDisplayQualityFinder_Standard,	"Standard" },
	{ SDK::CrDisplayQualityFinder::CrDisplayQualityFinder_High,	"High" },
};

const std::map<std::uint64_t, std::string> map_CrTCUBDisplaySetting
{
	{ SDK::CrTCUBDisplaySetting::CrTCUBDisplaySetting_Counter,	"Counter" },
	{ SDK::CrTCUBDisplaySetting::CrTCUBDisplaySetting_TC,	"TC" },
	{ SDK::CrTCUBDisplaySetting::CrTCUBDisplaySetting_UB,	"UB" },
};

const std::map<std::uint64_t, std::string> map_CrGammaDisplayAssist
{
	{ SDK::CrGammaDisplayAssist::CrGammaDisplayAssist_Off,	"Off" },
	{ SDK::CrGammaDisplayAssist::CrGammaDisplayAssist_On,	"On" },
};

const std::map<std::uint64_t, std::string> map_CrGammaDisplayAssistType
{
	{ SDK::CrGammaDisplayAssistType::CrGammaDisplayAssistType_Auto,	"Auto" },
	{ SDK::CrGammaDisplayAssistType::CrGammaDisplayAssistType_SLog2_709_800,	"SLog2_709_800" },
	{ SDK::CrGammaDisplayAssistType::CrGammaDisplayAssistType_SLog3_709_800,	"SLog3_709_800" },
	{ SDK::CrGammaDisplayAssistType::CrGammaDisplayAssistType_HLG_BT2020,	"HLG_BT2020" },
	{ SDK::CrGammaDisplayAssistType::CrGammaDisplayAssistType_HLG_709,	"HLG_709" },
};

const std::map<std::uint64_t, std::string> map_CrAudioSignalsStartEnd
{
	{ SDK::CrAudioSignalsStartEnd::CrAudioSignalsStartEnd_Off,	"Off" },
	{ SDK::CrAudioSignalsStartEnd::CrAudioSignalsStartEnd_On,	"On" },
};

const std::map<std::uint64_t, std::string> map_CrControlForHDMI
{
	{ SDK::CrControlForHDMI::CrControlForHDMI_Off,	"Off" },
	{ SDK::CrControlForHDMI::CrControlForHDMI_On,	"On" },
};

const std::map<std::uint64_t, std::string> map_CrAntidustShutterWhenPowerOff
{
	{ SDK::CrAntidustShutterWhenPowerOff::CrAntidustShutterWhenPowerOff_Off,	"Off" },
	{ SDK::CrAntidustShutterWhenPowerOff::CrAntidustShutterWhenPowerOff_On,	"On" },
};

const std::map<std::uint64_t, std::string> map_CrWakeOnLAN
{
	{ SDK::CrWakeOnLAN::CrWakeOnLAN_Off,	"Off" },
	{ SDK::CrWakeOnLAN::CrWakeOnLAN_On,	"On" },
};

const std::map<std::uint64_t, std::string> map_CrCameraErrorCautionStatus
{
	{ SDK::CrCameraErrorCautionStatus::CrCameraErrorCautionStatus_NoError,	"NoError" },
	{ SDK::CrCameraErrorCautionStatus::CrCameraErrorCautionStatus_Error,	"Error" },
};

const std::map<std::uint64_t, std::string> map_CrSystemErrorCautionStatus
{
	{ SDK::CrSystemErrorCautionStatus::CrSystemErrorCautionStatus_NoError,	"NoError" },
	{ SDK::CrSystemErrorCautionStatus::CrSystemErrorCautionStatus_Error,	"Error" },
};

const std::map<std::uint64_t, std::string> map_CrFlickerLessShootingStatus
{
	{ SDK::CrFlickerLessShootingStatus::CrFlickerLessShootingStatus_NotDetected,	"NotDetected" },
	{ SDK::CrFlickerLessShootingStatus::CrFlickerLessShootingStatus_Detected,	"Detected" },
};

const std::map<std::uint64_t, std::string> map_CrZoomDrivingStatus
{
	{ SDK::CrZoomDrivingStatus::CrZoomDrivingStatus_NotDriving,	"NotDriving" },
	{ SDK::CrZoomDrivingStatus::CrZoomDrivingStatus_Driving,	"Driving" },
};

const std::map<std::uint64_t, std::string> map_CrShootingSelfTimerStatus
{
	{ SDK::CrShootingSelfTimerStatus::CrShootingSelfTimerStatus_Idle,	"Idle" },
	{ SDK::CrShootingSelfTimerStatus::CrShootingSelfTimerStatus_CountingDown,	"CountingDown" },
};

const std::map<std::uint64_t, std::string> map_CrTrackingOnAndAFOnEnableStatus
{
	{ SDK::CrTrackingOnAndAFOnEnableStatus::CrTrackingOnAndAFOnEnableStatus_Disable,	"Disable" },
	{ SDK::CrTrackingOnAndAFOnEnableStatus::CrTrackingOnAndAFOnEnableStatus_Enable,	"Enable" },
};

const std::map<std::uint64_t, std::string> map_CrProgramShiftStatus
{
	{ SDK::CrProgramShiftStatus::CrProgramShiftStatus_Idle,	"Idle" },
	{ SDK::CrProgramShiftStatus::CrProgramShiftStatus_ProgramShift,	"ProgramShift" },
};

const std::map<std::uint64_t, std::string> map_CrSlotNumber
{
	{ SDK::CrSlotNumber::CrSlotNumber_Slot1,	"Slot1" },
	{ SDK::CrSlotNumber::CrSlotNumber_Slot2,	"Slot2" },
};

const std::map<std::uint64_t, std::string> map_CrZoomAndFocusPresetExist
{
	{ SDK::CrZoomAndFocusPresetExist::CrZoomAndFocusPresetExist_False,	"False" },
	{ SDK::CrZoomAndFocusPresetExist::CrZoomAndFocusPresetExist_True,	"True" },
};

const std::map<std::uint64_t, std::string> map_CrZoomAndFocusPresetZoomOnlyEnableStatus
{
	{ SDK::CrZoomAndFocusPresetZoomOnlyEnableStatus::CrZoomAndFocusPresetZoomOnlyEnableStatus_Disable,	"Disable" },
	{ SDK::CrZoomAndFocusPresetZoomOnlyEnableStatus::CrZoomAndFocusPresetZoomOnlyEnableStatus_Enable,	"Enable" },
};

const std::map<std::uint64_t, std::string> map_CrZoomAndFocusPresetZoomOnlyValue
{
	{ SDK::CrZoomAndFocusPresetZoomOnlyValue::CrZoomAndFocusPresetZoomOnlyValue_Off,	"Off" },
	{ SDK::CrZoomAndFocusPresetZoomOnlyValue::CrZoomAndFocusPresetZoomOnlyValue_On,	"On" },
};

