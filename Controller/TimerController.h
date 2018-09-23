#ifndef __TIMER_CONTROLLER_HH
#define __TIMER_CONTROLLER_HH
#include "Clock.h"
class TimerController{
    private:
    Clock mClock;
    uint16_t mTimeDuration;
    bool mIsStart;
    
    public:
    TimerController(clock);
    void timerStart(uint16_t);
    bool isStart();
    bool isFinish();
};

#endif