/*
 * PWM.h
 *
 * Created: 2/3/2021 2:16:29 AM
 *  Author: Salma
 */ 


#ifndef PWM_H_
#define PWM_H_

/********************** Registers Definition **********************/
#define TCCR_0		TCCR0
#define TCNT_0		TCNT0
#define OCR_0 		OCR0
#define TIMSK_		TIMSK
#define TIFR_		TIFR

#define TCCR_1A		TCCR1A
#define TCCR_1B		TCCR1B
#define TCNT_1		TCNT1

/******************************************************************/

/************************ Registers PINS *************************/
#define T0_WGM01		3
#define T0_COM00		4
#define T0_COM01		5
#define T0_WGM00		6

#define TIMSK_TOIE0		0
#define TIMSK_OCIE0		1
#define TIMSK_TOIE1		2
#define TIMSK_OCIE1B	3
#define TIMSK_OCIE1A	4

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
/****************************************************************/

/************************ PWM Functions *************************/
void PWM_init(void) ;
void PWM_start(void) ;
void PWM_Generate(u16 Duty_Cycle) ;
/****************************************************************/

#endif /* PWM_H_ */