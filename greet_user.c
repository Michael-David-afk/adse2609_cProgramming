/*This program asks/prompts the user for their name, reads the input
from the console, & displays a greeting message */

//Pre-processor Directive
#include <stdio.h>

int main()
{
    //character array to hold the user's name
    char name[80];

    //Prompt the user for their name
    printf("Please enter your name:\n");

    //Read in user's name
    gets(name);

    //Greet the user
    printf("\nHello \"%s\" from C Programming!", name);

    return 0;
}
