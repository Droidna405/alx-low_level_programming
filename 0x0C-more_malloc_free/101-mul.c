#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * multiply - Multiplies two positive numbers.
 * @num1: First positive number.
 * @num2: Second positive number.
 *
 * Return: The result of the multiplication.
 */
unsigned int multiply(unsigned int num1, unsigned int num2)
{
return (num1 * num2);
}

/**
 * is_valid_digit - Checks if a string consists of valid digits.
 * @str: The string to check.
 *
 * Return: 1 if the string consists of valid digits, 0 otherwise.
 */
int is_valid_digit(const char *str)
{
while (*str)
{
if (*str < '0' || *str > '9')
return (0);
str++;
}
return (1);
}
/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 *
 * Return: 0 on success, 98 on incorrect arguments, or 1 if invalid digits.
 */
int main(int argc, char *argv[])
{
unsigned int num1, num2, result;
if (argc != 3)
{
printf("Error\n");
return (98);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
if (num1 <= 0 || num2 <= 0)
{
printf("Error\n");
return (98);
}
if (!is_valid_digit(argv[1]) || !is_valid_digit(argv[2]))
{
printf("Error\n");
return (1);
}
result = multiply(num1, num2);
printf("%u\n", result);
return (0);
}
