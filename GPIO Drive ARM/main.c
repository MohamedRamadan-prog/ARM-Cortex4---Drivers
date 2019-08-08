/*
 * main.c
 */
#include "GPIO.h"
#include "GPIO_Cfg.h"

int main(void) {

	GPIO_Init();

	while (1)
	{
		uint8_t  Data1 ;
		uint8_t Data2;
		GPIO_Read(1,&Data1);
		GPIO_Read(2,&Data2);

		if (Data1 == 0x00)
		{
		GPIO_Write (0,0xff);
		}

		if (Data2 == 0x00)
		{
		GPIO_Write (0,0x00);
		}
	}
	return 0;
}
