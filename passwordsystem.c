//A C PROGRAM FOR A PASSWORD SYSTEM(DO-WHILE LOOP)
/*
Name:MOGOI IGNATIUS
Reg No:PA106/G/28834/25
Description:A C program for a password system
*/

#include <stdio.h>
#include <string.h>

int main()
{
	char password[20];
	char correctpassword[] = "1234";
	
	 printf("Password protected system\n");
	 printf("=====================\n");
	 
	 do {
		 printf("Enter password: ");
		 scanf("%s", password);
		 
		 if(strcmp(password, correctpassword) !=0){
			 printf("Incorrect password.Try again.\n");
		 }
	 }while(strcmp(password, correctpassword) !=0);
	 
	 printf("Access Granted!\n");
	 
	return 0;
}