#include <stdio.h>

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        printf("Table of %d\n", i);
        for (int j = 1; j <= 10; j++)
        {
            int result = i * j;
            printf("%d * %d = %d\n", i, j, result);
        }
        printf("\n");
    }

    return 0;
}
