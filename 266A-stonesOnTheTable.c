#include <stdio.h>

int main()
{
    // variable declaration
    int n, count = 0;
    // take stones numbers
    scanf("%d", &n);
    char stones[51];
    // take stones colour
    scanf("%s", stones);
    for (int i = 0; i < n; i++)
    { // same colour  neighboring stones
        if (stones[i] == stones[i + 1])
        {
            count++;
        }
    }
    printf("%d\n", count);
}