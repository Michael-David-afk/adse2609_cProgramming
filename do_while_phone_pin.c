/*This program accepts the PIN number from the users phone & if its correct, it unlocks.
When the incorrect the PIN is entered 3 times the phone is blocked */

//Pre-processor Directive
#include <stdio.h>

int main()
{
    //Variable(s) to be used in the program
    unsigned int userPin;
    int count = 3;
    int PIN = 1254;

    do
    {
        //Prompt user for their PIN
        printf("Please enter your PIN: ");
        scanf("%u", &userPin);

        //Compare the input PIN & he Stored PIN
        if(userPin == PIN)
        {
        // printf("Welcome user");
        break; //exit loop
        }
        else
        {
            count --;
            if(count > 0)
            {
                printf("Sorry, the PIN entered is incorrect\n");
                printf("%d attempts left\n", count);
            }
        }
    }while(count > 0);
    printf(count > 0 ? "Welcome user" : "Sorry, Your phonr is blocked!\n Unlock using the PUK.\n");

    return 0;
}

