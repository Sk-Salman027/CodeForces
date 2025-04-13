#include <stdio.h>

int main()
{
    // variable declaration
    int n, k, count = 0;
    // take input
    scanf("%d %d", &n, &k);
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int kthPlace = arr[k];
    for (int i = 1; i <= n; i++)
    {
        // contestant earns a positive score (arr[i] > 0)
        if (arr[i] > 0 && kthPlace <= arr[i])
        {
            ++count;
        }
        }
    printf("%d\n", count);
    return 0;
}