/*
 * main.c
 *
 * Created: 29/8/2022 2:01:20 AM
 *  Author: Salma
 *
 */ 

#include <util/delay.h>

#include "STD_TYPES.h"
#include "BITMATH.h"

#include "GPIO.h"
#include "SPI.h"




int main(void)
{
	GPIO_voidSetPortPinDirection(PORT_A , PIN0 , OUTPUT) ;
	//GPIO_voidSetPortPinValue(PORT_A , PIN0 , 0) ;


	u8 data ;

	spi_init_slave() ;

	//SS pin
	GPIO_voidSetPortPinDirection(PORT_B , PIN4 , INPUT) ;
	GPIO_voidSetPortPinValue(PORT_B , PIN4 , 1) ;

	//MOSI
	GPIO_voidSetPortPinDirection(PORT_B , PIN5 , INPUT) ;

	GPIO_voidSetPortPinDirection(PORT_B , PIN6 , OUTPUT) ;

	//CLK
	GPIO_voidSetPortPinDirection(PORT_B , PIN7 , INPUT) ;

	GPIO_voidSetPortPinDirection(PORT_B , PIN3 , OUTPUT) ;
	GPIO_voidSetPortPinValue(PORT_B , PIN3 , 1) ;



	while(1)
	{
		data = spi_transfer_data(11) ;
		//GPIO_voidSetPortPinValue(PORT_B , PIN5 , 0) ;
		//_delay_ms(100) ;
		if (data == 'a'){
			GPIO_voidSetPortPinValue(PORT_A , PIN0 , 1) ;
		}
	}
}
