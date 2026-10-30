/*This program accepts the radius of a circle from the users, calculates & displays
its area, & circumference*/

//Pre-processor Directive
#include <stdio.h>
#define mypi 3.141593 //Define pi as a constant

//Main function provides the entry point to the program
int main()
{
    //Variables to be used in the program
    float radius, area, circumference;

    //Prompt user for the circle's radius
    printf("Please enter the radius of the circle in cm\n");
    scanf("%f",&radius);

    //calculate the area & circumference of a circle
    area = mypi*radius*radius;
    circumference = mypi * (radius *2);

    //Display the circle's dimensions
    printf("\nCircle's cicumference");
    printf("\n---------------------------------------------------------");
    printf("\n%-13s: %6.2f cm.", "Radius", radius);
    printf("\n%-13s: %6.2f cm.", "Area", area);
    printf("\n%-13s: %6.2f cm.", "Circumference", circumference);

    printf("\n---------------------------------------------------------");

    return 0;
}

