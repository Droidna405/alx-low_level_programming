#include "main.h"
#include <string.h>
/**
 * _strncat - uses n bytes from src to concatenate two strings
 * @dest: destination string
 * @src: string to be added
 * @n: bytes from src
 * Return: concatenated string dst
 */
char *_strncat(char *dest, char *src, int n)
{
char  *p = dest;
while (*p)
p++;
while (*src && n > 0)
{
*p = *src;
p++;
src++;
n--;
}
*p = '\0';
return (dest);
}
