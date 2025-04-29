#include <stdio.h>
/*
Explanation:
We use long long for a and b because values can go up to 1e9.

For each test case:

Compute a % b.

If remainder is 0 → a is divisible by b → print 0.

Otherwise, print b - (a % b) to get the minimal number of increments required.

*/
int main()
{
    int n;
    scanf("%d", &n);
    long long a, b;
    while (n--)
    {
        scanf("%lld %lld", &a, &b);
        if (a % b == 0)
        {
            printf("0\n");
        }
        else
        {
            printf("%d\n", b - (a % b));
        }
    }

    return 0;
}