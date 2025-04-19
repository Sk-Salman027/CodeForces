#include <stdio.h>

int main()
{ 
    // variable declaration
    int n, h, width = 0;
    //take input
    scanf("%d %d", &n, &h);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] <= h)
        {
            width += 1;
        }
        else if (arr[i] > h)
        {
            width += 2;
        }
    }
    printf("%d\n", width);
    return 0;
}