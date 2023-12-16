#include <stdio.h>
/**
 * main - entry point of program
 *
 * Description: Prints the alphabet in lowercase
 *
 * Return: Always (0) Success
 */
int main(void)
{
char n;
for (n = 'a'; n <= 'z'; ++n)
{
putchar(n);
}
for (n = 'A'; n <= 'Z'; ++n)
{
putchar(n);
}
putchar('\n');
return (0);
}
