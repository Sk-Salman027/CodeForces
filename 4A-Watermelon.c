#include <stdio.h>

int main()
{
    // variable declaration
    int w;
    // take input
    scanf("%d", &w);
    // input validation
    if (w >= 1 && w <= 100)
    { // check condtion for division
        if (w > 2 && (w % 2 == 0))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}