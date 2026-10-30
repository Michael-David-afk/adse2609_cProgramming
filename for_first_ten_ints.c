//This program demonstrates the use of the for loop to display the first 10 integers


//Pre-processor Directive
#include <stdio.h>

int main()
{
    //Variable to be used in the program
    int i;

    //use the for loop to diplay the first ten integers
    for(i = 1; i <= 10; i++)
        printf("\nCurrent value of i is: %2d", i);

    return 0;
}

