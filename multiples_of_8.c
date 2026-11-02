/* This program that displays the first 5 multiples of 8 using 'while" loop.*/

//Pre-processor Directive
#include <stdio.h>

int main()
{
    //Variable(s) to be used in the program
    int n = 1;

    while (n <= 5)
    {
        printf("%d X 8 = %2d\n", n, n * 8);
        n++;
    }
    return 0;
}
