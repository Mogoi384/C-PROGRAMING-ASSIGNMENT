//A C PROGRAM FOR CALCULATE FARE
/*NAME:MOGOI IGNATIUS
REG NO:PA106/G/28834/25
DESCRIPTION:A C program that cALCULATES FARE
*/
#include <stdio.h>

float calculateFare(float distance) {
    const float RATE_PER_KM = 50.0;
    return distance * RATE_PER_KM;
}int main()
{
	 printf("\n\t Fare Calculation .\n");
    float distance1 = 10.5;
    float distance2 = 25.0;
    
    printf("Distance: %.1f km, Fare: KSh. %.2f\n", distance1, calculateFare(distance1));
    printf("Distance: %.1f km, Fare: KSh. %.2f\n", distance2, calculateFare(distance2));

	return 0;
}