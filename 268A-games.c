#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int home[n], guest[n];

    // Reading home and guest uniform colors
    for (int i = 0; i < n; ++i)
    {
        scanf("%d %d", &home[i], &guest[i]);
    }

    int count = 0;

    // Counting games where the host team wears the guest uniform
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (i != j && home[i] == guest[j])
            {
                count++;
            }
        }
    }

    printf("%d\n", count);

    return 0;
}
