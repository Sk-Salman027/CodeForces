#include <stdio.h>
#include <string.h>
int main()
{
    // variable declaration
    char str1[100], str2[100];
    // take input
    scanf("%s %s", str1, str2);
    strlwr(str1);
    strlwr(str2);
    int result = strcmp(str1, str2);
    printf("%d\n", result);
}