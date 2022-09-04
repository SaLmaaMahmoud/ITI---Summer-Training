/*
 * main.c
 *
 *  Created on: ???/???/????
 *      Author: m2381
 */

#include <avr/io.h>
#include <util/delay.h>
#include "LCD.h"
#include "GPIO.h"


int main()
{
	u8 i = 0 ;

	GPIO_voidSetPortDirection(PORT_C , OUTPUT) ;			//LCD DATA BUS PINS
	GPIO_voidSetPortPinDirection(PORT_B , PIN0 , OUTPUT) ;	//RS PIN
	GPIO_voidSetPortPinDirection(PORT_B , PIN1 , OUTPUT) ;	//RW PIN
	GPIO_voidSetPortPinDirection(PORT_B , PIN2 , OUTPUT) ;	//E  PIN

	LCD_init( ) ;

	while(1)
	{
		LCD_writeString(0 , i , "Salma") ;
		_delay_ms(10) ;
		LCD_init( ) ;

		i++ ;

		if ( i > 16 )
		{
			i = 0 ;
		}
	}
}
