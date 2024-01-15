#include <stdio.h>

/**
 * _strpbrk - Locate first occurrence in a str of any byte in another str.
 * @s: The input string.
 * @accept: The set of bytes to search for.
 *
 * Return: A pointer to byte in @s that matches the bytes in @accept,
 *         or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
while (*s != '\0')
{
char *tempAccept = accept;
while (*tempAccept != '\0')
{
if (*s == *tempAccept)
{
return (s);
}
tempAccept++;
}
s++;
}
return (NULL);
}
