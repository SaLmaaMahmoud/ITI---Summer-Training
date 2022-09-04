/*
 * main.c
 *
 *  Created on: ???/???/????
 *      Author: m2381
 */

#include "STD_TYPES.h"
#include "GPIO.h"
#include <util/delay.h>

//A >>> PORTA
//B >>> PORTB
//C >>> PORTC
//D >>> PORTD

int main(void)
{
	u8 ssd[] = { 0xc0, 0xf9, 0xa4, 0xb0, 0x99, 0x92, 0x82, 0xf8, 0x80, 0x90 } ;
	u8 i = 0 ; //To count first segment
	u8 j = 0 ; //To count second segment
	u8 t ; //For delay

	GPIO_voidSetPortDirection (PORT_A , OUTPUT) ;
	GPIO_voidSetPortDirection (PORT_B , OUTPUT) ;

	GPIO_voidSetPortPinDirection(PORT_C , PIN0 , INPUT) ;
	//DDRC &= ~(1<<0) ;

    while(1)
    {
		//Display first segment
		GPIO_voidSetPortValue(PORT_B , 0x02 ) ;
		GPIO_voidSetPortValue(PORT_A , ssd[i] ) ;
		_delay_ms(5) ;
		//for ( t=0 ; t<100 ; t++ );

		//Display second segment
		GPIO_voidSetPortValue(PORT_B , 0x04 ) ;
		GPIO_voidSetPortValue(PORT_A , ssd[j] ) ;
		_delay_ms(5) ;
		//for ( t=0 ; t<100 ; t++ );

		//To check the push button
        if ( (GPIO_u8GetPortValue( PORT_C ) & 0x01) == 0 ){
			while ( (GPIO_u8GetPortValue( PORT_C ) & 0x01) == 0 ) ;
			i++ ; //Increment the first segment

			if ( (i > 9) && (j == 9) ){
				i = 0 ;
				j = 0 ;
			}//End if

			if ( i > 9  ){
				i = 0 ;
				j++ ; //Increment second segment
			}//End if

			for ( t=0 ; t<200 ; t++ );

		} //End if
    }//End while
}
