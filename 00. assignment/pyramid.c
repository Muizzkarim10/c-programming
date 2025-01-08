#include <stdio.h>

int main()
{
    int rows, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) // rows
    {
        int num = i;
        for (j = 1; j <= rows + i - 1; j++)     // cols 
        {
            if (j <= rows - i)
            {
                printf(" ");
            }
            else
            {
                printf("%d", num);
                if (j < rows)
                    num++;
                else
                    num--;
            }
        }
        printf("\n");
    }

    return 0;
}
