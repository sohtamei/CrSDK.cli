#ifndef PROPERTYVALUETABLE_H
#define PROPERTYVALUETABLE_H

#include <cstdint>
#include <vector>
#include <map>
#include "CRSDK/CrDeviceProperty.h"

namespace cli
{
struct PropertyValue
{
	int writable; // -1:Initial, 0:false, 1:true
	const std::string tag;
	const std::map<std::uint64_t, std::string>* mapEnum;
	std::string (*const formatFunc)(std::uint64_t val);

	int readable;
	SCRSDK::CrDataType dataType;
	std::int64_t current;
	std::vector<std::int64_t> possible;
	bool old;
};

struct PropertyValueString
{
	int writable; // -1:Initial, 0:false, 1:true
	const std::string tag;

	int readable;
	SCRSDK::CrDataType dataType;
	std::string current;
	bool old;
};

//std::string format_number(std::uint32_t value);

std::string format_f_number(std::uint64_t f_number);
std::string format_iso_sensitivity(std::uint64_t iso);
std::string format_shutter_speed(std::uint64_t shutter_speed);
std::string format_focus_position_value(std::uint64_t value);
std::string format_shutter_speed_value(std::uint64_t value);

} // namespace cli

#endif // !PROPERTYVALUETABLE_H
