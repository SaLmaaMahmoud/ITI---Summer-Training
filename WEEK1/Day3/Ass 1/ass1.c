/**
 **************************************************************************
 *  @file          :  ass1.c
 *  @author        :  Salma Mahmoud
 *  @brief         :  Day 3 of iti training
 **************************************************************************
 */

 
/* ********************* Include Section Start ********************* */
#include <stdio.h>
/* ********************* Include Section End   ********************* */


/* ********************* Sub-Program Declerations Section Start ********************* */
/*Description : Calculating the power of a number
  Parameters  : the number->int and the power->int
  Return      : The power of the number->int */
int Power(int num , int pow) ;
/* ********************* Sub-Program Declerations Section End   ********************* */


int main()
{
	/* The number */
	int num ;
	/* The power */
	int pow ;
	/* The result */
	int answer ;
	
	printf("\nEnter the number : ") ;
	scanf("%d", &num) ;
	
	printf("Enter the power : ") ;
	scanf("%d", &pow) ;
	
	answer = Power(num , pow) ;
	
	printf("\nAnswer : %d\n", answer) ;
	
	return 0 ;
}

/* ********************* Sub-Program Section Start ********************* */
int Power(int num , int pow)
{
	/* counter */
	int i ;
	/* The result */
	int ans = 1 ;
	
	for (i=1 ; i<=pow ; i++)
	{
		ans *= num ;
	}
	
	return ans ;
}
/* ********************* Sub-Program Section End   ********************* */
