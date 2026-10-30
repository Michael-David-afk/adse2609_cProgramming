//This program demonstrates the switch case construct to display a restaurant menu.


//Pre-processor Directive
#include <stdio.h>

int main()
{
    //Variables to be used in the program
    int choice;

    //Display the restaurant menu
    printf("\n==============================================================================================");
    printf("\nWelcome To The ADSE2605 Restaurant");
    printf("\n==============================================================================================");

    printf("\n1. Oklahoma Burger                          - Kes 600");
    printf("\n2. Beef Smash Loaded Fries                  - Kes 1200");
    printf("\n3. BBQ Chicken Bites                        - Kes 550");
    printf("\n4. Parmesan Shrimp pasta                    - Kes 1000");
    printf("\n5. Lotus Biscof Milkshake                   - Kes 600");

    printf("\n==============================================================================================");

    //Prompt user to select a food item
    printf("\nPlease enter the meal/drink of your choice(1-5): \n");
    scanf("%d", &choice);

    //Use the switch case to determine the selected item
    //Each case represents one item on the restaurant menu
    switch(choice)
    {
    case 1:
        printf("You selected Oklahoma Burger. Price: Kes.600\nYour meal will be served shortly");
        break;
     case 2:
        printf("You selected Beef Smash Loaded Fries. Price: Kes.1200\nYour meal will be served shortly");
        break;
    case 3:
        printf("You selected BBQ Chicken Bites. Price: Kes.550\nYour meal will be served shortly");
        break;
    case 4:
        printf("You selected Parmesan Shrimp pasta. Price: Kes.1000\nYour meal will be served shortly");
        break;
    case 5:
        printf("You selected Lotus Biscof Milkshake. Price: Kes.600\nYour drink will be served shortly");
        break;
    default://Handle choices equal to or less than '0' or greater than '5'
        printf("Error: Please enter a valid values between (0-5)\n");
        break;
    }

    return 0;
}

