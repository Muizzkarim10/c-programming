#include <stdio.h>

int main(void)
{
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, check_digit;
    printf("Enter the UPC number:\n>");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &n1, &n2, &n3, &n4, &n5,
          &n6, &n7, &n8, &n9, &n10, &n11, &check_digit);

    int sum_odd = n1 + n3 + n5 + n7 + n9 + n11;
    int sum_even = n2 + n4 + n6 + n8 + n10;

    int result = (sum_odd * 3) + sum_even;
    printf("sum= %d\n", result);
    result -= 1;
    result = result % 10;
    printf("reminder= %d\n", result);
    result = 9 - result;
    printf("result = %d\n", result);

    if (result == check_digit)
    {
        printf("The UPC number is correct.");
    }
    else
    {
        printf("Invalid UPC");
    }
}
