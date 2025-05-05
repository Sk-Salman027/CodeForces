#include <stdio.h>
#include <string.h>

int main()
{
    int n, sum = 0;
    char name[50];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", name);
        if (strcmp(name, "Tetrahedron") == 0)
        {
            sum += 4;
        }
        else if (strcmp(name, "Cube") == 0)
        {
            sum += 6;
        }
        else if (strcmp(name, "Octahedron") == 0)
        {
            sum += 8;
        }
        else if (strcmp(name, "Dodecahedron") == 0)
        {
            sum += 12;
        }
        else if (strcmp(name, "Icosahedron") == 0)
        {
            sum += 20;
        }
    }

    printf("%d\n", sum);

    return 0;
}