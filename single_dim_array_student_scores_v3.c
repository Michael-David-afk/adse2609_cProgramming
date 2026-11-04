//This program displays the students's average score in a class

//Pre-processor Directive
#include <stdio.h>

int main()
{
    unsigned short score[5];
    unsigned short i;
    float meanScore;
    unsigned int total = 0;
    unsigned short highestScore = 0, lowestScore = 120;

    //Prompt user for the student's scores
    for (i = 0; i < 5; i++)
    {
        printf("Please enter the score for the student %d: \n", i + 1);
        scanf("%hu", &score[i]);

        total += score[i];

        //Get the highest & lowest scores in the class
        if (score[i] > highestScore)
            highestScore = score[i];
        if (score[i] < lowestScore)
            lowestScore = score[i];
    }


    //Calculate the mean/average score
    meanScore = total/5.0;

    //Display the details
    printf("\nClass Exam Score Details");
    printf("\n--------------------------------------------------------------------------");
    printf("\n Total Score: %d", total);
    printf("\n The class average score is %.2f", meanScore);
    printf("\n The highest score in the class is : %hu", highestScore);
    printf("\n The lowest score in the class is : %hu", lowestScore);
    printf("\n--------------------------------------------------------------------------");

    return 0;
}

