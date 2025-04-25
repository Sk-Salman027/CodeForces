#include <stdio.h>

int main()
{
    int n, t;
    scanf("%d %d", &n, &t);
    char S[n], temp;
    scanf("%s", S);
    while (t--)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (S[i] == 'B' && S[i + 1] == 'G')
            {
                temp = S[i + 1];
                S[i + 1] = S[i];
                S[i] = temp;
                i++;
            }
        }
    }
    printf("%s\n", S);
    return 0;
}