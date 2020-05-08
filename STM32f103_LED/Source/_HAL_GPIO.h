#ifndef _HAL_GPIO
#define _HAL_GPIO

#include "stm32f10x.h"

//Port definition
#define PORTA GPIOA
#define PORTB GPIOB
#define PORTC GPIOC
#define PORTD GPIOD
#define PORTE GPIOE
#define PORTF GPIOF
#define PORTG_GPIOG

//Pin mode
#define OUTPUT_MODE              ((uint32_t)0x01)
#define INPUT_MODE               ((uint32_t)0x02)

//INPUT MODE TYPE
#define INPUT_ANALOG             ((uint32_t)0x00)
#define INPUT_FLOATING           ((uint32_t)0x01)
#define INPUT_PU_PD              ((uint32_t)0x02)

//OUTPUT MODE TYPE


// PIN Speed rate

#endif
