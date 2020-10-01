#include "stm32f10x.h"
#include "init.h"
#include "bsp.h"

SysTick->LOAD = RCC_CFGR_MCO_SYSCLK /2U - 1U;