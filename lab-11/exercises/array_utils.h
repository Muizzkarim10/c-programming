/**
 * A collection of array and 2-D array utility
 * functions.
 */

/**
 * Prints the given integer array to the standard output
 */
void printArray(const int *arr, int n);

/**
 * Prints the given (n x m) integer table to the standard
 * output.
 */
void printTable(int **table, int n, int m);

/**
 * Generates an array of integers of the given size filled
 * with random integer values between 0 and 100 (exclusive).
 * This function assumes that the random number
 * generator has already been seeded.
 */
int * generateRandomArray(int size);

/**
 * Sums the elements in the given array.
 */
int getSum(int *arr, int size);

/**
 * Frees the given (n x m) table.  Only the first parameter
 * (n, number of rows) is necessary to free the table.
 */
void freeTable(int **table, int n);

/**
 * TODO: add your own documentation
 */
double getMean(const int *arr, int size);

/**
 * TODO: add your own documentation
 */
int getMin(const int *arr, int size);

/**
 * TODO: add your own documentation
 */
int getIndexOfMin(const int *arr, int size);

/**
 * TODO: add your own documentation
 */
int getMax(const int *arr, int size);

/**
 * TODO: add your own documentation
 */
int getIndexOfMax(const int *arr, int size);

/**
 * TODO: add your own documentation
 */
int * filterThreshold(const int *arr, int size, int threshold, int *resultSize);

/**
 * TODO: add your own documentation
 */
int **createMultiplicationTable(int n, int m);
