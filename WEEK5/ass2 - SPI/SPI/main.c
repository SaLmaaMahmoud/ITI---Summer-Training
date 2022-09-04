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
	spi_init_master() ;

	//SS pin
	GPIO_voidSetPortPinDirection(PORT_B , PIN4 , INPUT) ;
	GPIO_voidSetPortPinValue(PORT_B , PIN4 , 1) ;

	//MOSI
	GPIO_voidSetPortPinDirection(PORT_B , PIN5 , OUTPUT) ;
	
	//CLK
	GPIO_voidSetPortPinDirection(PORT_B , PIN7 , OUTPUT) ;

	GPIO_voidSetPortPinDirection(PORT_B , PIN3 , OUTPUT) ;
	GPIO_voidSetPortPinValue(PORT_B , PIN3 , 1) ;

	while(1)
	{
		_delay_ms(20) ;
		GPIO_voidSetPortPinValue(PORT_B , PIN3 , 0) ;
		spi_transfer_data('a') ;
		GPIO_voidSetPortPinValue(PORT_B , PIN3 , 1) ;
	}
}
