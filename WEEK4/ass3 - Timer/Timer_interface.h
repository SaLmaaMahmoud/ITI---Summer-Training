#ifndef TIMER_INTERFACE_H_
#define TIMER_INTERFACE_H_

#include "STD_TYPES.h"

/********************** Timer0 Functions ***********************/
void TMR_voidInitTimer0(prescallar pres , State interupt , Modes Mode) ;
void TMR_voidSetTimer0Count(u8 value);
u8 TMR_u16GetTimer0Count(void);
/**************************************************************/


/********************** Timer1 Functions ***********************/
void TMR_voidInitTimer1(prescallar pres , State interupt , Modes Mode) ;
void TMR_voidSetTimer1Count(u8 value);
u8 TMR_u16GetTimer1Count(void);
/**************************************************************/


/********************** Timer2 Functions ***********************/
void TMR_voidInitTimer2(prescallar pres , State interupt , Modes Mode) ;
void TMR_voidSetTimer2Count(u8 value);
u8 TMR_u16GetTimer2Count(void);
/**************************************************************/

#endif 
