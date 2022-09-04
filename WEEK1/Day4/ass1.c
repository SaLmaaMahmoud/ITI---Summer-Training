/**
 **************************************************************************
 *  @file          :  ass1.c
 *  @author        :  Salma Mahmoud
 *  @brief         :  Day 4 of iti training
 **************************************************************************
 */

 
/* ********************* Include Section Start ********************* */
#include <stdio.h>
/* ********************* Include Section End   ********************* */


/* ********************* Sub-Program Declerations Section Start ********************* */
/*Description : Swapping two arrays entered by user
  Parameters  : void
  Return      : void */
void Swap_Two_Arrays(void) ;
/* ********************* Sub-Program Declerations Section End   ********************* */


int main()
{
	/* Call the Swap_Two_Arrays function */
	Swap_Two_Arrays() ;
	
	return 0 ;
}


/* ********************* Sub-Program Section Start ********************* */
void Swap_Two_Arrays(void)
{
	/* Declerations of the two arrays */
	char arr1[10] ;
	char arr2[10] ;
	
	/* temporary array */
	char arr_temp[10]  ;
	
	/* Ask the user to enter the two aarays */
	printf("Enter arr1 : ") ;
	scanf("%s", &arr1) ;
	
	printf("Enter arr2 : ") ;
	scanf("%s", &arr2) ;
	
	/* print the two arrays before swapping */
	printf("\n/*****************Before Swapping*****************/\n") ;
	
	printf("arr1 before swapping : %s\n", arr1) ;
	printf("arr2 before swapping : %s\n", arr2) ;
	
	/* for loop to swap each element of the two arrays */
	for(int i =0 ; i<10 ; i++)
	{
	arr_temp[i] = arr2[i] ;
	arr2[i] = arr1[i] ;
	arr1[i] = arr_temp[i] ;
	}
	
	/* print the two arrays after swapping */
	printf("\n/*****************After Swapping*****************/\n") ;
	printf("arr1 after swapping : %s\n", arr1) ;
	printf("arr2 after swapping : %s\n", arr2) ;
	
}
/* ********************* Sub-Program Section End   ********************* */


