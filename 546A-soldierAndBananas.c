#include <stdio.h>

int main()
{
    // variable declaration
    int initialDollars, totalDollars, numberOfBananas, borrow, cost = 0;
    // take input
    scanf("%d %d %d", &initialDollars, &totalDollars, &numberOfBananas);
    for (int i = 1; i <= numberOfBananas; i++)
    {
        // calculate total cost for bananas
        cost += initialDollars * i;
    }
    // calculate borrow amount
    borrow = cost - totalDollars;
    if (borrow > 0)
    {
        printf("%d\n", borrow);
    }
    else
    {
        printf("0\n");
    }
}