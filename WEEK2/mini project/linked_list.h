#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "STD_TYPES.h"

#ifndef LINKED_LIST_h_
#define LINKED_LIST_h_

typedef struct data
{
    u8 name[50] ;
    //u16 votes ;
	u8 ID ;
    
	struct data *next ;
} data_ ;


void appendNode( u8* name , u8 ID ) ;

void printNames( ) ;

data_* inputNode( data_* node ) ;

void printNode( data_* node ) ;



#endif // LINKED_LIST
