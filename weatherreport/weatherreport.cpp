#include <cassert>
#include <iostream>
#include <ostream>
#include <string>

#include "IWeatherSensor.h"

#include "WeatherReportTests.h"

int main() {
    WeatherReportTests::TestRainy();
    WeatherReportTests::TestHighPrecipitationAndLowWindspeed();
    return 0;
}
