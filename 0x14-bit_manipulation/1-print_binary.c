#include <stdio.h>
#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: the unsigned long integer to print in binary.
 */
void print_binary(unsigned long int n)
{
unsigned long int mask;
if (n == 0)

{
_putchar('0');
return;
}
mask = 1UL << (sizeof(unsigned long int) * 8 - 1);


while (mask > 0)
{
_putchar((n & mask) ? '1' : '0');
mask >>= 1;
}
}


