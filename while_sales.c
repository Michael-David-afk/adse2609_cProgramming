/* C Program that accepts the value of each sales in a shop & calculates the tota; sales using a 'while' loop.
The shop attendant enters zero when there are no more customers to seve. */

#include <stdio.h>

int main()
{
    //Variables to be used in the program
    float purchaseAmount, totalSales = 0;
    int customerCount = 0;

    printf("\nADSE2609 DAILY SALES RECORD");
    printf("\n=====================================\n");

    //Request/Prompt the user for the first purchase amount
    printf("\nPlease enter purchase amount (0 to finish): Kes. \n");
    scanf("%f", &purchaseAmount);

    //continue accepting purchase until zero is entered
    while(purchaseAmount != 0)
    {
        //check whether the purchase amount is valid
        if(purchaseAmount > 0 )
        {
            //add the purchase to the total sales amount
            totalSales + purchaseAmount;

            //increase the number of customers served
            customerCount++;

            printf("\nPurchase recorded succesfully");
        }
        else
        {
            printf("\nInvalid purchase amount. Please try again.");
        }

        //Request/Prompt the user for the next purchase amount
        printf("\nPlease enter purchase amount (0 to finish): Kes. \n");
        scanf("%f", &purchaseAmount);
    }

    printf("\nADSE2609 DAILY SALES SUMMARY");
    printf("\n=====================================\n");

    printf("\nCustomers Served: %d", customerCount);
    printf("\nTotal Sales: %.2f", totalSales);

    return 0;
}
