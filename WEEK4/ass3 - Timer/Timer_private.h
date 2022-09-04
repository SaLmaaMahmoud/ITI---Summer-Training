#ifndef TIMER_PRIVATE_H_
#define TIMER_PRIVATE_H_

#define SREG		*((volatile u8*)0x5F)	/*AVR STATUS REGISTER*/

/********************** Registers Definition **********************/
#define TCCR_0		TCCR0					/*Timer0 control register*/
#define TCNT_0		TCNT0
#define OCR_0 		OCR0
#define TIMSK_		TIMSK					/*Timer mask*/
#define TIFR_		TIFR

#define TCCR_1A		TCCR1A					/*Timer1 control register A*/
#define TCCR_1B		TCCR1B					/*Timer1 control register B*/
#define TCNT_1		TCNT1

#define TCCR_2		TCCR2					/*Timer2 control register*/
#define TCNT_2		TCNT2
/******************************************************************/

/************************ Registers PINS *************************/
#define TIMSK_TOIE0		0
#define TIMSK_OCIE0		1
#define TIMSK_TOIE1		2
#define TIMSK_OCIE1B	3
#define TIMSK_OCIE1A	4
#define TIMSK_TOIE2		6

#define TIFR_TOV0		0
#define TIFR_OCF0		1
#define TIFR_TOV1		2
#define TIFR_OCF1B		3
#define TIFR_OCF1A		4

#define CS00			0
#define CS01			1
#define CS02			2

#define CS10			0
#define CS11			1
#define CS12			2

#define CS20			0
#define CS21			1
#define CS22			2
/****************************************************************/



#endif 
