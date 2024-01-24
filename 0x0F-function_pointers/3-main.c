#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, 98 if wrong number of arguments,
 *     or 100 if division by zero
 */
int main(int argc, char *argv[])
{
int num1, num2, result;
int (*func)(int, int);
if (argc != 4)
{
_putchar('E');
_putchar('r');
_putchar('r');
_putchar('o');
_putchar('r');
_putchar('\n') ;
exit(98);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
func = get_op_func(argv[2]);
if (func == NULL)
{
_putchar('E');
_putchar('r');
_putchar('r');
_putchar('o');
_putchar('r');
_putchar('\n');;
exit(99);
}
result = func(num1, num2);
_putchar(result + '0');
_putchar('\n');
return (0);
}
