#include "TimerController.h"

TimerController::TimerController(Clock clock_)
: mClock(clock_){
    mTimeDuration = 0;
    mIsStart = false;
}

void TimerController::timerStart(uint16_t duration_){
    mIsStart = true;
    mTimeDuration = duration_;
    mClock.reset();
}

bool TimerController::isStart(){
    return mIsStart;
}

bool TimerController::isFinish(){
    if(mTimeDuration <= clock->now()){
        mIsStart = false;
        return true;
    }else{
        return false;
    }
}