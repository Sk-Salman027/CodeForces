#include <stdio.h>

int main()
{ // variable declaration
    int a, b, count = 0;
    // take input
    scanf("%d %d", &a, &b);
    while (1)
    {
        a *= 3;
        b *= 2;
        count++;
        if (a > b)
        {
            break;
        }
    }
    printf("%d\n", count);
    return 0;
}