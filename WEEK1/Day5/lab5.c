/**
 **************************************************************************
 *  @file          :  lab5.c
 *  @author        :  Salma Mahmoud
 *  @brief         :  Day 5 of iti training
 **************************************************************************
 */

 
/* ********************* Include Section Start ********************* */
#include <stdio.h>
/* ********************* Include Section End   ********************* */


/* ********************* Sub-Program Declerations Section Start ********************* */
/*Description : Count number of digits, constants, vowels, spaces in a single line of string
  Parameters  : pointer-> char* ptr
  Return      : void */
void STRING(char* ptr) ;
/* ********************* Sub-Program Declerations Section End   ********************* */


int main()
{
	/* Decleration of the array */
	char arr[20] ; 
	
	/* Ask the user to enter a single line oof string */
	printf("Enter a single line : ") ;
	scanf("%[^\n]%*c", arr) ;
	
	/* Call the STRING function */
	STRING(arr) ;
	
	return 0 ;
}

/* ********************* Sub-Program Section Start ********************* */
void STRING(char* ptr)
{
	/* Decleration of the counter of number of elements */
	int i=0 ;
	
	/* Decleration of counter for ASCII code */
	int j = 0 ;
	
	/* Declerations of the counters of digits, constants, vowels, spaces */
	int dig_counter = 0 ;
	int space_counter = 0 ;
	int vow_counter = 0 ;
	int const_counter = 0 ;
	
	/* while loop to count */
	while(ptr[i] != '\0')
	{
		/* for loop to count number of digits */
		for(j=48 ; j <= 57 ; j++)
		{
			/* if the element is equal to the ASCII code of any of the numbers then increase the counter of digits by one */
			if (ptr[i] == j)
			{
				dig_counter ++ ;
			}
		}
		
		/* if the element is equal to space ' ' then increase the counter of space by one */
		if (ptr[i] == ' ')
		{
			space_counter ++ ;
		}
		
		/* if the element is equal to the ASCII code of any of the vowel capital alphabet then increase the counter of vowels by one */
		if ((ptr[i]=='A') || (ptr[i]=='E') || (ptr[i]=='I') || (ptr[i]=='O') || (ptr[i]=='U'))
		{
			vow_counter++ ;
		}
		else
		{
			/* for loop to count number of constants of capital alphabet */
			for(j=65 ; j <= 90 ; j++)
			{
				/* if the element is equal to the ASCII code of any of the constant capital alphabet then increase the counter of constants by one */
				if (ptr[i] == j)
				{
					const_counter ++ ;
				}
			}
		}
		
		/* if the element is equal to the ASCII code of any of the vowel small alphabet then increase the counter of vowels by one */
		if((ptr[i]=='a') || (ptr[i]=='e') || (ptr[i]=='i') || (ptr[i]=='o') || (ptr[i]=='u'))
		{
			vow_counter ++ ;
		}
		else
		{
			/* for loop to count number of small alphabet */
			for(j=97 ; j<=122 ;j++)
			{
				/* if the element is equal to the ASCII code of any of the constant small alphabet then increase the counter of contants by one */
				if (ptr[i] == j)
				{
					const_counter ++ ;
				}
			}
		}
		i++ ;
	}
	
	printf("\nNumber of digits : %d\n", dig_counter) ;
	printf("\nNumber of vowels : %d\n", vow_counter) ;
	printf("\nNumber of const : %d\n", const_counter) ;
	printf("\nNumber of spaces : %d\n", space_counter) ;
}
/* ********************* Sub-Program Section End   ********************* */
