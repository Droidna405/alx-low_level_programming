#include <stdio.h>
/**
 * main - prints the alphabet but excludes letters q and e
 *
 * Return: zero
*/
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++);
if (ch != 'e' && ch != 'q')
putchar(ch);
putchar('\n');
return (0);
}
