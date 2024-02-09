#include "main.h"
/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: Pointer to the unsigned long int to clear the bit in
 * @index: The index of the bit to clear, starting from 0
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
/* Check if the index is valid */
if (index >= sizeof(unsigned long int) * 8)
return (-1);
/* Clear the bit at the given index by performing a */
/* bitwise AND operation with the complement of 1 shifted */
/* left by the index */

*n = *n & ~(1UL << index);
return (1);
}
