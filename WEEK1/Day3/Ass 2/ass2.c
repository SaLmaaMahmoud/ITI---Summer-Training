/**
 **************************************************************************
 *  @file          :  ass2.c
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
void Draw_Pyramid(int num) ;
/* ********************* Sub-Program Declerations Section End   ********************* */


int main()
{
	/* The height of the pyramid */
    int height ;

	/* ask the user to enter the height of the pyramid */
    printf("Please, Enter the height of the pyramid : ");
    scanf("%d", &height) ;

    Draw_Pyramid(height) ;

    return 0 ;
}

/* ********************* Sub-Program Section Start ********************* */
void Draw_Pyramid(int num)
{
	/* Counters */
	int i, j ;
	
	/* for loop to draw the pyramed */
	for ( i = 0 ; i < num ; i++ ){
		/* for loop to make the specific spaces */
        for ( j = i+1 ; j < num  ; j++ ){
            printf(" ");
        }
		/* for loop Draw the stars */
        for ( j = 0 ; j < 1+2*i ; j++ ){
            printf("*");
        }
		/* To make a new line */
        printf("\n");
    }
}
/* ********************* Sub-Program Section End   ********************* */
