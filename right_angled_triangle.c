/*This program accepts the base & height of a right angled triangle from the users, calculates & displays
its area, & perimeter, using in-built functions.*/

//Pre-processor Directive
#include <stdio.h>
#include <math.h>

//Main function provides the entry point to the program
int main()
{
    //Variables to be used in the program
    float base, height, area, perimeter, hypotenuse;

    //Prompt user for the triangle's base
    printf("Please enter the Base of the triangle in cm\n");
    scanf("%f",&base);
    //Prompt user for the triangle's height
    printf("Please enter the Height of the triangle in cm\n");
    scanf("%f",&height);

    //calculate the triangle's hypotenuse
    hypotenuse = sqrt((pow(height,2)+ pow(base,2)));

    //calculate the area & circumference of a circle
    area = .5*base*height;
    perimeter = base+height+hypotenuse;

    //Display the circle's dimensions
    printf("\nCircle's Dimensions");
    printf("\n---------------------------------------------------------");
    printf("\n%-13s: %6.2f cm.", "Base", base);
    printf("\n%-13s: %6.2f cm.", "Height", height);
    printf("\n%-13s: %6.2f cm.", "Hypotenuse", hypotenuse);
    printf("\n%-13s: %6.2f cm².", "Area", area);
    printf("\n%-13s: %6.2f cm.", "Perimeter", perimeter);

    printf("\n---------------------------------------------------------");

    return 0;
}

