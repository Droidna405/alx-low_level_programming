#include <stdlib.h>
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
 * main - prints the opcodes of its own main function
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int i, num_bytes;
if (argc != 2)
{
_putchar('E');
_putchar('r');
_putchar('r');
_putchar('o');
_putchar('r');
_putchar('\n');
exit(1);
}
num_bytes = atoi(argv[1]);
if (num_bytes < 0)
{
_putchar('E');
_putchar('r');
_putchar('r');
_putchar('o');
_putchar('r');
_putchar('\n');
exit(2);
}
for (i = 0; i < num_bytes; i++)
{
char opcode = ((char *)main)[i];
int high_nibble = (opcode >> 4) & 0xF;
int low_nibble = opcode & 0xF;
 _putchar(high_nibble < 10 ? '0' + high_nibble : 'a' + high_nibble - 10);
_putchar(low_nibble < 10 ? '0' + low_nibble : 'a' + low_nibble - 10);
if (i < num_bytes - 1)
_putchar(' ');
}
_putchar('\n');
return (0);
}
