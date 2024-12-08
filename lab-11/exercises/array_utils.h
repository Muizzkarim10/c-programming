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
 * generates a array of random numbers
 */
int getSum(int *arr, int size);

/*
 -sums up the array 
 */
void freeTable(int **table, int n);

/**
 * Frees the given (n x m) table.  Only the first parameter
 * (n, number of rows) is necessary to free the table.
 */
double getMean(const int *arr, int size);

/**
 * gets the mean of numbers in the array
 * created a variable named average
 * used a for loop to sum up the numbers in the array
 * than divided the average with the array size.
 */
int getMin(const int *arr, int size);

/**
 * initilized a varaible named min and stored the value of first elenment if array in it
 * used a for loop to check for a lower number
 * if found a smaller number stored it in the min. 
 */
int getIndexOfMin(const int *arr, int size);

/**
 * used the same logic as to find the min number 
 * just add another variable that save the index number of the currently saved number in the min. 
 */
int getMax(const int *arr, int size);

/**
 * same as min
 */
int getIndexOfMax(const int *arr, int size);

/**
 * same as min
 */
int * filterThreshold(const int *arr, int size, int threshold, int *resultSize);

/**
 * used a for loop to check for numbers greater than threshold
 * used a counter to keep track of the number count.
 * decleared a global array named resultArr to store the numbers greater than threshold
 */
int **createMultiplicationTable(int n, int m);
/*
 * first created a global array multiplicationTable that will store the multiplication table
 * than used a nested loop to populate the array
 * since the function return type is a pointer, created a array of pointers that points to the begining of the rows in the multiplicationTable

*/
