/*This program demonstrates the various arithmetic operators in C. */

//Pre-processor Directive
#include <stdio.h>

int main()
{
    //Variables to be used in the program
    int firstNum = 8, secondNum = 5;

    //Display the values of the above variables
    printf("Value of 'firstNum' and 'secondNum' are %d and %d respectively.", firstNum, secondNum);

    //Perform the various arithmetic operation and display their results
    printf("\nAddition: %d+%d = %d", firstNum, secondNum, firstNum + secondNum);
    printf("\nSubtraction: %d-%d = %d", firstNum, secondNum, firstNum - secondNum);
    printf("\nMultiplication: %dx%d = %d", firstNum, secondNum, firstNum * secondNum);
    printf("\nDivision: %d÷%d = %d", firstNum, secondNum, firstNum / secondNum);
    printf("\nModulus: %d%%%d = %d", firstNum, secondNum, firstNum % secondNum);

    return 0;
}
