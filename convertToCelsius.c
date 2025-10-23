//A C PROGRAM FOR CONVERT TO CELSIUS
/*NAME:MOGOI IGNATIUS
REG NO:PA106/G/28834/25
DESCRIPTION:A c program that converts  to celsius
*/
#include <stdio.h>

float convertToCelsius(float fahrenheit) {
    return (fahrenheit - 32.0) * (5.0 / 9.0);
}int main(int argc, char** argv)
{
	 printf("\n\t Temperature Conversion:  \n");
    float fahrenheit1 = 32.0;  // Freezing point
    float fahrenheit2 = 98.6;  // Normal body temperature
    float fahrenheit3 = 212.0; // Boiling point
    
    printf("Fahrenheit: %.1f°F, Celsius: %.2f°C\n", fahrenheit1, convertToCelsius(fahrenheit1));
    printf("Fahrenheit: %.1f°F, Celsius: %.2f°C\n", fahrenheit2, convertToCelsius(fahrenheit2));
    printf("Fahrenheit: %.1f°F, Celsius: %.2f°C\n", fahrenheit3, convertToCelsius(fahrenheit3));

	return 0;
}