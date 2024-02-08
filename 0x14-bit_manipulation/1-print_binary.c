#include <stdio.h>
#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: the unsigned long integer to print in binary.
 */
void print_binary(unsigned long int n)
{
int count;
unsigned long int mask;
if (n == 0)
{
printf("0");
return;
}
mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
count = 0;

while (mask > 0)
{
_putchar((n & mask) ? '1' : '0');
mask >>= 1;
count++;

/* Add a space for readability every 4 bits, excluding 4 */
if (count % 4 == 0 && mask > 0)
_putchar(' ');
}
}

