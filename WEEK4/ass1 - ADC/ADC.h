
#ifndef ADC_H_
#define ADC_H_



	/************************* FUNCTIONS *************************/
	void ADC_voidInit(void) ;
	void ADC_u16SelectChannel(u8 channel) ;
	u16 ADC_u16GetData() ;
	u32 ADC_u32GetVolatage(void) ;
	void ADC_StartConversion(void) ;

#endif /* ADC_H_ */
