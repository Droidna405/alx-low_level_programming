#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: Pointer to the unsigned long int to set the bit in
 * @index: The index of the bit to set, starting from 0
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
/* Check if the index is valid */
if (index >= sizeof(unsigned long int) * 8)
return (-1);

/* Set the bit at the given index to 1 */
*n = *n | (1UL << index);

return (1);
}
