#include "main.h"
/**
 * _print_rev_recursion - prints a reverse string using recursion
 * @s: string to be printed in reverse
 */
void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}

