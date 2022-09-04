/*
 *  PWM.c
 *
 *  Created: 25/8/2022 2:16:12 AM
 *  Author: Salma
 */ 

#include <avr/io.h>

#include "BITMATH.h"
#include "STD_TYPES.h"

#include "GPIO.h"
#include "PWM.h"

void PWM_init(void)
{
	GPIO_voidSetPortPinDirection(PORT_B , PIN3 , OUTPUT) ;
	
	//Setting PWM Mode
	SET_BIT(TCCR_0 , T0_WGM00) ;
	SET_BIT(TCCR_0 , T0_WGM00) ;
	
	//Setting Non-Inverted Mode
	SET_BIT(TCCR_0 , T0_COM01) ;
}

void PWM_start(void)
{
	//Prescallar = 64
	SET_BIT(TCCR_0 , CS00) ;
	SET_BIT(TCCR_0 , CS01) ;
}

void PWM_Generate(u16 Duty_Cycle)
{
	//Setting OCR0 Value
	OCR_0 = ((Duty_Cycle * 256) / 100) - 1 ;
}
