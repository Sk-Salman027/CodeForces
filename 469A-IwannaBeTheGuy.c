#include <stdio.h>

#define MAXN 105

int main()
{
    int n;
    int levels[MAXN] = {0};
    int p, q;

    // Read input
    scanf("%d", &n);

    // Read levels Little X can pass
    scanf("%d", &p);
    for (int i = 0; i < p; ++i)
    {
        int level;
        scanf("%d", &level);
        levels[level] = 1;
    }

    // Read levels Little Y can pass
    scanf("%d", &q);
    for (int i = 0; i < q; ++i)
    {
        int level;
        scanf("%d", &level);
        levels[level] = 1;
    }

    // Check if all levels from 1 to n are passable
    int can_pass_all = 1;
    for (int i = 1; i <= n; ++i)
    {
        if (levels[i] == 0)
        {
            can_pass_all = 0;
            break;
        }
    }

    // Output the result
    if (can_pass_all)
    {
        printf("I become the guy.\n");
    }
    else
    {
        printf("Oh, my keyboard!\n");
    }

    return 0;
}
