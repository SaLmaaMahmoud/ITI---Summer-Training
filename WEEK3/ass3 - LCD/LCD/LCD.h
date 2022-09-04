/*
 * LCD.h
 *
 *  Created on: ???/???/????
 *      Author: m2381
 */

#include "BITMATH.h"
#include "STD_TYPES.h"

#include "GPIO.h"


#ifndef LCD_H_
#define LCD_H_

void LCD_init( void ) ;
void LCD_writeCMD ( u8 CMD ) ;
void LCD_writeChar ( u8 Char ) ;
void LCD_writeCharPosition( u8 row , u8 col , u8 Char ) ;
void LCD_writeString( u8 row , u8 col , const u8* str ) ;


#endif /* LCD_H_ */
