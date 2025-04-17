#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{ // variable declaration
    char words[1000];
    char ch;
    // take input
    scanf("%s", words);
    if (words[0] >= 'a' && words[0] <= 'z')
    { // capitalization first letter
        ch = toupper(words[0]);
        printf("%c", ch);
    }
    else
    {
        printf("%c", words[0]);
    }
    for (int i = 1; i < strlen(words); i++)
    {
        printf("%c", words[i]);
    }
    return 0;
}