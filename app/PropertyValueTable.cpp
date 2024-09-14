#include <map>
#include <cmath>
#include <sstream>
#include "PropertyValueTable.h"


namespace SDK = SCRSDK;

namespace cli
{

inline double Round(double value, int figure)
{
    bool isNegative = ( value < 0 );
    if (isNegative == true) value = -value;
    double rate = std::pow(10.0, figure);
    long tmp = (long)(value * rate + 0.5);
    value = tmp/rate;
    if (isNegative == true) value = -value;
    return value;
}

std::string format_f_number(std::uint64_t f_number)
{
    std::stringstream ss;
    if ((0x0000 == f_number) || (SDK::CrFnumber_Unknown == f_number)) {
        ss << "--";
    }
    else if(SDK::CrFnumber_Nothing == f_number) {
        // Do nothing
    }
    else {
        auto modValue = static_cast<std::uint16_t>(f_number % 100);
        if (modValue > 0) {
            ss << 'F' << Round((f_number / 100.0), 1);
        }
        else {
            ss << 'F' << f_number / 100;
        }
    }

    return ss.str();
}

std::string format_iso_sensitivity(std::uint64_t iso)
{
    std::stringstream ss;

    std::uint32_t iso_ext = (iso >> 24) & 0x000000F0;  // bit 28-31
    std::uint32_t iso_mode = (iso >> 24) & 0x0000000F; // bit 24-27
    std::uint32_t iso_value = (iso & 0x00FFFFFF);      // bit  0-23

    if (iso_mode == SDK::CrISO_MultiFrameNR) {
        ss << "MultiFrameNR_";
    }
    else if (iso_mode == SDK::CrISO_MultiFrameNR_High) {
        ss << "MultiFrameNR_High_";
    }

    if (iso_value == SDK::CrISO_AUTO) {
        ss << "ISO_AUTO";
    }
    else {
        ss << "ISO_" << iso_value;
    }

    //if (iso_ext == SDK::CrISO_Ext) {
    //    ss << " (EXT)";
    //}

    return ss.str();
}

std::string format_shutter_speed(std::uint64_t shutter_speed)
{
    std::stringstream ss;

    CrInt16u numerator   = static_cast<std::uint16_t>((shutter_speed >> 16) & 0xFFFF);
    CrInt16u denominator = static_cast<std::uint16_t>(shutter_speed & 0xFFFF);

    if (0 == shutter_speed) {
        ss << "Bulb";
    }
    else if (0 == denominator) {
        ss << "error";
    }
    else if (1 == numerator) {
        ss << numerator << '/' << denominator;
    }
    else if (0 == numerator % denominator) {
        ss << (numerator / denominator) << '"';
    }
    else {
        CrInt32 numdivision = numerator / denominator;
        CrInt32 numremainder = numerator % denominator;
        ss << numdivision << '.' << numremainder << '"';
    }
    return ss.str();
}

std::string format_focus_position_value(std::uint64_t value)
{
	std::stringstream ss;
	char dspValue[10];
#if defined (WIN32) || defined(WIN64)
	sprintf_s(dspValue, sizeof(dspValue), "0x%04llX", value);
#else
	snprintf(dspValue, sizeof(dspValue), "0x%04llX", value);
#endif
	ss << dspValue;
	return ss.str();
}

std::string format_shutter_speed_value(std::uint64_t value)
{
	std::stringstream ss;
	CrInt32u numerator = (CrInt32u)(value >> 32);
	CrInt32u denominator = (CrInt32u)(value & 0x0000FFFF);
	ss << numerator << '/' << denominator;
	return ss.str();
}

} // namespace cli
