#include "main.h"
/**
 * print_numbers - prints from 0-9
 * Returns: void
 */
void print_numbers(void)
{
int a;
for (a = 0 ; a <= 9; a++)
{
_putchar(a + '0');
}
_putchar('\n');
}
