#include "take_action.h"

u8 votes[5] = { 0 , 0 , 0 , 0 , 0 } ;

void start_page( ){

    system("cls");

    u8 ch ; //To take the choice from the admin

    //printf("\n\n\t\t\t\tWelcome to the admin page ^_^\n");
    printf("\t\t\t________________________________________\n\n");
    printf("\t\t\t1 - Cast the vote.\n");
    printf("\t\t\t2 - Find vote count.\n");
    printf("\t\t\t3 - Find leading candidate.\n");
	printf("\t\t\t4 - Exit.\n");
    printf("\n\t\t\tPlease, Choose : \n");
    printf("\t\t\t>> ");
    scanf("%d", &ch );

    //To check the choice of the admin and display the choice page
    switch ( ch ){
        case 1 :
            Cast_Vote( ) ;
            break ;
        case 2 :
            system("cls") ;
            Vote_Count( ) ;
            break ;
        case 3 :
            Lead_Cand( ) ;
            break ;
		case 4 :
			break ;
        default :
            printf("\n\t\t\t>>WRONG ENTERY!!\n") ;
            start_page( ) ;
            break ;
    } //End switch case
}

void backstart( ){
    puts("\n\t\t\tEnter any key to get back : \n\t\t");
    getch( ) ;
    start_page( );
}

void show_names( ){
    printf("\n\n" );
    
	printNames( ) ;
}


void Cast_Vote( )
{
	system("cls");
		
	u8 id ; //To take the id from user
    u8 i ;
	
    printf("\n\n\n\n\t\t\t***** Please Enter Your Cnadidate *****\n") ;
	
	show_names( ) ;
	
	printf("\n\t\t\tInput your choioce (1 - 5) : ") ;
	scanf("%d", &id) ;
	
	switch( id )
	{
		case 1 :
			votes[0]++ ;
			printf("\n\n\t\t\t>>Thanks for voting!!\n") ;
			break ;
		case 2 :
			votes[1]++ ;
			printf("\n\n\t\t\t>>Thanks for voting!!\n") ;
			break ;
		case 3 :
			votes[2]++ ;
			printf("\n\n\t\t\t>>Thanks for voting!!\n") ;
			break ;
		case 4 :
			votes[3]++ ;
			printf("\n\n\t\t\t>>Thanks for voting!!\n") ;
			break ;
		case 5 :
			votes[4]++ ;
			printf("\n\n\t\t\t>>Thanks for voting!!\n") ;
			break ;
		default :
			printf("\n\n\t\t\t>>The Choice is not correct.\n") ;
			break ;
	}
	
	backstart( ) ;
}


void Vote_Count( ) 
{
	system("cls");
	
	data_* node = '\0' ;
	u8 i = 0 ;
	
    printf("\t\t\tName   \t\t\t\t\t  | Votes") ;
    printf("\n\t\t\t____________________________________________________________\n");


    for ( node=head ; node!=NULL ; node=node->next ){
        printf("\t\t\t %s\t\t\t\t\t  | %d\n", node->name,votes[i]) ;
		i++ ;
    }
	
	backstart( ) ;
}


void Lead_Cand( )
{	
	system("cls");

	u8 i ;
	u8 max = 0 ;
	
	for( i=0 ; i<5 ; i++ )
	{
		if( votes[i] > max )
		{
			max = votes[i] ;
		}
	}
	
	if ( max == votes[0] )
	{
		printf("\n\n\t\t\t>>The leading candidate is : %s\n", "Ahmed") ;
	}
	else if ( max == votes[1] )
	{
		printf("\n\n\t\t\t>>The leading candidate is : %s\n", "Omar") ;
	}
	else if ( max == votes[2] )
	{
		printf("\n\n\t\t\t>>The leading candidate is : %s\n", "Hassan") ;
	}
	else if ( max == votes[3] )
	{
		printf("\n\n\t\t\t>>The leading candidate is : %s\n", "Zaki") ;
	}
	else if ( max == votes[4] )
	{
		printf("\n\n\t\t\t>>The leading candidate is : %s\n", "None") ;
	}
	
	
	backstart( ) ;
}
