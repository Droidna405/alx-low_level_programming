#include <stdio.h>
/**
 * main - entry point of code
 *
 * Description: prints all possible combinations
 * 
 * Return: Always (0) for success
 */ 
int main(void)
{
int i;
{
for (i = 0; i < 10; i++)
{
putchar('0' + i);
if (i < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
}
