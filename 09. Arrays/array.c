#include <stdio.h>

int main()
{

    int number[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the number at index[%d] : ", i);
        scanf("%d", &number[i]);
    }

    printf("Array located at %p\n", number);

    for (int i = 0; i < 5; i++)
    {
        printf("Number at index [%d] is %d\n", i, number[i]);
    }

    return 0;
}
