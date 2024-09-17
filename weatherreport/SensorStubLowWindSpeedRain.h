#pragma once
#include "IWeatherSensor.h"

class SensorStubLowWindSpeedRain : public IWeatherSensor {
    int Humidity() const override {
        return 72;
    }

    int Precipitation() const override {
        return 70;
    }

    double TemperatureInC() const override {
        return 26;
    }

    int WindSpeedKMPH() const override {
        return 25;
    }
};