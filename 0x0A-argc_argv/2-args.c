#include <stdio.h>
/**
 * main - prints all the arguments it receives, one per line
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always 0 for success
 */
int main(int argc, char *argv[])
{
(void)argv;
if (argc > 1)
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
}
else
{
printf("No arguments provided.\n");
}
return (0);
}
