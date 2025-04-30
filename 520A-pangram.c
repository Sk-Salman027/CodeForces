#include <stdio.h>

int main()
{
    int n;
    char str[101];
    int alphabet[26] = {0}; // Array to track presence of each letter

    // Read input
    scanf("%d\n", &n);
    fgets(str, sizeof(str), stdin);

    // Iterate through the string
    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];
        if ('a' <= ch && ch <= 'z')
        {
            alphabet[ch - 'a'] = 1; // Mark the letter as encountered
        }
        else if ('A' <= ch && ch <= 'Z')
        {
            alphabet[ch - 'A'] = 1; // Mark the letter as encountered
        }
    }

    // Check if all alphabet letters are present
    int pangram = 1;
    for (int i = 0; i < 26; i++)
    {
        if (alphabet[i] == 0)
        {
            pangram = 0; // Not a pangram
            break;
        }
    }

    // Output the result
    if (pangram)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
