/*
 * main.c
 *
 *  Created on: ???/???/????
 *      Author: m2381
 */

#include <util/delay.h>

#include "STD_TYPES.h"
#include "GPIO.h"

#include "LCD.h"
#include "I2C.h"
#include "EEPROM.h"

#define ADDRESS		0x00

u8 main()
{
	u8 res ;

	GPIO_voidSetPortDirection(PORT_B , OUTPUT) ;			//LCD DATA BUS PINS
	GPIO_voidSetPortPinDirection(PORT_A , PIN0 , OUTPUT) ;	//RS PIN
	GPIO_voidSetPortPinDirection(PORT_A , PIN1 , OUTPUT) ;	//RW PIN
	GPIO_voidSetPortPinDirection(PORT_A , PIN2 , OUTPUT) ;	//E  PIN


	EEPROM_Init() ;

	EEPROM_Write('S' , ADDRESS) ;
	res = EEPROM_Read(ADDRESS) ;

	LCD_init() ;
	LCD_writeChar(res) ;
}
