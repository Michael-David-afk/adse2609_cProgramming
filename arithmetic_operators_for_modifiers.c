/*This program demonstrates the various arithmetic operators in C & field width modifiers to align the output. */

//Pre-processor Directive
#include <stdio.h>

int main()
{
    //Variables to be used in the program
    int firstNum = 8, secondNum = 5;

    //Display the values of the above variables
    printf("Value of 'firstNum' and 'secondNum' are %d and %d respectively.", firstNum, secondNum);

    //Perform the various arithmetic operation and display their results
    printf("\n%15s: %d+%d = %2d","Addition", firstNum, secondNum, firstNum + secondNum);
    printf("\n%15s: %d-%d = %2d","Subtraction", firstNum, secondNum, firstNum - secondNum);
    printf("\n%15s: %dx%d = %2d","Multiplication", firstNum, secondNum, firstNum * secondNum);
    printf("\n%15s: %d÷%d = %2d","Division", firstNum, secondNum, firstNum / secondNum);
    printf("\n%15s: %d%%%d = %2d","Modulus", firstNum, secondNum, firstNum % secondNum);

    return 0;
}
