#include <stdio.h>

int main()
{
    // variable declaration for test case
    int n, X = 0;
    // take input
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        // string declaration
        char bit[10];
        // take a string
        scanf("%s", bit);
        for (int i = 0; i < 10; i++)
        {
            if (bit[i] == '+')
            {
                ++X;
                break;
            }
            else if (bit[i] == '-')
            {
                --X;
                break;
            }
        }
    }
    printf("%d\n", X);
    return 0;
}