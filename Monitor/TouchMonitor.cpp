#include "TouchMonitor.h"

TouchMonitor::TouchMonitor(TouchSensor touchSensor_)
: mTouchSensor(touchSensor_){
    mIsTouch = 0;
    mNonDetectCounter = 0;
}

void TouchMonitor::sensing(){
    if(mNonDetectCounter > 0){
        mNonDetectCounter++;
        if(mNonDetectCounter > NON_DETECT_TIME)
            mNonDetectCounter = 0;
    }
    mIsTouch = mTouchSensor.isPressed();
}

bool TouchMonitor::isTouch(){
    if(mIsTouch && mNonDetectCounter==0){
        mNonDetectCounter = 1;
        return true;
    }else
        return false;
}