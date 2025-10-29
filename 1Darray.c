//1D ARRAY WEEKLY REVENUE TRACKER
/*
NAME:MOGOI IGNATIUS
REG NO:PA106/G/28834/25
DESCRIPTION:a 1d array for a weekly revenue tracker
*/

#include <stdio.h>

int main() {
    float revenue[7];
    float total = 0, average;
    int i;
    
    printf("Enter daily revenue for 7 days:\n");
    for(i = 0; i < 7; i++) {
        printf("Day %d: $", i + 1);
        scanf("%f", &revenue[i]);
        total += revenue[i];
    }
    
    average = total / 7;
    
    printf("\nTotal Weekly Revenue: $%.2f\n", total);
    printf("Average Daily Revenue: $%.2f\n", average);
    
    return 0;
}