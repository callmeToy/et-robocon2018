#ifndef __GYRO_MONITOR_HH
#define __GYRO_MONITOR_HH

#include "GyroSensor.h"
using namespace ev3api;
class GyroMonitor{
    private:
    GyroSensor mGyroSensor;
    int16_t mAngleV;

    public:
    GyroMonitor(GyroSensor);

    void sensing();

    int16_t getAngleV();

    void setOffset(int16_t);

    void reset();
};


#endif
