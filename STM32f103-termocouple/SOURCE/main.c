/*
* Simple temperature sensor with LCD display
*/

/***********************************************
*headers
************************************************/
#include "stm32f10x.h"
#include "stdint.h"

/************************************************
*global variables
************************************************/

/***********************************************
*function
***********************************************/
void initHardware(void);
void initSPI(void);
void SPIread(uint8_t data);
uint8_t SPIwrite(void);


int main()
{
	initHardware();
	
	while(1)
	{
		
		
		
	}

	return 0;
}

/******************************
*
*******************************/

void initHardware(void)
{
	
	SystemCoreClockUpdate();
	SysTick_Config(SystemCoreClock / 1000);
}

void initSPI(void)
{
	//turn on the clocks
	RCC->APB2ENR |= RCC_APB2ENR_SPI1EN;
	
	//PIN5(SCK)
	GPIOA->CRL |= (GPIO_CRL_MODE5); //MODE to output 50MHz
	GPIOA->CRL &= ~(GPIO_CRL_CNF5_0);
	GPIOA->CRL |=  (GPIO_CRL_CNF5_1); //As a special function
	
	//PIN6(MISO)
	GPIOA->CRL |= (GPIO_CRL_MODE6); //MODE to output 50MHz
	GPIOA->CRL &= ~(GPIO_CRL_CNF6_0);
	GPIOA->CRL |=  (GPIO_CRL_CNF6_1); //As a special function
	
	//PIN7(MOSI)
	GPIOA->CRL |= (GPIO_CRL_MODE7); //MODE to output 50MHz
	GPIOA->CRL &= ~(GPIO_CRL_CNF7_0);
	GPIOA->CRL |= (GPIO_CRL_CNF7_1); //As a special function
	
	//AFIO->MAPR
	
	
}

