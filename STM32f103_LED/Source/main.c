#include "stm32f10x.h"
#include "init.h"


	
uint16_t counter = 0;
	
int main()
{
	HardwareInit();

	
	while(1)
	{
		counter = TIM4->CNT;
		if(counter > 24000)
       SET_LED_GREEN;
		else 
       OFF_LED_GREEN;
		
	}

}



