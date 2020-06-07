#ifndef init
#define init

#include "stm32f10x.h"

//PA5 dioda
#define SET_LED_GREEN 		GPIOA->BSRR = (1<<5)
#define OFF_LED_GREEN     GPIOA->BSRR = (1<<(5+16))

void HardwareInit(void);

#endif

