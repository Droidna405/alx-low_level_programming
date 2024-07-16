#include <stdio.h>
#include "search_algos.h"
/**
 * interpolation_search - Searches for a value in a sorted array
 * of integers using interpolation search algorithm.
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The first index where value is located, or -1 if
 * value is not present or array is NULL
 */

int interpolation_search(int *array, size_t size, int value)
{
size_t low = 0;
size_t high = size - 1;
size_t pos;
double slope;

if (array == NULL || size == 0)
return (-1);

while (low <= high && value >= array[low] && value <= array[high])
{
slope = (double)(high - low) / (array[high] - array[low]);
pos = low + (slope * (value - array[low]));

printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

if (array[pos] == value)
return (pos);
else if (array[pos] < value)
low = pos + 1;
else
high = pos - 1;
}
printf("Value checked array[%lu] is out of range\n", pos);
return (-1);
}
