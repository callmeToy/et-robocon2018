#include "SonarMonitor.h"

SonarMonitor::SonarMonitor(SonarSensor sonarSensor_)
: mSonarSensor(sonarSensor_){
    mDistance = 0;
}

void SonarMonitor::sensing(){
    mDistance = mSonarSensor.getDistance();
}

int16_t SonarMonitor::getDistance(){
    return mDistance;
}