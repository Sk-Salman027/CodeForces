#include <stdio.h>

int main()
{
    // variable declaration
    int n;
    scanf("%d", &n);
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &a[i], &b[i]);
    }
    int current_passengers = 0;
    int minimumCapacity = 0;
    for (int i = 0; i < n; i++)
    {
        current_passengers = current_passengers - a[i];
        current_passengers = current_passengers + b[i];
        if (current_passengers > minimumCapacity)
        {
            minimumCapacity = current_passengers;
        }
    }
    printf("%d\n", minimumCapacity);
    return 0;
}