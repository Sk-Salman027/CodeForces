#include <stdio.h>
#include <stdbool.h>

int main()
{
    int k, l, m, n, d;
    scanf("%d %d %d %d %d", &k, &l, &m, &n, &d);

    bool damaged[d]; // To keep track of damaged dragons
    for (int i = 0; i < d; ++i)
    {
        damaged[i] = false; // Initialize all dragons as undamaged
    }

    // Mark dragons according to the princess's rules
    for (int i = k - 1; i < d; i += k)
    {
        damaged[i] = true;
    }
    for (int i = l - 1; i < d; i += l)
    {
        damaged[i] = true;
    }
    for (int i = m - 1; i < d; i += m)
    {
        damaged[i] = true;
    }
    for (int i = n - 1; i < d; i += n)
    {
        damaged[i] = true;
    }

    // Count how many dragons are damaged
    int count = 0;
    for (int i = 0; i < d; ++i)
    {
        if (damaged[i])
        {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
