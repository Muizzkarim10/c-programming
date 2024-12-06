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
    printf("Random Array : ");
    printArray(arr, n);

    printf("Sum of elements = %d\n", getSum(arr, n));
    printf("Mean of elements = %.2f\n", getMean(arr, n));
    printf("Minimum Number in the array : %d\n", getMin(arr, n));
    printf("Index of the Minimum Number : %d\n", getIndexOfMin(arr, n));
    printf("Maximum Number in the array : %d\n", getMax(arr, n));
    printf("Index of Maximum Number : %d\n", getIndexOfMax(arr, n));

    // filterThreshold Array
    int resultSize;
    int threshold = 50;
    int *filteredArr = filterThreshold(arr, n, threshold, &resultSize);
    printf("Filtered array (elements > %d): ", threshold);
    printArray(filteredArr, resultSize);

    // Multiplicaiton Table
    int rows = 3;
    int cols = 5;
    int **multiplicationTable = createMultiplicationTable(rows, cols);
    for (int i = 0; i < rows; i++)
    {
        printArray(multiplicationTable[i], cols);
    }

    return 0;
}