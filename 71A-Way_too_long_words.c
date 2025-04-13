#include <stdio.h>
#include <string.h>

int main()
{
    // variable declaration for test case
    int n;
    // take input for test case
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        // variable declaration
        char words[100];
        // take a word
        scanf("%s", words);
        // calculate the length of word
        int len = strlen(words);
        // check condition
        if (len > 10)
        {
            printf("%c%d%c\n", words[0], len - 2, words[len - 1]);
        }
        else
        {
            printf("%s\n", words);
        }
    }
    return 0;
}
