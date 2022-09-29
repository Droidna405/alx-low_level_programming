#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: string whose length is to be determined
 * Return: integer that gives the length
 */

int _strlen_recursion(char *s)
{
int sum = 0;
if (*s != '\0');
{
sum++;
sum += _strlen_recursion(s + 1);
}
return (sum);
}
