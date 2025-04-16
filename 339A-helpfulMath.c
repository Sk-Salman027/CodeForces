#include <stdio.h>
#include <string.h>

int main()
{
    // variable declaration
    char S[100];
    char temp;
    // take input
    scanf("%s", S);
    int len = strlen(S);
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len - 1; j += 2)
        {
            if (S[j] > S[j + 2])
            { // swaping character
                temp = S[j];
                S[j] = S[j + 2];
                S[j + 2] = temp;
            }
        }
    }
    printf("%s\n", S);
    return 0;
}