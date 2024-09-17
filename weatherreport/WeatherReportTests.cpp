#include <cassert>
#include <iostream>
#include <string>
#include "SensorStubLowWindSpeedRain.h"
#include "SensorStubStormyRain.h"
#include "WeatherReportTests.h"
#include "ReportGenerator.h"

void WeatherReportTests::TestRainy() {
    SensorStubStormyRain sensor;
    std::string report = ReportGenerator::GetReport(sensor);
    std::cout << report << std::endl;
    assert(report.find("rain") != std::string::npos);
}

void WeatherReportTests::TestHighPrecipitationAndLowWindspeed() {
    SensorStubLowWindSpeedRain sensor;
    std::string report = ReportGenerator::GetReport(sensor);
    std::cout << report << std::endl;
    assert(report.find("rain") != std::string::npos);
}
