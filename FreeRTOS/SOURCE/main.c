#include <stdio.h>
#include "FreeRTOS.h"
#include "task.h"
#include "stm32f10x.h"

static void prvSetupHardware(void);

TaskHandle_t myTaskHandle = NULL;

void myTask( void *p)
{
  static 	int dupa = 0;
	
	for(;;)
	{
		GPIOA->BSRR = (1<<5);
		vTaskDelay( 1000 );
		GPIOA->BSRR = (1<<(5+16));
		vTaskDelay( 1000 );
		dupa++;
	}
	//vTaskDelete(1);
}



int main(void)
{

	prvSetupHardware(); //Init hardware function
	
	xTaskCreate( myTask, "task1", 256, NULL, 1, &myTaskHandle);
	vTaskStartScheduler();
	
	while(1);
	
}

static void prvSetupHardware(void)
{

	RCC->APB2ENR = (1<<2);   // Clock for PLL line
	GPIOA->CRL |= ((1<<20) | (1<<21));
  GPIOA->CRL &= ~((1<<22) | (1<<23));
	
}


