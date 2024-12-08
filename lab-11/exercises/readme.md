## Exercises

You will now get some practice by implementing several more
utility functions.  For each function below:
1. Write documentation in the `array_utils.h` file in your own
   words so you have an understanding of what it does.
2. Implement the function in the `array_utils.c` file.
3. Test your function in the `arrayMain.c` file to verify it
   works.
Look for ways to make your life easier: some functions may
be able to utilize others.

* `double getMean(const int *arr, int size)` - computes the
  average of elements in `arr`

* `int getMin(const int *arr, int size)` - returns the minimum
  element in `arr`

* `int getIndexOfMin(const int *arr, int size)` - returns
  the *index* of the the minimum element in `arr`

* `int getMax(const int *arr, int size)` - returns the maximum
  element in `arr`

* `int getIndexOfMax(const int *arr, int size)` - returns
  the *index* of the the maximum element in `arr`

* `int * filterThreshold(const int *arr, int size, int threshold, int *resultSize)` -
  creates and returns a new array that contains
  elements in `arr` that are greater than or equal to `threshold`.
  The size of the returned array is communicated through the
  pass-by-reference variable, `resultSize`.  For example, if we
  pass the array
  `[10, 5, 32, 8, 7, 28, 15, 12]`
  with `threshold = 10` then the returned array should be
  `[10, 32, 28, 15, 12]`
  and the `resultSize` would be set to `5`.

* `int **createMultiplicationTable(int n, int m)` - creates and
  returns a new `(n x m)` 2-D array that contains the values in
  a multiplication table.  For example, if `n = 3, m = 5` then
  the result should look like:
```text
[ 1   2   3   4   5 ]
[ 2   4   6   8  10 ]
[ 3   6   9  12  15 ]