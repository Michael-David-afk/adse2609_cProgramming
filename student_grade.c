// This Program that determines a student's examination result.

#include <stdio.h>

int  main()
{
    int mark;

    printf("Please Enter Your Marks (0-100): ");
    scanf("%d", &mark);

    if(mark < 0 || mark > 100){
        printf("Invalid mark, Please enter a value between 0 & 100\n");
    }else if(mark >= 70){
        printf("Result: Distinction\n");
    }else if(mark >= 60){
        printf("Result: Credit\n");
    }else if(mark >= 50){
        printf("Result: Pass\n");
    }else{
        printf("Results: Fail\n");
    }

    return 0;
}
