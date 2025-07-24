#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
#include "login.h"
#include "layout.h"
#include "splash.h"


void exitApp() {
    system("cls");
    gotoxy(50, 10);
    printf("Exiting the application. Thank you!");
    Sleep(2000);
    exit(0);
}

void staffMenu()
{
	int opt;
	while(1)
	{
		system("cls");
	    gotoxy(30, 5);
		printf("*********************************  |STAFF MENU|  ******************************** \n");
	    gotoxy(30, 6);
		printf("--------------------------------------------------------------------------------\n ");
		gotoxy(30, 7);
		printf("* please enter your choice from menu *\n");
		gotoxy(50, 9);
		printf("Enter 1 -> Add Staff");
	    gotoxy(50, 10);
		printf("Enter 2 -> Staff List");
	    gotoxy(50, 11);
		printf("Enter 3 -> Search Staff");
	    gotoxy(50, 12);
		printf("Enter 4 -> Edit Staff");
	    gotoxy(50, 13);
		printf("Enter 5 -> Delete Staff");
	    gotoxy(50, 14);
		printf("Enter 6 -> Back to Main Menu");
	    gotoxy(30, 15);
		printf("--------------------------------------------------------------------------------\n ", 15);
		gotoxy(50, 16);
		printf("Enter your choice: ");
	    gotoxy(70, 16);
	    scanf("%d",&opt);
	    switch (opt) {
	        case 1:  
	            //addStaff(); 
				break;
	        case 2:  
	        	
				//staffList();
				break;
	        case 3:  
				//searchStaff();
				break;
	        case 4:  
				//updateStaff();
				break;
	        case 5:  
				//deleteStaff();
				break;
	        case 6:  
				return;
	    }
	}
}

void roomsMenu()
{
	int opt;
	while(1)
	{
		system("cls");
	    gotoxy(30,5);
		printf("*********************************  |ROOMS MENU|  ******************************** \n", 5);
	    gotoxy(30,6);
		printf("--------------------------------------------------------------------------------\n ", 6);
		gotoxy(30,7);
		printf("* please enter your choice from menu *\n", 7);
		gotoxy(50,9);
		printf("Enter 1 -> Add Room");
	    gotoxy(50,10);
		printf("Enter 2 -> Rooms List");
	    gotoxy(50,11);
		printf("Enter 3 -> Search Room");
	    gotoxy(50,12);
		printf("Enter 4 -> Edit Room");
	    gotoxy(50,13);
		printf("Enter 5 -> Delete Room");
	    gotoxy(50,14);
		printf("Enter 6 -> Back to Main Menu");
	    gotoxy(30,15);
		printf("--------------------------------------------------------------------------------\n ");
		gotoxy(50,16);
		printf("Enter your choice: ");
	    
		gotoxy(70, 16);
	    scanf("%d",&opt);
	    switch (opt) {
	        case 1:  
	            //addRoom(); 
				break;
	        case 2:  
	        	
				//roomList();
				break;
	        case 3:  
				//searchRoom();
				break;
	        case 4:  
				//updateRoom();
				break;
	        case 5:  
				//deleteRoom();
				break;
	        case 6:  
				return;
	    }
	}
}

void bookingsMenu()
{
	int opt;
	while(1)
	{
		system("cls");
		gotoxy(30,5);
	    printf("*********************************  |BOOKINGS MENU|  ******************************** \n");
	    gotoxy(30,6);
		printf("--------------------------------------------------------------------------------\n ");
		gotoxy(30,7);
		printf("* please enter your choice from menu *\n");
		gotoxy(50,9);
		printf("Enter 1 -> Book a Room");
	    gotoxy(50,10);
		printf("Enter 2 -> Checkout");
	    gotoxy(50,11);
		printf("Enter 3 -> Cancel Booking");
	    gotoxy(50,12);
		printf("Enter 4 -> Back to Main Menu");
	    gotoxy(30,15);
		printf("--------------------------------------------------------------------------------\n ");
		gotoxy(50,17);	
		printf("Enter your choice: ");
	    
		(70, 17);
	    scanf("%d",&opt);
	    switch (opt) {
	        case 1:  
	            //bookRoom(); 
				break;
	        case 2:  
	        	
				//checkout();
				break;
	        case 3:  
				//cancelBooking();
				break;
	        case 4:  
				return;
	    }
	}
}

void mainmenu() {
    int choice;
    time_t t;
	time(&t);
	splash();
    while (1) {
        system("cls");
        gotoxy(30,5);
        printf("*********************************  |MAIN MENU|  ******************************** \n");
        gotoxy(30,6);
		printf("--------------------------------------------------------------------------------\n ");
		gotoxy(30,7);
		printf("* please enter your choice from menu *\n");
		gotoxy(50,9);
		printf("Enter 1 -> Manage Staff");
        gotoxy(50,10);
		printf("Enter 2 -> Manage Rooms");
        gotoxy(50,11);
		printf("Enter 3 -> Manage Bookings");
        gotoxy(50,12);
		printf("Enter 4 -> Exit");
        gotoxy(30,14);
		printf("--------------------------------------------------------------------------------\n ", 14);
		gotoxy(30,15);
		printf("Current date and time : ");
		
		gotoxy(55, 15);
		printf("%s",ctime(&t));
		gotoxy(30, 16);
		printf("---------------------------------------------------------------------------------\n");
        gotoxy(50, 17);
		printf("Enter your choice: ");
        
		gotoxy(70, 17);
        scanf("%d",&choice);
        switch (choice) {
            case 1:  staffMenu();break;
            case 2:  roomsMenu();break;
            case 3:  bookingsMenu();break;
            case 4:  exitApp(); break;
        }
    }
}




int main() {
    setFullScreen();
    setColor();
    mainmenu();
    return 0;
}
