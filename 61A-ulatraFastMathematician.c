#include <stdio.h>
#include <string.h>

int main()
{
    char num1[100], num2[100], result[100];
    scanf("%s", num1);
    scanf("%s", num2);

    int len = strlen(num1);
    for (int i = 0; i < len; ++i)
    {
        if (num1[i] != num2[i])
        {
            result[i] = '1';
        }
        else
        {
            result[i] = '0';
        }
    }
    printf("%s\n", result);

    return 0;
}
