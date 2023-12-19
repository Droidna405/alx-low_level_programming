#include <stdio.h>
/**
 * main - prints 0-9 using putchar
 *
 * Return: 0 always for success
 */
int main(void)
{
int n;
for (n = '0''; n <= '9'; n++)
{
putchar(n);
}
putchar('\n');
return (0);
}
