#include "main.h"
/**
 * string_toupper - function that changes all lowercase letters to uppercase
 * @str: string to be transformed to uppercase
 * Return: str
 */
char *string_toupper(char *str)
{
int i;
for (i = 0; str[i] != '\0';  i++)
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - ('a' - 'A');
}
}
return (str);
}
