#include "search_algos.h"
#include <stdio.h>

/**
 * binary_search - the algorithm that searches for value in a sorted array
 * @array: pointer to first element
 * @size: number of elements in an array
 * @value: value to search for
 * Return: an Integer or -1 when array in NULL or value is not present
 */
int binary_search(int *array, size_t size, int value)
{
size_t low = 0;
size_t high = size - 1;
size_t mid;
size_t i;

if (array == NULL)
return (-1);
while (low <= high)
{
mid = low + (high - low) / 2;

printf("Searching in array: ");
for (i = low; i <= high; i++)
{
printf("%d", array[i]);
if (i < high)
printf(", ");
}
printf("\n");
if (array[mid] == value)
return (mid);
else if (array[mid] < value)
low = mid + 1;
else
high = mid - 1;
}
return (-1);
}
