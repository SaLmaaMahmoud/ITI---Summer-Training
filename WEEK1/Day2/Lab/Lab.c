#include <stdio.h>

int main()
{
    int num ;
	
	printf("Enter number of the day : ") ;
	scanf("%d", &num) ;
	
	switch(num)
	{
		case 1 :
		printf("1 is Saturday\n") ;
		break;
		
		case 2 :
		printf("2 is Sunday\n") ;
		break ;
		
		case 3 :
		printf("3 is Monday\n") ;
		break ;
		
		case 4 :
		printf("4 is Tuesday\n") ;
		break ;
		
		case 5 :
		printf("5 is Wednesday\n") ;
		break ;
		
		case 6 :
		printf("6 is Thursday\n") ;
		break ;
		
		case 7 :
		printf("7 is Friday\n") ;
		break ;
		
		default :
		printf("Wrong Entry!!") ;
		break ;
	}
}
