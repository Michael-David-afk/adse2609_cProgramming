
#include <stdio.h>
#include <string.h>

int main()
{
    // Variables to be used in the program
    unsigned short numOfStudents, numOfModules;
    unsigned short i, z;

    // Prompt user for number of students and modules
    printf("Please enter the number of students in the class: ");
    scanf("%hu", &numOfStudents);

    printf("Please enter the number of modules/subjects: ");
    scanf("%hu", &numOfModules);

    // Arrays to store student information
    unsigned int total[numOfStudents];
    float mean[numOfStudents];
    char grade[numOfStudents];

    // Arrays to store comments, scores and names
    char comment[numOfStudents][20];
    unsigned short studentScore[numOfStudents][numOfModules];

    char studentNames[numOfStudents][20];
    char moduleNames[numOfModules][15];

    // Read student names
    for (i = 0; i < numOfStudents; i++)
    {
        printf("Please enter the name of student %hu: ", i + 1);
        scanf("%19s", studentNames[i]);
    }

    // Read module names
    for (i = 0; i < numOfModules; i++)
    {
        printf("Please enter the name of module %hu: ", i + 1);
        scanf("%14s", moduleNames[i]);
    }

    // Read student scores and calculate totals
    for (i = 0; i < numOfStudents; i++)
    {
        total[i] = 0;

        printf("\nEntering scores for %s\n", studentNames[i]);

        for (z = 0; z < numOfModules; z++)
        {
            printf("Please enter %s's score in %s: ",
                   studentNames[i], moduleNames[z]);

            scanf("%hu", &studentScore[i][z]);

            total[i] += studentScore[i][z];
        }

        // Calculate mean score
        mean[i] = (float)total[i] / numOfModules;

        // Assign grade
        if (mean[i] >= 70)
            grade[i] = 'A';
        else if (mean[i] >= 60)
            grade[i] = 'B';
        else if (mean[i] >= 50)
            grade[i] = 'C';
        else if (mean[i] >= 40)
            grade[i] = 'D';
        else
            grade[i] = 'E';

        // Assign comments using switch-case
        /*switch (grade[i])
        {
            case 'A':
                strcpy(comment[i], "Excellent!");
                break;

            case 'B':
                strcpy(comment[i], "Very Good!");
                break;

            case 'C':
                strcpy(comment[i], "Good");
                break;

            case 'D':
                strcpy(comment[i], "Fair");
                break;

            case 'E':
                strcpy(comment[i], "Try Harder");
                break;

            default:
                strcpy(comment[i], "Invalid Grade");
        }*/

    }

    // Display results
    printf("\n\n");
    printf("====================================================================\n");
    printf("%-15s", "Student Name");

    for (z = 0; z < numOfModules; z++)
    {
        printf("%-12s", moduleNames[z]);
    }

    printf("%-10s %-10s %-8s %-15s\n",
           "Total", "Average", "Grade", "Comment");

    printf("====================================================================\n");

    for (i = 0; i < numOfStudents; i++)
    {
        printf("%-15s", studentNames[i]);

        for (z = 0; z < numOfModules; z++)
        {
            printf("%-12hu", studentScore[i][z]);
        }

        printf("%-10u %-10.2f %-8c %-15s\n",
               total[i], mean[i], grade[i], comment[i]);
    }

    printf("====================================================================\n");

    return 0;
}

