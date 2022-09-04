/*
 *  main.c
 *
 *  Created: 25/8/2022 2:11:59 AM
 *  Author: Salma
 */ 

#define F_CPU 8000000

#include "util/delay.h"

#include <avr/io.h>

#include "BITMATH.h"
#include "STD_TYPES.h"

#include "GPIO.h"
#include "PWM.h"


int main(void)
{
	
    while(1)
    {
		//First Speed
        PWM_init() ;
        PWM_Generate(100) ;
        PWM_start() ;

        _delay_ms(300) ;
        
		//Second Speed
        PWM_init() ;
        PWM_Generate(20) ;
        PWM_start() ;
        
        _delay_ms(300) ;
        
		//Third Speed
        PWM_init() ;
        PWM_Generate(1) ;
        PWM_start() ;
        
        _delay_ms(300) ;
         
    }
}
