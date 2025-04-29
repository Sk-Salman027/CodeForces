#include <stdio.h>

int main()
{
    int s[4];
    int i, j, count = 0;

    // Read input colors
    for (i = 0; i < 4; i++)
    {
        scanf("%d", &s[i]);
    }

    // Count duplicates
    for (i = 0; i < 4; i++)
    {
        for (j = i + 1; j < 4; j++)
        {
            if (s[i] == s[j])
            {
                count++;
                break; 
            }
        }
    }


    printf("%d\n", count);

    return 0;
}
