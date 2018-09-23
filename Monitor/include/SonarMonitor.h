#ifndef __SONAR_MONITOR_HH
#define __SONAR_MONITOR_HH

#include "SonarSensor.h"
using namespace ev3api;
class SonarMonitor{
    private:
    SonarSensor mSonarSensor;
    int16_t mDistance;
    public:
    SonarMonitor(SonarSensor);

    void sensing();

    int16_t getDistance();
};

#endif
