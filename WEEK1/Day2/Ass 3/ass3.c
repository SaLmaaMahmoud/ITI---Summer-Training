#include <stdio.h>

int main()
{
	int i, j, rows ;
	int num = 1 ;
	
	printf("Enter the number of rows of floyd's triangle to print : ") ;
	scanf("%d", &rows) ;
	
	for (i=0 ; i<rows ; i++)
	{
        for (j=0 ; j<i ; j++)
		{
            printf("%d ", num) ;
			num++ ;
        }
        printf("\n") ;
	}
	
	return 0 ;
}