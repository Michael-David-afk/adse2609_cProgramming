#include <stdio.h>

int main()
{
    int amount, prod1, prod2, total, change

    printf("Amount: ksh;\n");
    scanf("%d", &amount);

    printf("Amount: ksh;\n");
    scanf("%d", &prod1);

    printf("Amount: ksh;\n");
    scanf("%d", &prod2);

    total = prod1 + prod2;
    change = amount - total;

    printf("change: ksh. %d\n", change);

    return 0;

}
