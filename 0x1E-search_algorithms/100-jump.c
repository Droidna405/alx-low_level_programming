#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - searches fpr a value in a sorted array using Jump search algo
 * @array: Pointer to first element in an array to be searched
 * @size: elements in an array
 * @value: value to search for
 * Return: first index where value is located,
 * or -1 if value is not there or if array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
size_t jump;
size_t left;
size_t right;
size_t index;

jump = sqrt(size);
left = 0;
right = 0;

if (array == NULL)
return (-1);

while (right < size && array[right] < value)
{
printf("Value checked array[%lu] = [%d]\n", right, array[right]);
left = right;
right += jump;
}

printf("Value found between indexes [%lu] and [%lu]\n", left, right);
for (index = left; index <= right && index < size; ++index)
{
printf("Value checked array[%lu] = [%d]\n", index, array[index]);
if (array[index] == value)
return (index);
}
return (-1);
}
