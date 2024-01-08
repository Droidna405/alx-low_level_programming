#include "main.h"
#include <stddef.h>
/**
 * _strchr - function that locates a character in a string
 * @s: string to search
 * @c: character to be located
 * Return: s if the character is found and NULL if there charecter is not found
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return (s);
s++;
}
return NULL;
}
