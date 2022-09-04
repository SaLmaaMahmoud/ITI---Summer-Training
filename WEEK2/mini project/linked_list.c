#include "linked_list.h"


data_* head = NULL ;
data_* tail = NULL ;

//Function to add a node
void appendNode( u8* name , u8 ID )
{
    data_* node = ( data_* ) malloc( sizeof(data_) ) ;
    node->next = NULL ;

    strcpy( node->name , name ) ;
	node->ID = ID ;

    if ( head == NULL ){
        head = node ;
        tail = node ;
    }
    else {
        tail->next = node ;
        tail = node ;
    }
}



void printNames( ){
    data_* node = '\0' ;
	u8 i = 0 ;

    //printf("\t\t\t____________________________________________________________\n");


    for ( node=head ; node!=NULL ; node=node->next ){
        printf("\n\t\t\t%d/ %s\n", ++i, node->name) ;
    }

}
