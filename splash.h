#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

void splash()
{
	int i=0;
	time_t t;
	time(&t);
	//SPLASH SCREEN
	gotoxy(30,4);
	printf("------------------------------------------------------------------------------\n",4);
	gotoxy(30,5);
	printf("|                                                                            |\n",5);
	gotoxy(30,6);
	printf("|  000000  000000  000000  000000  000000  000000  0      0  000000  0000000 |\n",6);
	gotoxy(30,7);
	printf("|  0       0    0  0       0          0       0    0 0    0  0       0       |\n",7);
	gotoxy(30,8);
	printf("|  0  000  000000  000000  000000     0       0    0   0  0  0  000  0000000 |\n",8);
	gotoxy(30,9);
	printf("|  0    0  0  0    0       0          0       0    0    0 0  0    0        0 |\n",9);
	gotoxy(30,10);
	printf("|  000000  0   0   000000  000000     0    000000  0     00  000000  0000000 |\n",10);
	gotoxy(30,11);
	printf("|                                                                            |\n",11);
	gotoxy(30,12);
	printf("------------------------------------------------------------------------------\n",12);
	gotoxy(40,13);
	printf("*************************************************\n",13);
	gotoxy(40,14);
	printf("*                                               *\n",14);
	gotoxy(40,15);
	printf("*      ----------------------------------       *\n",15);
	gotoxy(40,16);
	printf("*              WELCOME TO HOTEL GALAXY          *\n",16);
	gotoxy(40,17);
	printf("*      ----------------------------------       *\n",17);
	gotoxy(40,18);
	printf("*                                               *\n",18);
	gotoxy(40,19);
	printf("*        Powered By VGS Infotech Students       *\n",19);
	gotoxy(40,20);
	printf("*                  Hyderabad                    *\n",20);
	gotoxy(40,21);
	printf("*        CONTACT US: 123456789,0123456789       *\n",21);
	gotoxy(40,22);
	printf("*                                               *\n",22);
	gotoxy(40,23);
	printf("*************************************************\n",23);
	gotoxy(30,24);
	for(i=0;i<80;i++)
		printf("-");
		
	gotoxy(40,25);
	printf("Current date and time : %s",ctime(&t));
	
	gotoxy(30,26);
	for(i=0;i<80;i++)
		printf("-");
	gotoxy(40,29);	
	printf("Press any key to continue :",29);
	getch();
}
