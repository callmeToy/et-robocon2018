#ifndef __SONAR_MONITOR_HH
#define __SONAR_MONITOR_HH

#include "SonarSensor.h"

class SonarMonitor{
    private:
    SonarSensor mSonarSensor;
    int16_t mDistance;
    public:
    SonarMonitor(SonarSensor);

    void sensing();

    void getDistance();
};

#endif