#include <stdio.h>
#include <stdlib.h>

int main()
{
    // variable declaration for matrix
    int matrix[5][5], move;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] == 1)
            { // move count
                move = abs(2 - i) + abs(2 - j);
            }
        }
    }

    printf("%d\n", move);
    return 0;
}
