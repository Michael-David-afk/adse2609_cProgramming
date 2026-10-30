// This program that displays a restaurant bill in a neat, tabular format.

#include <stdio.h>

int main()
{
    int number, i;

    printf("Please Enter a Positive Integer:");
    scanf("%d", &number);

    if(number <= 0){
        printf("Error: Please enter a number that is positive.\n");
        return 1;
    }

    printf("\n Multiplication table for %d\n", number);
    printf("------------------------------------------\n");

    for(i = 1; i <= 12; i++){
        printf("%d × %d = %d\n", number, i, number*i);
    }

    return 0;
}
