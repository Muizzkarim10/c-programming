#include <stdio.h>
#include <stdbool.h>
#define size 10

void Weekend()
{
    bool weekend[7] = {0};
    weekend[0] = true;
    weekend[6] = true;

    for (int i = 0; i < 7; i++)
    {
        printf("weekend[%d] : %d\n", i, weekend[i]);
    }
}

void Fraction()
{
    double fraction[size] = {0};
    fraction[8] = 1.667;
    fraction[6] = 3.333;

    printf("Index[5] : %.2f\nIndex[8] : %.2f \n", fraction[5], fraction[8]);

    for (int i = 0; i < 10; i++)
    {
        printf("fraction[%d] : %.2f\n", i, fraction[i]);
    }
}



int main()
{
    Fraction();
}