#include "init.h"


/**************************************
*Init every pheriphelials**************
**************************************/

void HardwareInit(void)
{
   /* PLL line connected to GPIO and TIMER 4  */
   RCC->APB2ENR = (1<<2); //PLL line GPIO
	 RCC->APB1ENR |= RCC_APB1ENR_TIM4EN; //PLL line Timer4
	
	 /* GPIO Init */
   GPIOA->CRL |= ((1<<20) | (1<<21));
   GPIOA->CRL &= ~((1<<22) | (1<<23));

	 /* TIMERS INIT to freq 1/40 Hz, 72 MHz maximum frequency */
	 TIM4->PSC = 60000;	 //Prescaler
   TIM4->ARR = 48000;
	 TIM4->CR1 |= TIM_CR1_CEN; //Enable timer TIM_CR1_DIR
}


