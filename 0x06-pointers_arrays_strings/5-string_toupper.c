#include "main.h"

/**
 * string_toupper - function that converts alph to uppercase
 * @s: string to be changed
 * Return: uppercase (s)
 */
char *string_toupper(char *str)
{
int i = 0;
while (str[i] i= '\0')
{
if (str[i] >= 'a' && str[i] <= 'z')
str[i] -= 32;
i++;
}
return (str);
}
