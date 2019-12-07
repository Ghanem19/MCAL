/*
 * main.c
 *
 *  Created on: Dec 6, 2019
 *
 */


#include "pushButton.h"
#include "softwareDelay.h"

int main(void)
{

	pushButton_Init(BTN_0);
	gpioPortDirection(GPIOA,OUTPUT);
	En_buttonStatus_t state;
	while(1)
    {
		pushButton_Update();
		state = pushButton_GetStatus(BTN_0);
		switch(state ){
	 	case Pressed :
	 		gpioPortWrite(GPIOA,0x01);
	 		break;
	 	case Released:
	 		gpioPortWrite(GPIOA,0x02);
	 	   break;
	 	case Prereleased:
	 		 gpioPortWrite(GPIOA,0x10);
	 		SwDelay_ms(1000);
	 	   break;
	 	case Prepressed:
	 		 gpioPortWrite(GPIOA,0x20);
	 		SwDelay_ms(1000);

	 	}


    }
}
