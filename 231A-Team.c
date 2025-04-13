#include <stdio.h>

int main()
{
    // variable declaration for test case and problem solution count
    int n, count = 0;
    // take input for test case
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int patya, vasya, tonya;
        scanf("%d %d %d", &patya, &vasya, &tonya);
        // condition check
        if (patya == 1 && vasya == 1 && tonya == 1)
        {
            ++count;
        }
        else if (patya == 1 && vasya == 1)
        {
            ++count;
        }
        else if (patya == 1 && tonya == 1)
        {
            ++count;
        }
        else if (vasya == 1 && tonya == 1)
        {
            ++count;
        }
    }

    printf("%d\n", count);

    return 0;
}