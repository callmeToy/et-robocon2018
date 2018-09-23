#include "TailController.h"

TailController::TailController(Motor motor_)
: mTailMotor(motor_){

}

void TailController::control(uint32_t angle){
    float pwm = (float)((angle - mTailMotor.getCount())*P_GAIN); /* 比例制御 */
    /* PWM出力飽和処理 */
    if (pwm > PWM_ABS_MAX){
        pwm = PWM_ABS_MAX;
    }else if (pwm < -PWM_ABS_MAX){
        pwm = -PWM_ABS_MAX;
    }
    mTailMotor.setPWM(pwm);
}