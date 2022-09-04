#include <stdio.h>

int main()
{
	float num1, num2 ;
	char op ;
	
	printf("Enter an operator \( + , - , * , / ) : ") ;
	scanf("%c", &op) ;
	
	printf("Enter the first number : ") ;
	scanf("%f", &num1) ;
	
	printf("Enter the second number : ") ;
	scanf("%f", &num2) ;
	
	
	
	switch( op )
	{
		case '+' :
			printf("%.2f + %.2f = %.2f\n", num1, num2, num1+num2) ;
			break ;
		
		case '-' :
			printf("%.2f - %.2f = %.2f\n", num1, num2, num1-num2) ;
			break ;
		
		case '*' :
			printf("%.2f * %.2f = %.2f\n", num1, num2, num1*num2) ;
			break ;
		
		case '/' :
			if(num2 != 0)
				printf("%.2f / %.2f = %.2f\n", num1, num2, num1/num2) ;
			else
				printf("Can't devide by zero\n") ;
		break ;
		
		default :
			printf("Wrong Entry!!\n") ;
			break ;
	}
	
	return 0 ;
}