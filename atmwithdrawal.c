//A C PROGRAM FOR AN ATM WITHDRAWAL(WHILE LOOP)
/*
Name:MOGOI IGNATIUS
Reg No:PA106/G/28834/25
Description:A C program for an atm withdrawal
*/

#include <stdio.h>

int main()
{
float balance;

printf("Enter your initial account balance:");
scanf("%f", &balance);	

while(balance > 0){ 
 float withdrawal;
 
printf("Current balance : $%.2f\n", balance);
printf("Enter amount to withdraw: ");
scanf("%f", &withdrawal);
	
	if (balance < withdrawal){
		printf("Insufficient funds .Final balance: $%.2f\n", balance);
		break;
	}
	balance -=withdrawal;
}

printf("Transaction completed.Final balance: $%.2f\n", balance);
	return 0;
}