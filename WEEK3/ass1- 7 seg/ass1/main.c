/*
 * main.c
 *
 *  Created on: ???/???/????
 *      Author: m2381
 */

#include <avr/io.h>
#include <util/delay.h>

int main()
{
	int ssd[] ={0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07, 0x7F, 0x6F};

	int i = 0 ;


	DDRD = 0x0FF ;
	PORTD = 0x0FF ;

	while(1)
		{
			PORTD = ssd[i] ;

			_delay_ms(500) ;

			i++ ;

			if ( (i > 9) ){
				i = 0 ;
			}
		}

}
