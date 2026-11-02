/* This program that displays the even multiples of 7 between 10 to 70 inclusive.*/

//Pre-processor Directive
#include <stdio.h>

int main()
{
    //Variable(s) to be used in the program
    unsigned int i;

    for(i = 10; i <= 70; i++)
    {
        if(i % 7 == 0 && i % 2 == 0)
            printf("\n%02d is evenly divisible by 7", i);
    }

    return 0;
}

