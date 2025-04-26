#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int position[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &position[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (position[j] == i)
            {
                printf("%d ", j + 1);
            }
        }
    }

    return 0;
}
