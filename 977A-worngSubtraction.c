#include <stdio.h>

int main()
{
    // variable declaration
    int n, k, rem;
    // take input
    scanf("%d %d", &n, &k);
    // find the last digit

    for (int i = 1; i <= k; i++)
    {
        // find the last digit
        rem = n % 10;
        if (rem == 0)
        {
            n /= 10;
        }
        else
        {
            n -= 1;
        }
    }

    printf("%d\n", n);

    return 0;
}