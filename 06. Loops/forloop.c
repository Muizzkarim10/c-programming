#include <stdio.h>

int main(void)
{
    int n;
    int triangularNumber = 0;
    printf("Enter a Number: \n> ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        triangularNumber = triangularNumber + i;
        printf("Number: %d\n", triangularNumber);
    }

    return 0;
}
