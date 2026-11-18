/* C program that accepts a student  fixed amount of money every month for six months.
    The program then calculates the accumulated savings after each month. */

#include <stdio.h>

int main(void)
{
    // Declare variables
    int month;
    float monthlySaving;
    float totalSavings = 0.0;

    // Request the planned monthly saving
    printf("MONTHLY SAVINGS TRACKER\n");
    printf("-----------------------\n");

    printf("Enter the amount you intend to save each month: KSh ");
    scanf("%f", &monthlySaving);

    // Check whether the saving amount is valid
    if (monthlySaving <= 0)
    {
        printf("Invalid amount. Please enter a positive value.\n");
    }
    else
    {
        // Repeat the savings calculation for six months
        for (month = 1; month <= 6; month++)
        {
            // Add the monthly saving to the accumulated amount
            totalSavings = totalSavings + monthlySaving;

            // Display the accumulated savings after each month
            printf("Month %d: Total savings = KSh %.2f\n",
                   month, totalSavings);
        }

        // Display the final savings balance
        printf("\nFinal savings after six months: KSh %.2f\n",
               totalSavings);
    }

    return 0;
}
