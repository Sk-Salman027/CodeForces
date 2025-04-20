#include <stdio.h>

int main()
{
    // variable declaration
    int n, count = 0, problem;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &problem);
        if (problem == 0)
        {
            count++;
        }
    }
    if (count == n)
    {
        printf("EASY\n");
    }
    else
    {
        printf("HARD\n");
    }
    return 0;
}