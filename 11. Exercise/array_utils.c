// Mueez karim
// sp24-bcs-168

#include <stdlib.h>
#include <stdio.h>

#include "array_utils.h"

#define max_size 100
static int randomArr[max_size];
static int resultArr[max_size];
static int multiplicationTable[max_size][max_size];

void printArray(const int *arr, int n)
{
  if (arr == NULL)
  {
    printf("[null]\n");
    return;
  }
  printf("[ ");
  for (int i = 0; i < n - 1; i++)
  {
    printf("%d, ", arr[i]);
  }
  printf("%d ]\n", arr[n - 1]);
  return;
}

void printTable(int **table, int n, int m)
{
  if (table == NULL)
  {
    printf("[null]\n");
    return;
  }
  for (int i = 0; i < n; i++)
  {
    printArray(table[i], m);
  }
  return;
}

int *generateRandomArray(int size)
{
  if (size < 0 || size > max_size)
  {
    return NULL;
  }

  for (int i = 0; i < size; i++)
  {
    randomArr[i] = rand() % 100;
  }
  return randomArr;
}

int getSum(int *arr, int size)
{
  if (arr == NULL)
  {
    return 0;
  }
  int total = 0;
  for (int i = 0; i < size; i++)
  {
    total += arr[i];
  }
  return total;
}

void freeTable(int **table, int n)
{
  if (table == NULL)
  {
    return;
  }
  for (int i = 0; i < n; i++)
  {
    free(table[i]);
  }
  free(table);
}

double getMean(const int *arr, int size)
{
  int average = 0;
  for (int i = 0; i < size; i++)
  {
    average += arr[i];
  }

  average = average / size;
  return average;
}

int getMin(const int *arr, int size)
{
  int min = arr[0];
  for (int i = 0; i < size; i++)
  {
    if (arr[i] < min)
    {
      min = arr[i];
    }
  }

  return min;
}

int getIndexOfMin(const int *arr, int size)
{
  int min = arr[0];
  int min_index = 0;
  for (int i = 0; i < size; i++)
  {
    if (arr[i] < min)
    {
      min = arr[i];
      min_index = i;
    }
  }

  return min_index;
}

int getMax(const int *arr, int size)
{
  int max = arr[0];
  for (int i = 0; i < size; i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
    }
  }

  return max;
}

int getIndexOfMax(const int *arr, int size)
{
  int max = arr[0];
  int max_index = 0;
  for (int i = 0; i < size; i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
      max_index = i;
    }
  }

  return max_index;
}

int *filterThreshold(const int *arr, int size, int threshold, int *resultSize)
{
  int count = 0;
  for (int i = 0; i < size; i++)
  {
    if (arr[i] > threshold)
    {
      count++;
    }
  }

  int j = 0;
  for (int i = 0; i < size; i++)
  {
    if (arr[i] > threshold)
    {
      resultArr[j++] = arr[i];
    }
  }

  *resultSize = count;
  return resultArr;
}

int **createMultiplicationTable(int n, int m)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      multiplicationTable[i][j] = (i + 1) * (j + 1);
    }
  }

  static int *table[max_size];
  for (int i = 0; i < n; i++)
  {
    table[i] = multiplicationTable[i];
  }

  return table;
}
