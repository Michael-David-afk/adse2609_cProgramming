//This program that stores and displays a student's details.

//Pre-processor Directive
#include <stdio.h>

int main()
{

    char name[] = "Michael";
    int age = 17;
    float average_mark = 72.5;
    char grade = 'b';

    printf("Student's Name: %s\n", name);
    printf("Student's age: %d\n", age);
    printf("Average Mark: %.2f\n", average_mark);
    printf("Grade: %c\n", grade);

    return 0;
}
