/*This program demonstrates the various comparison and logical operators in C.
To compare two integers and display the results

N/B: The ternary operator (?:) will be used to convert 0-> False & 1-> True*/

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
    printf("\n%d equal to (==) %d ? %s", firstNum, secondNum, (firstNum == secondNum) == 1?"True":"False");
    //Not Equal to '!=' operator
    printf("\n%d Not equal to (!=) %d ? %s", firstNum, secondNum, (firstNum != secondNum) == 1?"True":"False");
    //Greater Than to '>' operator
    printf("\n%d Greater than (>) %d ? %s", firstNum, secondNum, (firstNum > secondNum) == 1?"True":"False");
    //Greater Than or Equal to to '>=' operator
    printf("\n%d Greater than or equal to (>=) %d ? %s", firstNum, secondNum, (firstNum >= secondNum) == 1?"True":"False");
    //Less Than to '<' operator
    printf("\n%d Less than (<) %d ? %s", firstNum, secondNum, (firstNum < secondNum) == 1?"True":"False");
    //Less Than or Equal to to '<=' operator
    printf("\n%d Less than or equal to (<=) %d ? %s", firstNum, secondNum, (firstNum <= secondNum) == 1?"True":"False");


    printf("\n==============================================================================================");

    //Demonstrate the various Logical operators
    printf("\nLOGICAL OPERATORS");
    printf("\n==============================================================================================");

    //Logical AND : Evaluates to true when both expressions are true
    printf("\nLOGICAL AND (&&)");
    printf("\n(%d > %d) && (%d > 0) is %s", firstNum, secondNum, firstNum,
     ((firstNum > secondNum) && (firstNum >0)) == 1?"True":"False");

    //Logical OR : Evaluates to true when atleast one expressions is true
    printf("\nLOGICAL OR (||)");
    printf("\n(%d < %d) || (%d < 0) is %s", firstNum, secondNum, firstNum,
     ((firstNum < secondNum) || (firstNum < 0)) == 1?"True":"False");

    //Logical NOT : Reverses truth values of expression (true > false) & (false > true)
    printf("\nLOGICAL NOT (!)");
    printf("\n(%d < %d) is %s \n(%d < %d) is %s", firstNum, secondNum,((firstNum < secondNum)== 1?"True":"False"),
     firstNum, secondNum, !((firstNum < secondNum)) == 1?"True":"False");

    printf("\n==============================================================================================");

    //N/B: Ternary operators is the short-hand form for an if..else constuct

    return 0;
}

