#include <stdio.h>
/**
 * main - program that prints alphabet with exclusions
 *
 * Description: use of !=
 *
 * Return: always (0)
 */
int main(void)
{
char n;
{
for (n = 'a'; n <= 'z'; n++)
if (n != 'e' && n != 'q')
putchar(n);
}
putchar('\n');
return (0);
}
