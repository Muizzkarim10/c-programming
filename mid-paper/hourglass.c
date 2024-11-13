#include <stdio.h>

int main()
{
    int i, j, rows;
    printf("Enter the number of rows: \n> ");
    scanf("%d", &rows);

    if (rows % 2 == 0)
    {
        rows++;
    }

    int spaces = 0;
    int stars = rows;

    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= spaces; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= stars; j++)
        {
            printf("*");
        }

        printf("\n");
        if (i < (rows / 2) + 1)
        {
            spaces++;
            stars -= 2;
        }
        else
        {
            spaces--;
            stars += 2;
        }
    }

    return 0;
}