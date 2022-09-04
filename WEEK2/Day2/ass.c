/**
 **************************************************************************
 *  @file          :  ass.c
 *  @author        :  Salma Mahmoud
 *  @brief         :  Day 8 of iti training
 **************************************************************************
 */

 
/* ********************* Include Section Start ********************* */
#include <stdio.h>
#include <stdlib.h>
#include "STD_TYPES.h"
/* ********************* Include Section End   ********************* */


u16 main(void)
{
	/* This pointer will hold the base address of the block created */
	u16* ptr ;
	
	/* Counter for the array */
	u8 i ;
	
	/* Variable to hold the number of elements */
	u8 n ;
	
	/* Get the number of elements */
	printf("Enter number of elements: ") ;
    scanf("%d", &n) ;
	
	/* Dynamically allocate memory using malloc() */
    ptr = (u16*) malloc (n * sizeof(u16)) ;
	
	/* Check if the memory has been successfully allocated by malloc or not */
    if (ptr == NULL) 
	{
        printf("Memory not allocated.\n");
        exit(0);
    }
	else 
	{
        /* Memory has been successfully allocated */
        printf("Memory successfully allocated using malloc.\n");
 
        /* Get the elements of the array */
        for (i = 0; i < n; ++i) 
		{
			printf("Enter element %d : ", i) ;
			scanf("%d", &ptr[i]) ;
        }
		
		/* Print the elements of the array */
        printf("\n*** The elements of the array are ***\n");
        for (i = 0; i < n; ++i) {
            printf("Element %d is %d \n", i, ptr[i]);
        }
	}
	
	return 0 ;
	
}