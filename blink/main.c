#include "stm8s_gpio.h"

/* Function prototypes */
void Delay(uint16_t);

main()
{
	GPIO_Init(GPIOB, GPIO_PIN_5, GPIO_MODE_OUT_PP_LOW_FAST);
	while (1){
			GPIO_WriteReverse(GPIOB,GPIO_PIN_5);
			Delay(0xFFFF);
	}
}
void Delay(uint16_t nCount)
{
  while (nCount != 0)
  {
    nCount--;
  }
}

void assert_failed(){
	
	while(1);
}