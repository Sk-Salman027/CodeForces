#include <stdio.h>
#include <stdlib.h>

int main()
{
    // variable declaration for matrix
    int matrix, move;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            scanf("%d", &matrix);
            if (matrix == 1)
            {   // move count
                move = abs(3 - i) + abs(3 - j);
            }
        }
    }

    printf("%d\n", move);
    return 0;
}
