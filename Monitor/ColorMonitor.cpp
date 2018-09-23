#include "ColorMonitor.h"

ColorMonitor::ColorMonitor(ColorSensor colorSensor_)
: mColorSensor(colorSensor_){
    mAmbient = 0;
    mBrightness = 0;
}

void ColorMonitor::sensing(){
    mAmbient = mColorSensor.getAmbient;
    mBrightness = mColorSensor.getBrightness();
    mColorID = mColorSensor.getColorNumber();
}

uint8_t ColorMonitor::getAmbient(){
    return mAmbient;
}

int8_t ColorMonitor::getBrightness(){
    return mBrightness;
}

colorid_t ColorMonitor::getColorID(){
    return mColorID;
}