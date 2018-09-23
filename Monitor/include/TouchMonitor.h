#ifndef __TOUCH_MONITOR_HH
#define __TOUCH_MONITOR_HH

#include "TouchSensor.h"
using namespace ev3api;
#define NON_DETECT_TIME 250
class TouchMonitor{
    private:
    TouchSensor mTouchSensor;
    bool mIsTouch;
    uint16_t mNonDetectCounter;

    public:
    TouchMonitor(TouchSensor);
    void sensing();
    bool isTouch();
};

#endif
