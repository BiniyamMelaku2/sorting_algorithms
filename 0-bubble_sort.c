#include "sort.h"

/**
 * bubble_sort - sorts array of integer using Bubble Sort
 * @array: pointer to the array
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
int curr, next, flag = 1;
size_t i = 0;
while (flag)
{
for (i = 0; i < size - 1; i++)
{
curr = array[i];
next = array[i + 1];
if (curr > next)
{
array[i] = next;
array[i + 1] = curr;
flag = 0;
print_array(array, size);
}
}
if (!flag)
flag = 1;
else
flag = 0;
}
}
