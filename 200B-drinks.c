#include <stdio.h>

int main()
{
    int n, sum = 0, percentage;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &percentage);

        sum += percentage;
    }
    printf("%f", (float)sum / n);

    return 0;
}