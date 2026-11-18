/* C Program that displays a simple restaurant menu allows the customer to pick at least one or more menu items
& calculates the total bill using a do...while loop*/

#include <stdio.h>

int main()
{
    //Variables to be used in the program
    float itemPrice, totalBill = 0.0;
    int choice, quantity;
    char continueOrdering;

    printf("\nADSE2609 RESTAURANT SYSTEM");
    printf("\n=====================================\n");

    //Allow customers to place at least one order

    do
    {
        printf("\nADSE2609 DAILY SALES RECORD");
        printf("\n=====================================\n");

        printf("\n1.  Tea                               - Kes 50");
        printf("\n2.  Rolex                           - Kes 80");
        printf("\n3.  Coffee                         - Kes 100");
        printf("\n4.  Smocha                        - Kes 150");
        printf("\n5.  Juice                            - Kes 100");

        //Request the User to enter their choice
        printf("\nPlease enter your choice (1 - 5):\n");
        scanf("%d", &choice);

        switch(choice)
        {
        case 1:
            itemPrice = 50;
            printf("\nYou Selected Tea");
            break;
        case 2:
            itemPrice = 80;
            printf("\nYou Selected Rolex");
            break;
        case 3:
            itemPrice = 100;
            printf("\nYou Selected Coffee");
            break;
        case 4:
            itemPrice = 150;
            printf("\nYou Selected Smocha");
            break;
        case 5:
            itemPrice = 100;
            printf("\nYou Selected Juice");
            break;

            //When a user gives a number below 1 & above 5
            default:
            itemPrice = 0;
            printf("\nInvalid Menu Selection");
        }

        //process the order only when selection is valid
        if(itemPrice > 0)
        {
            //Request the user for the desired quantity
            printf("\nEnter quantity desired: \n");
            scanf("%d", &quantity);

            if (quantity > 0)
            {
                //Add the cost of the order of the total bi;;
                totalBill += (itemPrice * quantity);
                printf("\nItem Added to your Order");
            }
            else
            {
                printf("\nInvalid quantity, No items were added");
            }
        }

        //Ask the customer whether they'd like to order another item
        printf("\n Would you like to order another item (Y/N): ");
        scanf("%c", &continueOrdering);

    } while(continueOrdering == 'Y' || continueOrdering == 'N');

    // Display the final bill

    printf("\nFINAL BILL\n");

    printf("----------\n");

    printf("Total amount payable: KSh %.2f\n", totalBill);


    printf("\nThank you for dining with us!\n");


    return 0;
}

