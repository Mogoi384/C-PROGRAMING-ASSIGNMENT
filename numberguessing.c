//A C PROGRAM FOR A NUMBER GUESSING GAME(WHILE LOOP)
/*
Name:MOGOI IGNATIUS
Reg No:PA106/G/28834/25
Description:A C program for a number guessing game
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{int secretnumber, guess, attempts =0;

srand(time(0));

secretnumber =(rand() %20) + 1;

printf("Welcome to the Number guessing game\n");
printf("I am thinking of a number between 1 and 20.\n\n");

while(1){
	printf("Enter your guessed number:");
	scanf("%d", &guess);
	attempts++;
	
	if(guess > secretnumber){
		printf("Too high!\n");
	}  else if(guess > secretnumber){
		printf("Too low!\n");
	}   else {
		printf("Congratulations! you guessed the number in %d attempts.\n", attempts);
		break;
	}
	
}
	
	return 0;
}