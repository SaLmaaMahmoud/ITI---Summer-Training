/*
 * TMR.c
 *
 * Created: 25/8/2022 2:11:50 AM
 *  Author: Salma
 */ 

#include <avr/interrupt.h>

#include "BITMATH.h"
#include "STD_TYPES.h"

#include "GPIO.h"
#include "Timer_config.h"
#include "Timer_interface.h"
#include "Timer_private.h"


#define	freq	4

/**************************** Timer 0 ***********************************/
void TMR_voidInitTimer0(prescallar pres , State interupt , Modes Mode)
{
	if (Mode == Normal)
	{
		CLEAR_BIT(TCCR_0 , WGM_00) ;
		CLEAR_BIT(TCCR_0 , WGM_01) ;
	}
	else if (Mode == PWM_PhaseCorrect)
	{
		SET_BIT(TCCR_0 , WGM_00) ;
		CLEAR_BIT(TCCR_0 , WGM_01) ;
	}
	else if (Mode == CTC)
	{
		CLEAR_BIT(TCCR_0 , WGM_00) ;
		SET_BIT(TCCR_0 , WGM_01) ;
		OCR_0 = (F_CPU / (2 * pres * freq)) - 1 ;
	}
	else if (Mode == Fast_PWM)
	{
		SET_BIT(TCCR_0 , WGM_00) ;
		SET_BIT(TCCR_0 , WGM_01) ;
	}

	if (interupt == Enable){
		SET_BIT(TIMSK_ , TIMSK_TOIE0) ;			//Enable Timer interrupt
	}
	
	switch ( pres ){
		case prescallar_1 :
			SET_BIT(TCCR_0 , CS00) ;
			break;
			
		case prescallar_8 :
			SET_BIT(TCCR_0 , CS01) ;
			break;
			
		case prescallar_64 :
			SET_BIT(TCCR_0 , CS00) ;
			SET_BIT(TCCR_0 , CS01) ;
			break;
		
		case prescallar_256 :
			SET_BIT(TCCR_0 , CS02) ;
			break;
			
		case prescallar_1024 :
			SET_BIT(TCCR_0 , CS00) ;
			SET_BIT(TCCR_0 , CS02) ;
				break;
			
		case prescallar_FallinEdge :
			SET_BIT(TCCR_0 , CS01) ;
			SET_BIT(TCCR_0 , CS02) ;
			break;
				
		case prescallar_RisinEdge :
			SET_BIT(TCCR_0 , CS00) ;
			SET_BIT(TCCR_0 , CS01) ;
			SET_BIT(TCCR_0 , CS02) ;
			break;
			
		default:
			break;
	}
}

void TMR_voidSetTimer0Count(u8 value)
{
	TCNT_0 = value ;
}

u8 TMR_u16GetTimer0Count(void)
{
	u8 value = TCNT_0 ;
	
	return value ;
}


/**************************** Timer 1 ***********************************/
void TMR_voidInitTimer1(prescallar pres , State interupt , Modes Mode)
{
	if (Mode == CTC)
	{
		SET_BIT(TCCR_1B , 4) ;
	}
	else{
		TCCR_1B = 0x00 ;
	}
	
	if (interupt == Enable){
		SET_BIT(TIMSK_ , TIMSK_TOIE1) ;			//Enable Timer interrupt
	}
	
	switch ( pres ){
		case prescallar_1 :
			SET_BIT(TCCR_1B , CS10) ;
			break;
		
		case prescallar_8 :
			SET_BIT(TCCR_1B , CS11) ;
			break;
		
		case prescallar_64 :
			SET_BIT(TCCR_1B , CS10) ;
			SET_BIT(TCCR_1B , CS11) ;
			break;
		
		case prescallar_256 :
			SET_BIT(TCCR_1B , CS12) ;
			break;
		
		case prescallar_1024 :
			SET_BIT(TCCR_1B , CS10) ;
			SET_BIT(TCCR_1B , CS12) ;
			break;
		
		case prescallar_FallinEdge :
			SET_BIT(TCCR_1B , CS11) ;
			SET_BIT(TCCR_1B , CS12) ;
			break;
		
		case prescallar_RisinEdge :
			SET_BIT(TCCR_1B , CS10) ;
			SET_BIT(TCCR_1B , CS11) ;
			SET_BIT(TCCR_1B , CS12) ;
			break;
		
		default:
			break;
	}
}

void TMR_voidSetTimer1Count(u8 value)
{
	TCNT_1 = value ;
}

u8 TMR_u16GetTimer1Count(void)
{
	u8 value = TCNT_1 ;
	
	return value ;
}


/**************************** Timer 2 ***********************************/
void TMR_voidInitTimer2(prescallar pres , State interupt , Modes Mode)
{
	if (Mode == CTC)
	{
		SET_BIT(TCCR_2 , 3) ;
	}
	
	if (interupt == Enable){
		SET_BIT(TIMSK_ , TIMSK_TOIE2) ;			//Enable Timer interrupt
	}
	
	switch ( pres ){
		case prescallar_1 :
			SET_BIT(TCCR_2 , CS20) ;
			break;
		
		case prescallar_8 :
			SET_BIT(TCCR_2 , CS21) ;
			break;
		
		case prescallar_64 :
			SET_BIT(TCCR_2 , CS20) ;
			SET_BIT(TCCR_2 , CS21) ;
			break;
		
		case prescallar_256 :
			SET_BIT(TCCR_2 , CS22) ;
			break;
		
		case prescallar_1024 :
			SET_BIT(TCCR_2 , CS20) ;
			SET_BIT(TCCR_2 , CS22) ;
			break;
		
		case prescallar_FallinEdge :
			SET_BIT(TCCR_2 , CS21) ;
			SET_BIT(TCCR_2 , CS22) ;
			break;
		
		case prescallar_RisinEdge :
			SET_BIT(TCCR_2 , CS20) ;
			SET_BIT(TCCR_2 , CS21) ;
			SET_BIT(TCCR_2 , CS22) ;
			break;
		
		default:
			break;
	}
}

void TMR_voidSetTimer2Count(u8 value)
{
	TCNT_2 = value ;
}

u8 TMR_u16GetTimer2Count(void)
{
	u8 value = TCNT_2 ;
	
	return value ;
}
