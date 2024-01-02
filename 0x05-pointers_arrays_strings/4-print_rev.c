#include "main.h"

/**
 * print_rev - function that prints a string in reverse
 * @s: string to be printed in reverse
 */
void print_rev(char *s)
{
int length = 0;
int x;
while (s[length] != '\0')
{
length++;
}
for (x = length - 1; x >= 0; x--)
{
_putchar(s[x]);
}
_putchar('\n');
}
