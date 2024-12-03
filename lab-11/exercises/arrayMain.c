#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#include "array_utils.h"

int main(int argc, char **argv)
{
    // seed the random number generator with the current time
    srand(time(NULL));

    int n = 10;
    int *arr = generateRandomArray(n);
    printArray(arr, n);

    // int sum = getSum(arr, n);
    // printf("Sum of elements = %d\n", sum);

    // double mean = getMean(arr, n);
    // printf("Mean of elements = %.2f\n", mean);

    

    return 0;
}