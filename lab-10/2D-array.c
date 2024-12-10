#include <stdio.h>
#define size 3

void Table()
{
    int table[size][size] = {0};

    printf("Number of elements in the Array : %d\n", size * size);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            table[i][j] = i + j;
    }
    printf("[");
    for (int i = 0; i < 3; i++)
    {
        printf("[");
        for (int j = 0; j < 3; j++)
        {
            printf("%d", table[i][j]);
            if (j == 2)
            {
                break;
            }
            printf(", ");
        }
        printf("]");
    }
    printf("]");
}

int main()
{
    Table();
}