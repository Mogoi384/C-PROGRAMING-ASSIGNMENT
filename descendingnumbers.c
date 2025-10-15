//A C PROGRAM FOR LOOP
/*
Name:MOGOI IGNATIUS
Reg No:PA106/G/28834/25
Description:A C program that uses loop to print all the numbers in descending order
*/
#include <stdio.h>

int main()

{
	printf("Numbers from 100 to 50:\n");
	
	int i;
	
	for(i = 100; i >= 50; i--)
	{
		printf("%d\n", i);
	}
	return 0;
}