#include "linked_list.h"

/*struct data D[5] = {	{"Ahmed" , 0 , 1},
						{"Omar"  , 0 , 2},
						{"Hassan", 0 , 3},
						{"Zaki"  , 0 , 4},
						{"None of the above"  , 0 , 5}	} ;
						
*/

data_* head = NULL ;
data_* tail = NULL ;

//Function to add a node
void appendNode( u8* name , u8 ID )
{
    data_* node = ( data_* ) malloc( sizeof(data_) ) ;
    node->next = NULL ;

    strcpy( node->name , name ) ;
	node->ID = ID ;
    //node->votes = votes ;

    if ( head == NULL ){
        head = node ;
        tail = node ;
    }
    else {
        tail->next = node ;
        tail = node ;
    }
}

//Function to print nodes (Users' data)
/*void printNodes( ){
    data_* node = '\0' ;

    printf("\t\t\tName   \t\t\t\t\t  | Votes") ;
    printf("\n\t\t\t____________________________________________________________\n");


    for ( node=head ; node!=NULL ; node=node->next ){
        printf("\t\t\t %s\t\t\t\t  | %d\n", node->name, node->votes) ;
    }

}*/



void printNames( ){
    data_* node = '\0' ;
	u8 i = 0 ;

    //printf("\t\t\t____________________________________________________________\n");


    for ( node=head ; node!=NULL ; node=node->next ){
        printf("\n\t\t\t%d/ %s\n", ++i, node->name) ;
    }

}
