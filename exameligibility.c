//STUDENT ELIGIBILITY PROGRAM
/*
Name:MOGOI IGNATIUS
Reg No:PA106/G/28834/25
Description:A C program on a student's exam eligibility

*/
#include <stdio.h>

int main()
{
     float attendance, marks ; 
     
	printf("Enter the attendance percentage: ");
	scanf("%f", &attendance);
	
	printf("Enter your average marks: ");
	scanf("%f", &marks); 
	
	if (attendance >=75 &&marks >=40) {printf("You are eligible for final exams.\n");}
		else
		{
			printf("You are not eligible for final exams!");
		}
	return 0;
}//