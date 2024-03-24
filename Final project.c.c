#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<Windows.h>
struct fast_airline
{
	char nic[20];
	char name[20];
    char destination[15];
	int seat_num;
	char email[20];
	struct fast_airline *following;
}
*begin, *stream;
struct fast_airline *dummy;


void main()
{
	void reserve(int x), cancel(), display();  
	int choice;
	char user[50], pw[50], adminu[50]="fast", adminpw[50]="1234";           //Password and username...
    
    
    float total;
    
    char repeat;
    
	 printf("\n");
	
	 printf("\n");
	 printf("                    \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
	 printf("\n");

    printf("\n \t \t Enter username: ");
    
    scanf("%s", &user);
    
    printf("\n \t \t Enter password: ");
    
    scanf("%s", &pw);
    
    system("cls");
    if (strcmp(user, adminu)==0 && strcmp(pw, adminpw)==0)
    {
	begin = stream = NULL;  //initialize the struct pointers to NULL 
	int num = 1;
	 do
	 {
		
		 printf("\n");
	
	 printf("\n");
	 printf("                    \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
	 printf("\n");
	 
	 printf("                          Welcome to Fast Airline");
	 printf("\n");
	 printf("             \xDB\xDB\xDB\xDB\xB2 1. Reservation               ");
	 printf("\n");
	 printf("               \n             \xDB\xDB\xDB\xDB\xB2 2. Cancellation\n                    ");
	 printf("               \n             \xDB\xDB\xDB\xDB\xB2 3. Display Layout\n                    ");
	 printf("               \n             \xDB\xDB\xDB\xDB\xB2 4. Exit\n                    ");
	 printf("\n");
	 printf("                    \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
     


		scanf("%d", &choice); fflush(stdin);
		system("cls");
		switch (choice)                    //this switch statement is for selecting options i.e reservation,cancelation and display...
		{
		case 1:
			reserve(num);
			num++;
			break;
		case 2:
			cancel();
			break;
		case 3:
			display();
			break;
	
		default:
			printf("\n\n\t SORRY INVALID CHOICE!");
			printf("\n\n\t PLEASE CHOOSE FROM 1-4");
			printf("\n\n\t Do not forget to chose from 1-4");
		}
		getch();
	 }  while (choice != 4);
   }
   else
   {
   	 printf("               \n             \xDB\xDB\xDB\xDB\xB2 Invalid Username Or Password:\n                    ");

   }
    
}

void details()
{
	 int choice;
	 printf("\n");
	
	          printf("\n");
	          printf("                    \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
	          printf("\n");
	 
	          printf("                          TICKET RESERVATION SYSTEM ");
	          printf("\n");
	          printf("             \xDB\xDB\xDB\xDB\xB2 1. Business Class               ");
	          printf("\n");
	          printf("               \n             \xDB\xDB\xDB\xDB\xB2 2. First Class\n                    ");
	          printf("               \n             \xDB\xDB\xDB\xDB\xB2 3. Economic Class\n                    ");
	          printf("               \n             \xDB\xDB\xDB\xDB\xB2 4. Exit\n                    ");
	          printf("\n");
	          printf("                    \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
	          
			printf("\n \n \t \t Enter Your Choice");
			scanf("%d", &choice); fflush(stdin);
		    system("cls");
		switch (choice)
		{
		case 1:
					printf("\n");
	
	                printf("\n");
	                printf("                    \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
	                printf("\n");
	 
	                printf("                          Welcome to Business Class ");
	                printf("\n");
	                printf("\n");
				
				
				printf("\n\t Enter your NIC number:");
	            gets(stream->nic); fflush(stdin);   
	            printf("\n\t Enter your  name:");
	            gets(stream->name); fflush(stdin);
	            printf("\n\t Enter your email address:");
	            gets(stream->email); fflush(stdin);
                printf("\n\t Enter the Destination : ");
                gets(stream->destination); fflush(stdin);
			break;
		case 2:
		        	printf("\n");
	
	                printf("\n");
	                printf("                    \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
	                printf("\n");
	 
	                printf("                          Welcome to First Class ");
	                printf("\n");
	                printf("\n");
				
				printf("\n\t Enter your NIC number:");
	            gets(stream->nic); fflush(stdin);   
	            printf("\n\t Enter your  name:");
	            gets(stream->name); fflush(stdin);
	            printf("\n\t Enter your email address:");
	            gets(stream->email); fflush(stdin);
                printf("\n\t Enter the Destination : ");
                gets(stream->destination); fflush(stdin);
			break;
		case 3:
			    	printf("\n");
	
	                printf("\n");
	                printf("                    \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
	                printf("\n");
	 
	                printf("                          Welcome to Economic Class ");
	                printf("\n");
	                printf("\n");
				
				printf("\n\t Enter your NIC number:");
	            gets(stream->nic); fflush(stdin);   
	            printf("\n\t Enter your  name:");
	            gets(stream->name); fflush(stdin);
	            printf("\n\t Enter your email address:");
	            gets(stream->email); fflush(stdin);
                printf("\n\t Enter the Destination : ");
                gets(stream->destination); fflush(stdin);
			break;
	
		default:
			printf("\n\n\t SORRY INVALID CHOICE!");
			printf("\n\n\t PLEASE CHOOSE FROM 1-4");
			printf("\n\n\t Do not forget to chose from 1-4");
		break;
		}
	
}



void details();

void reserve(int x)
{
	stream = begin;
	if (begin == NULL)
	{
	
		begin = stream = (struct fast_airline*)malloc(sizeof(struct fast_airline));
		details();
		stream->following = NULL;
		printf("\n\t Seat booking successful!");
		printf("\n\t your seat number is: Seat A-%d", x);
		stream->seat_num = x;
		return;
	}
	else if (x > 15) // FULL SEATS
	{
		printf("\n\t\t Seat Full.");
		return;
	}
	else
	{
		// next user
		while (stream->following)
			stream = stream->following;
		stream->following = (struct fast_airline *)malloc(sizeof(struct fast_airline));
		stream = stream->following;
		details();
		stream->following = NULL;
		printf("\n\t Seat booking succesful!");
		printf("\n\t your seat number is: Seat A-%d", x);
		stream->seat_num = x;
		return;
	}
} 





void display()
{
	stream = begin;
	while (stream)
	{
		printf("\n");
	    printf("\n");
	    printf("                    \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
		printf("\n");
		printf("\n\n NIC Number : %-6s", stream->nic);
		printf("\n         name : %-15s", stream->name);
		printf("\n      email address: %-15s", stream->email);
		printf("\n      Seat number: A-%d", stream->seat_num);
        printf("\n     Destination:%-15s", stream->destination);
	printf("\n");
	    printf("                    \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
		stream = stream->following;
	}

}


void cancel()
{
	stream = begin;
	system("cls");
	char nic[6];
	printf("\n\n Enter NIC number to delete record?:");
	gets(nic); fflush(stdin);
	if (strcmp(begin->nic, nic) == 0)
	{
		dummy = begin;
		begin = begin->following;
		free(dummy); 
		printf(" booking has been deleted");
		Sleep(800);
		return;

	}

	while (stream->following)
	{
		if (strcmp(stream->following->nic, nic) == 0)
		{
			dummy = stream->following;
			stream->following = stream->following->following;
			free(dummy);
			printf("has been deleted ");
			getch();
			Sleep(800);
			return;
		}
		stream = stream->following;
	}
	printf("NIC number is wrong please check your NIC");

}
