#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void TransposeMatrix(int rows, int cols, int matrix[rows][cols])
{
    srand(time(NULL));
    int transposedMatrix[cols][rows];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            transposedMatrix[j][i] = matrix[i][j];
        }
    }

    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            printf("%d ", transposedMatrix[i][j]);
        }
        printf("\n");
    }
}

int main(void)
{
    int rows = 0, cols = 0;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    int matrix[rows][cols];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            matrix[i][j] = rand() % 10;
        }
    }

    TransposeMatrix(rows, cols, matrix);

    return 0;
}