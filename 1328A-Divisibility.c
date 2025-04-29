#include <stdio.h>

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