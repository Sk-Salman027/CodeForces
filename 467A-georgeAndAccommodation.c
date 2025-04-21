#include <stdio.h>

int main()
{
    // variable declaration
    int n, person, capacity, remain, count = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &person, &capacity);
        if (person + 2 <= capacity)
        {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}