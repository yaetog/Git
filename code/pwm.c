#include "pwm.h"

void PWM_SetCompare1(uint16_t COmpare)
{
//	TIM_SetCompare1(TIM2,COmpare);
	__HAL_TIM_SetCompare(&htim1,TIM_CHANNEL_1,COmpare);
	
}
void PWM_SetCompare2(uint16_t COmpare)
{
//	TIM_SetCompare2(TIM2,COmpare);
	__HAL_TIM_SetCompare(&htim1,TIM_CHANNEL_2,COmpare);

}
