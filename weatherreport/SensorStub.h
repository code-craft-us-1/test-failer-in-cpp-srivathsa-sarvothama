#pragma once
#include "IWeatherSensor.h"

class SensorStub : public IWeatherSensor {

    int m_humidity;
    int m_precipitation;
    int m_temperature;
    int m_windspeed;

public:
    SensorStub(int humidity, int precipitation, int temperature, int windspeed)
        :m_humidity(humidity), m_precipitation(precipitation),m_temperature(temperature), m_windspeed(windspeed){

    }

    int Humidity() const override {
        return m_humidity;
    }

    int Precipitation() const override {
        return m_precipitation;
    }

    double TemperatureInC() const override {
        return m_temperature;
    }

    int WindSpeedKMPH() const override {
        return m_windspeed;
    }
};
