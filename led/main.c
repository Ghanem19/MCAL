/*
 * main.c
 *
 *  Created on: Dec 3, 2019
 *      Author: eng-m
 */

#include "led.h"
#include "softwareDelay.h"

int main(void)
{

	gpioUpperNibbleDirection(GPIOC,OUTPUT);

	while(1)
    {
		gpioUpperNibbleToggle(GPIOC);
		SwDelay_ms(100);



    }
}
