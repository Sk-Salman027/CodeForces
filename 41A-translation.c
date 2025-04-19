#include <stdio.h>
#include <string.h>

int main()
{
    // variable declaration
    char S[101], T[101];
    scanf("%s %s", S, T);
    int len = strlen(S), temp, translate = 0;
    for (int i = 0, j = len - 1; i < len / 2; i++, j--)
    {
        temp = S[j];
        S[j] = S[i];
        S[i] = temp;
    }

    if (strcmp(S, T) == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}