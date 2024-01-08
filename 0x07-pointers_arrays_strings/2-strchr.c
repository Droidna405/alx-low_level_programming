#include "main.h"
/**
 * _strchr - function that locates a character in a string
 * @s: string to search
 * @c: character to be located
 *
 */
char *_strchr(char *s, char c)
{
while (*s != 0 '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
return (NULL);
}
