/*This program demonstrates the various comparison and logical operators in C.
To compare two integers and display the results

N/B: Comparison operators produce 1 for "True" & 0 for "False" */

//Pre-processor Directive
#include <stdio.h>

int main()
{
    //Variables to be used in the program
    int firstNum = 10, secondNum = 7;

    //Display the values of the above variables
    printf("Values of 'firstNum' & 'secondNum' are %d and %d respectively", firstNum, secondNum);

    //Demonstrate the various comparison operators
    printf("\n==============================================================================================");

    printf("\nCOMPARISON OPERATORS");
    printf("\n==============================================================================================");

    //Equal to '==' operator
    printf("\n%d equal to (==) %d ? %d", firstNum, secondNum, firstNum == secondNum);
    //Not Equal to '!=' operator
    printf("\n%d equal to (!=) %d ? %d", firstNum, secondNum, firstNum != secondNum);
    //Greater Than to '>' operator
    printf("\n%d equal to (>) %d ? %d", firstNum, secondNum, firstNum > secondNum);
    //Greater Than or Equal to to '>=' operator
    printf("\n%d equal to (!=) %d ? %d", firstNum, secondNum, firstNum >= secondNum);
    //Less Than to '<' operator
    printf("\n%d equal to (<) %d ? %d", firstNum, secondNum, firstNum < secondNum);
    //Less Than or Equal to to '<=' operator
    printf("\n%d equal to (!=) %d ? %d", firstNum, secondNum, firstNum <= secondNum);


    printf("\n==============================================================================================");

    //Demonstrate the various Logical operators
    printf("\nLOGICAL OPERATORS");
    printf("\n==============================================================================================");

    //Logical AND : Evaluates to true when both expressions are true
    printf("\nLOGICAL AND (&&)");
    printf("\n(%d > %d) && (%d > 0) = %d", firstNum, secondNum, firstNum,
     (firstNum > secondNum) && (firstNum >0));

    //Logical OR : Evaluates to true when atleast one expressions is true
    printf("\nLOGICAL OR (||)");
    printf("\n(%d < %d) || (%d < 0) = %d", firstNum, secondNum, firstNum,
     (firstNum < secondNum) || (firstNum < 0));

    //Logical NOT : Reverses truth values of expression (true > false) & (false > true)
    printf("\nLOGICAL NOT (!)");
    printf("\n(%d < %d) = %d \n! (%d < %d) = %d", firstNum, secondNum,(firstNum < secondNum),
     firstNum, secondNum, !(firstNum < secondNum));

    printf("\n==============================================================================================");


    return 0;
}

