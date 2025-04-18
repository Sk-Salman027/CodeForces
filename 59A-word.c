#include <stdio.h>
#include <string.h>

int main()
{
    // variable declaration
    int smallCount = 0, capitalCount = 0;
    char word[100];
    // take a string input
    scanf("%s", word);
    for (int i = 0; i < strlen(word); i++)
    {
        if (word[i] >= 'a' && word[i] <= 'z')
        {
            // small letter count
            ++smallCount;
        }
        if (word[i] >= 'A' && word[i] <= 'Z')
        {
            // capital letter count
            ++capitalCount;
        }
    }
    if (smallCount > capitalCount)
    {
        strlwr(word);
        printf("%s\n", word);
    }
    else if (capitalCount > smallCount)
    {
        strupr(word);
        printf("%s\n", word);
    }
    else
    {
        strlwr(word);
        printf("%s\n", word);
    }
}