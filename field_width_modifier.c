// This demonstrates the use of field width modifiers in displaying output tot the convo

//Pre-processer Diretive
#include <stdio.h>

int main()
{

    //Character array to hold the user's name
    char userString[] = ("Programming");
    //Integer Variables
    int num1 = 555, num2 = 8, num3 = 48;
    //Long Variable
    long int largeNum = 123456789;
    //Float Variable
    float myPI = 3.1415926;

    //Display the above variables using various fields width modifiers
    printf("num1 with no field width modifier. \n [%d]", num1);
    printf("\n num1 with left justify ' - ' field width modifier. \n [%-10d]", num1);
    printf("\n num1 with minimum field width modifier. \n [%10d]", num1);
    printf("\n num1 with minimum field width modifier padded with leading zeros ' 0 '. \n [%010d]", num1);

    printf("\n myPI with a 2 decimal place precision modifier. \n [%.2f] ", myPI);
    printf("\n myPI with a minimum field width modifier & 2 decimal place precision modifier. \n [%8.5f] ", myPI);

    printf("\n userString \%s\ "" with a minimum number of characters to display specifier. \n [%.3s]", userString, userString);

    printf("\n largeNum with a long int specfier.\n [%1d]", largeNum);
    printf("\n num3 display with a variable for the field width modifier.\n [%*d]", num2, num3);

    return 0;
}
