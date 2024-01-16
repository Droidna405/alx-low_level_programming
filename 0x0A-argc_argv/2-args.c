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
char *word = argv[i];
while (*word != '\0')
{
putchar(*word);
word++;
}
putchar('\n');
}
}
else
{
printf("No arguments provided.\n");
}
return (0);
}
