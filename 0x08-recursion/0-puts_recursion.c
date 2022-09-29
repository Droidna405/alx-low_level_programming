#include "main.h"

/**
 * _puts_recursion - This is a function that prints a string
 * @s: string to be printed
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
if (*S == '\0')
{
_putchar('\n');
}
else
{
_putchar(s[0]);
_puts_recursion(s + 1);
}
}
