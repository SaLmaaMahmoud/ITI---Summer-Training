/**
 **************************************************************************
 *  @file          :  voting.c
 *  @author        :  Salma Mahmoud
 *  @brief         :  mini project of Election/Voting2020 for iti training
 **************************************************************************
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linked_list.c"
#include "take_action.c"
#include "STD_TYPES.h"


void welcome( ) ;

int main()
{
    //To add users
    appendNode("Ahmed"     , 1) ; 
    appendNode("Omar"   , 2) ; 
    appendNode("Hassan" , 3) ; 
    appendNode("Zaki" , 4) ; 
    appendNode("None" , 5) ; 
	
    welcome( ) ;

}

//The start window for welcome
void welcome( ){
	system("cls") ;
    printf("\n\n\n\n\t\t\t\t\t   Welcome To\n") ;
    printf("\n\t\t\t\t\tElection/Voting2020\n") ;

    printf("\n\n\t\t\t\t\t>>Press any key to enter ^_^\n") ;
    getch( ) ;
    system("cls") ;
    start_page( ) ; //To go to start page
}
