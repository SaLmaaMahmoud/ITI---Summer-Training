#include <stdio.h>
#include "STD_TYPES.h"

u8 main()
{
	u8 x = 1 ;
	u8 const *x_ptr1 = &x ;
	u8 y = 5 ;
	u8 **x_ptr2 = &x_ptr1 ;
	
	printf("address of x_ptr1 before : %d\n", x_ptr1) ;
	printf("address of x_ptr2 before : %d\n", *x_ptr2) ;
	
	*x_ptr2 = &y ;
	
	printf("address of x_ptr1 after : %d\n", &y) ;
	printf("address of x_ptr2 after : %d\n", x_ptr1) ;
	
	return 0 ;
}