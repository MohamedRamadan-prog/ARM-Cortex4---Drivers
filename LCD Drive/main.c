/*
 * main.c
 */
#include "LCD.h"
#include "GPIO.h"
int main(void) {
	GPIO_Init();
	LCD_Init();
	while(1)
	{
		LCD_SetCursPos(0,0);
		LCD_DispChar('b');
	}
	
	return 0;
}
