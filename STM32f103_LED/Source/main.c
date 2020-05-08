#include "stm32f10x.h"
//PA5 dioda

int main()
{
  RCC->APB2ENR = (1<<2);

  GPIOA->CRL |= ((1<<20) | (1<<21));
  GPIOA->CRL &= ~((1<<22) | (1<<23));
	
	while(1)
	{
		GPIOA->BSRR = (1<<5);
		for(int i = 0; i < 500000; i++);
		GPIOA->BSRR = (1<<(5+16));
		for(int i = 0; i < 500000; i++);
	}

}
