#include <stdio.h>
#include <stdlib.h>

/**
 * multiply - Multiplies two numbers
 * @a: First number
 * @b: Second number
 * Return: Result of the multiplication
 */
int multiply(int a, int b)
{
return (a * b);
}

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
if (argc == 3)
{
int num1 = atoi(argv[1]);
int num2 = atoi(argv[2]);
int result = multiply(num1, num2);
printf("%d\n", result);
return (0);
}
else
{
printf("Error\n");
return (1);
}
}
