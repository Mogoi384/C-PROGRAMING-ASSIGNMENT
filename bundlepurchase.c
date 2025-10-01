//MOBILE DATA BUNDLE PURCHASE PROGRAM
/*
Name:MOGOI IGNATIUS
Reg No:PA106/G/28834/25
Description:A C program on mobile data bundle purchase

*/
#include <stdio.h>

int main()
{
	int choice;
	
	printf("SELECT YOUR AFFORDABLE DATA BUNDLE: \n");
	printf("1. 100MB @ 50 KES\n");
	printf("2. 500MB @ 200 KES\n");
	printf("3. 1GB @ 350 KES\n");
	printf("4. 2GB @ 600 KES\n");
	
	printf("Enter your choice (1-4): ");
	scanf("%d", &choice);
	
	switch(choice) {
		case 1:
			printf("You have selected 100MB \n");
			break;
		case 2:
			printf("You have selected 500MB \n");
			break;
		case 3:
			printf("You have selected 1GB \n");
			break;
		case 4:
			printf("You have selected 2GB \n");
			break;
		default:
			printf("Invalid choice! \n");
	}
	return 0;
}
