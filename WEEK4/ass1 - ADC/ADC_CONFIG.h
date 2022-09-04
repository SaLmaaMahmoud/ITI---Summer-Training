
#ifndef ADC_CONFIG_H_
#define ADC_CONFIG_H_

	#define V_REF			5

	/********************  Registers Definition ********************/
	#define AD_MUX		ADMUX
	#define ADC_SRA		ADCSRA
	#define ADC_H		ADCH
	#define ADC_L		ADCH

	#define ADC_		ADC

	#define SFIOR_		SFIOR
	/**************************************************************/

	/************************ PINS Macros ************************/
	/* ADMUX PINS */
	#define REFS1			7
	#define REFS0			6
	#define ADLAR			5
	#define ADMUX_ch0		0b11100000

	/* ADCSRA PINS */
	#define ADEN			7
	#define ADSC			6
	#define ADATE			5
	#define ADIF			4
	#define ADIE			3
	#define ADCSRA_Rst_P	0b11111000
	/*************************************************************/

#endif /* ADC_CONFIG_H_ */
