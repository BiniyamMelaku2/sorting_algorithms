#include "sort.h"

/**
 * Swap - swaps two int values
 * @A: first number
 * @B: second number
 */
void Swap(int *A, int *B)
{
int tmp;
tmp = *A;
*A = *B;
*B = tmp;
}

/**
 * partition - partitions the array
 * @array: an array of integers
 * @low: lower end array index
 * @high: higher end array index
 * Return: index for the pivot
 */
int partition(int *array, int low, int high, size_t size)
{
int pivot = array[high];
int l = low - 1, h;
for (h = low; h <= high; h++)
{
if (array[h] <= pivot)
{
l++;
if (l != h)
{
Swap(&array[l], &array[h]);
print_array(array, size);
}
}
}
return (l);
}

/**
 * lomuto_qsort - implements the Lomuto partition scheme
 * @array: an array of integers
 * @low: low end index of the array
 * @high: high end index of the array
 * @size: max index size of the array
 */
void lomuto_qsort(int *array, int low, int high, size_t size)
{
int i;
if (low < high)
{
i = partition(array, low, high, size);
lomuto_qsort(array, low, i - 1, size);
lomuto_qsort(array, i + 1, high, size);
}
}

/**
 * quick_sort - sorts array of integers in ascending using quick sort
 * @array: an array of integers
 * @size: maximum size of the array
 */
void quick_sort(int *array, size_t size)
{
lomuto_qsort(array, 0, size - 1, size);
}
