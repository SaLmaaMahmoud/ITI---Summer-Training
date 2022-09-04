/*
 * main.c
 *
 * Created: 29/8/2022 2:01:20 AM
 *  Author: Salma
 *
 */ 

#include "STD_TYPES.h"
#include "BITMATH.h"

#include "GPIO.h"
#include "UART.h"
#include "LCD.h"


int main(void)
{
	GPIO_voidSetPortDirection(PORT_A , OUTPUT) ;			//LCD DATA BUS PINS
	GPIO_voidSetPortPinDirection(PORT_B , PIN0 , OUTPUT) ;	//RS PIN
	GPIO_voidSetPortPinDirection(PORT_B , PIN1 , OUTPUT) ;	//RW PIN
	GPIO_voidSetPortPinDirection(PORT_B , PIN2 , OUTPUT) ;	//E  PIN
	
	UART_Init( ) ;
	UART_SendChar('s') ;
	
	//UART_Init( ) ;
	u8 res = UART_GetChar() ;

	LCD_init() ;
	LCD_writeChar(res) ;

    while(1)
    {

    }
}
