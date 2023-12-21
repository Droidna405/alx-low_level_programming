#include <stdio.h>
/**
 * main - entry point of code
 *
 * Description: Prints all numbers of base 16 in lowercase
 *
 * Return: Success always (0)
 */
int main(void)
{
char i;
char a;
for (i = 0; i < 16; i++)
{
putchar(i);
}
for (a = 'a'; a <= 'f'; a++)
{
putchar(a);
}
putchar('\n');
return (0);
}
