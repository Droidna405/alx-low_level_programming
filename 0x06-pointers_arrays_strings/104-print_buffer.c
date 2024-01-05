#include "main.h"
/**
 * print_buffer - function that prints a buffer
 * @b: buffer
 * @size: bytes from the buffer
 */
void print_buffer(char *b, int size)
{
int i, j;
if (size <= 0)
{
_putchar('\n');
return;
}
for (i = 0; i < size; i += 10)
{
_putchar(i);
for (j = 0; j < 10; j++)
{
if (i + j < size)
{
if (b[i + j] >= 32 && b[i + j] <= 126)
_putchar(b[i + j]);
else
_putchar('.');
}
}
_putchar('\n');
}
}
