#include <cassert>
#include <iostream>
#include <string>
#include "SensorStub.h"
#include "WeatherReportTests.h"
#include "ReportGenerator.h"

void WeatherReportTests::TestRainy() {
    SensorStub sensor(72,70,26,52);
    std::string report = ReportGenerator::GetReport(sensor);
    std::cout << report << std::endl;
    assert(report.find("rain") != std::string::npos);
}

void WeatherReportTests::TestHighPrecipitationAndLowWindspeed() {
    SensorStub sensor(72, 70, 26, 25);
    std::string report = ReportGenerator::GetReport(sensor);
    std::cout << report << std::endl;
    assert(report.find("rain") != std::string::npos);
}