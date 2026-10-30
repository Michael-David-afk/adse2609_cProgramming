// This program calculates the total cost of items purchased at a shop.

#include <stdio.h>

int main ()
{
    double price, total, discount = 0.0, final_amount;
    int quantity;

    printf("Please Enter the price of the Item:");
    scanf("%lf", &price);

    printf("Please Enter the quantity purchased:");
    scanf("%d", &quantity);

    total = price * quantity;

    if(total >= 1000)
        discount = total * 0.10;

    final_amount = total - discount;

    printf("=============================================================");
    printf("\nTotal Cost came to: Ksh %.2f\n", total);
    printf("Discount Given:  Ksh %.2f\n", discount);
    printf("Amount Payable:  Ksh %.2f\n", final_amount);
    printf("=============================================================");

    return 0;
}
