//This program displays a pattern of increase

//Pre-processor Directive
#include <stdio.h>

int main()
{
    unsigned short int i = 1, a;

    do
    {
        for (a = 1; a <= i; a++)
            printf("%hu ", a);
            printf("\n");
            i++;
    }while(i <= 7);

    return 0;
}

