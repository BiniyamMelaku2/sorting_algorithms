#include "sort.h"

/**
 * selection_sort - sorts in ascending order using selection sort
 * @array: an array of integers
 * @size: max size of the array
 * Return: Always 0
 */
void selection_sort(int *array, size_t size)
{
int min, tmp;
size_t i, j = 0, index_min;
if (!array || size < 2)
return;
for (j = 0; j < size; j++)
{
min = array[j];
for (i = j; i < size; i++)
{
if (array[i] < min)
{
min = array[i];
index_min = i;
}
}
if (index_min > j)
{
tmp = array[j];
array[j] = min;
array[index_min] = tmp;
print_array(array, size);
}
}
}
