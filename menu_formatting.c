// This program that displays a restaurant bill in a neat, tabular format.

#include <stdio.h>

int main()
{
    int c_qty = 2, b_qty = 1, j_qty = 3;
    double  c_price = 150.00, b_price = 350.00, j_price = 100.00;

    double c_total = c_qty * c_price;
    double b_total = b_qty * b_price;
    double j_total = j_qty * j_price;
    double grand_total = c_total + b_total + j_total;

    printf("%-15s %8s %12s %12s\n", "item", "Quantity", "Unit Price", "Total Price");
    printf("=======================================================================\n");
    printf("%-15s %8s %12s %12s\n", "Chips", c_qty, c_price, c_total);
    printf("%-15s %8s %12s %12s\n", "Beef Burger", b_qty, b_price, b_total);
    printf("%-15s %8s %12s %12s\n", "Fresh Juice", j_qty, j_price, j_total);
    printf("=======================================================================\n");
    printf("%-15s %8s %12s %12s\n", "Grand Total","","", grand_total);

    return 0;
}
