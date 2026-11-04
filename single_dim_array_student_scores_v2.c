//This program displays the students's average score in a class

//Pre-processor Directive
#include <stdio.h>

int main()
{
    unsigned short score[5];
    unsigned short i;
    float meanScore;
    unsigned int total = 0;

    //Prompt user for the student's scores
    for (i = 0; i < 5; i++)
    {
        printf("Please enter the score for the student %d: \n", i + 1);
        scanf("%hu", &score[i]);

        total += score[i];
    }


    //Calculate the mean/average score
    meanScore = total/5.0;

    //Display the average score
    printf("\n The class average score is %.2f", meanScore);

    return 0;
}

