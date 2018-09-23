#include "GyroMonitor.h"

GyroMonitor::GyroMonitor(GyroSensor gyroSensor_)
: mGyroSensor(gyroSensor_){
    mAngleV = 0;
}

void GyroMonitor::sensing(){
    mAngleV = mGyroSensor.getAngleVelocity();
}

int16_t GyroMonitor::getAngleV(){
    return mAngleV;
}

void GyroMonitor::setOffset(int16_t offset_){
    mGyroSensor.setOffset(offset_);
}

void GyroMonitor::reset(){
    mGyroSensor.reset();
}