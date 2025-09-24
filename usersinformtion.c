//A C PROGRAM PROMPTING THE USER TO INPUT THEIR DETAILS
/*
Name:MOGOI IGNATIUS
Reg no:PA106/G/28834/25
Desription:Program prompting user to input their details
*/
#include <stdio.h>
#include <string.h>

int main(){
    float height;
    char id_number[9];
    double bank_balance;

    printf("Enter your height in meters: ");
    scanf("%f", &height);

    printf("Enter your ID number (9 characters): ");
    scanf("%s", id_number);

    printf("Enter your bank balance: ");
    scanf("%lf", &bank_balance);
    
    printf("\n");
    printf("******THE USER'S INFORMATION********\n");
    printf("Height: %.2f meters\n", height);
    printf("ID Number: %s\n", id_number);   
    printf("Bank Balance: %.2f\n", bank_balance);
    return 0;
}