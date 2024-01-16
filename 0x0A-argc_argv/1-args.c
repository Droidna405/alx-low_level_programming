#include <stdio.h>
/**
 * main - should print the number of arguments passed to it
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 for duccess
 */
int main(int argc, char *argv[])
{
(void)argv;
if (argc > 1)
{
printf("%d\n", argc - 1);
}
else
{
printf("0\n");
}
return (0);
}
