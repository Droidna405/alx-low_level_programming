#include <stdio.h>
#include "main.h"
/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number to extract the bit from
 * @index: The index of the bit to extract, starting from 0
 *
 * Return: The value of the bit at index index, or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
/* Check if the index is valid */
if (index >= sizeof(unsigned long int) * 8)
return (-1);

/* Shift the bit to the rightmost position */
n = n >> index;

/* Extract the least significant bit */
return (n & 1);
}
