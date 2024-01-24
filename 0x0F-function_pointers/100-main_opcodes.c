#include <stdio.h>
#include <stdlib.h>

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
printf("Error\n");
exit(1);
}
num_bytes = atoi(argv[1]);
if (num_bytes < 0)
{
printf("Error\n");
exit(2);
}
for (i = 0; i < num_bytes; i++)
{
printf("%02x", ((unsigned char *)main)[i]);
if (i < num_bytes - 1)
printf(" ");
}
printf("\n");
return (0);
}
