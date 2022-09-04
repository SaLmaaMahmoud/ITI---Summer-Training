#ifndef TIMER_CONFIG_H_
#define TIMER_CONFIG_H_


/********************** Prescaller Modes ***********************/
typedef enum {
	prescallar_1	,
	prescallar_8	,
	prescallar_64	,
	prescallar_256	,
	prescallar_1024	,
	prescallar_FallinEdge ,
	prescallar_RisinEdge ,
} prescallar ;
/****************************************************************/

/************************ Timer Modes *************************/
typedef enum{
	Normal ,
	PWM_PhaseCorrect,
	CTC ,
	Fast_PWM,
} Modes ;
/**************************************************************/

/********************** Interrupt State ***********************/
typedef enum{
	Enable ,
	Disable ,
} State ;
/**************************************************************/

#endif 
