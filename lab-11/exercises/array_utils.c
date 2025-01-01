// Mueez karim
// sp24-bcs-168

#include <stdlib.h>
#include <stdio.h>

#include "array_utils.h"

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
  if (size < 0)
  {
    return NULL;
  }
  int randomArr[size];
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
    arr[i] = 0;
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
  // TODO: implement
  int average = 0;
  for (int i = 0; i < size; i++)
  {
    average += arr[i];
    average = average / size;
    return average;
  }
}

int getMin(const int *arr, int size)
{
  // TODO: implement
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
  // TODO: implement
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
  // TODO: implement
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
  // TODO: implement
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
}

int *filterThreshold(const int *arr, int size, int threshold, int *resultSize)
{
  // TODO: implement
  
}

int **createMultiplicationTable(int n, int m)
{
  // TODO: implement
}
