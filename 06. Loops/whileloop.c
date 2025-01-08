#include <stdio.h>

int main()
{
    int number = -1;
    int sum = 0;
    do
    {
        scanf("%d", &number);
        if (number != -1)
        {
            sum += number;
            number = -1;
        }
        else
        {
            break;
        }
    } while (number != 0);
    {
    }

    return 0;
}
