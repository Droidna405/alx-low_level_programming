#include "main.h"
/**
 * _strncpy - copies up to n characters from src to dest
 * @dest: destination string
 * @src: source string
 * @n: maximum number of characters to copy
 * Return: pointer to the destination string (dest)
 */
char *_strncpy(char *dest, char *src, int n)
{
char *ptr = dest;
while (*src && n > 0)
{
*ptr = *src;
ptr++;
src++;
n--;
}
while (n > 0)
{
*ptr = '\0';
ptr++;
n--;
}
return (dest);
}
