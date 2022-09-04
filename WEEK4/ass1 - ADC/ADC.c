

#include <avr/io.h>

#include "BITMATH.h"
#include "STD_TYPES.h"

#include "GPIO.h"
#include "ADC.h"
#include "ADC_CONFIG.h"


void ADC_voidInit(void)
{
	SET_BIT(ADC_SRA , ADEN) ;		//Enable ADC

	/* AVCC with external capacitor at AREF pin */
	CLEAR_BIT(AD_MUX , REFS1) ;
	SET_BIT(AD_MUX , REFS0) ;

	CLEAR_BIT(AD_MUX , ADLAR) ;
	
	CLEAR_BIT(ADC_SRA , ADATE) ;
	SET_BIT(ADC_SRA , ADIE) ;		//Enable Interrupt
	
	/* PRESCELLER 128 */
	ADCSRA |= 0b111 ;
}


void ADC_u16SelectChannel(u8 channel)
{
	AD_MUX &= ADMUX_ch0 ;
	AD_MUX |= (channel & 0b111) ;
}

u16 ADC_u16GetData()
{
	return ADC_ ;
}

u32 ADC_u32GetVolatage(void)
{	
	u16 Loc_u16ADC = ADC_u16GetData() ;
	
	u32 V_in = (Loc_u16ADC * V_REF) / 1024 ;
	
	return V_in ;
}

void ADC_StartConversion(void)
{
	SET_BIT(ADCSRA , ADSC) ;				//Start the conversion
}
