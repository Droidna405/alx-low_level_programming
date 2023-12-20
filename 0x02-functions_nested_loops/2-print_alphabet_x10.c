#include "main.h"
/**
 * print_alphabet_x10 - check the code for main
 * print_alphabet_x10 - print 10 times the alphabet in lowercase x10
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
int c;
int i;

for (i = '0' ; i <= '9' ; i++)
{
for (c = 'a' ; c <= 'z' ; c++)
_putchar(c);
}
_putchar('\n');
}
}
