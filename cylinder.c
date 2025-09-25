//A c program of a cylinder

/*
Name:Mogoi Ignatius
Reg no: PA106/G/28834/25
Desctiption:Calculation of surface area and volume of a cylinder
*/

#include <stdio.h>
#define PI 3.14159

int main() 
{
    float radius;
	float height;
	float volume;
	float surface;
    
    //input values
    
    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);

	//calculation
	
    volume = PI * radius * radius * height;
 	surface =PI* radius *radius + PI * 2 * radius * height;
 	
 	//output results
 	
    printf("The volume of the cylinder : %.2fcentimeters\n", volume);
    printf("The surface area of the cylinder is: %fcentimeters\n",surface);

    return 0;
}