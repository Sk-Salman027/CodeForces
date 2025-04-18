#include <stdio.h>

int main()
{
    // variable declaration
    int x;
    // take distance
    scanf("%d", &x);
    // minimum step count
    int step = x / 5;
    if (x % 5 != 0)
    {
        step++;
    }
    printf("%d\n", step);
}