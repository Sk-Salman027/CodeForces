#include <stdio.h>
#include <string.h>
int main()
{
    // variable declaration
    int n, antonWin = 0, danikWin = 0;
    // take a number of game with integer
    scanf("%d", &n);
    char game[n];
    // take a string for number of game
    scanf("%s", game);
    for (int i = 0; i < n; i++)
    {
        if (game[i] == 'A')
        {
            antonWin++;
        }
        else
        {
            danikWin++;
        }
    }
    if (antonWin > danikWin)
    {
        printf("Anton\n");
    }
    else if (danikWin > antonWin)
    {
        printf("Danik\n");
    }
    else
    {
        printf("Friendship\n");
    }
    return 0;
}