#ifndef __TAIL_CONTROLLER_HH
#define __TAIL_CONTROLLER_HH

#include "Motor.h"

class TailController{
    private:
    Motor mTailMotor;

    const float P_GAIN = 2.5F;

    const uint32_t PWM_ABS_MAX = 60;

    public:
    TailController(Motor);
    void control(int32_t);
};
#endif