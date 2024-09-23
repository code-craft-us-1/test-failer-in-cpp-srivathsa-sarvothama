#pragma once
#include <string>
#include "IWeatherSensor.h"

class ReportGenerator 
{
public:
    static std::string GetReport(const IWeatherSensor& sensor);
};
