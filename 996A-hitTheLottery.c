#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int count = 0;

    // Use 100 dollar bills
    count += n / 100;
    n %= 100;

    // Use 20 dollar bills
    count += n / 20;
    n %= 20;

    // Use 10 dollar bills
    count += n / 10;
    n %= 10;

    // Use 5 dollar bills
    count += n / 5;
    n %= 5;

    // Use 1 dollar bills
    count += n;

    printf("%d\n", count);

    return 0;
}
