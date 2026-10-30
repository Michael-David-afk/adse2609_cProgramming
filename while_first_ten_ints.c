//This program demonstrates the use of the whil loop to display the first 10 integers


//Pre-processor Directive
#include <stdio.h>

int main()
{
    //Variable to be used in the program
    int i = 1; //Declaration & Initilization

    //use the while loop to diplay the first ten integers
    while(i <= 10)
    {
        printf("\nCurrent value of i is: %2d", i);
        i++;
    }



    return 0;
}

