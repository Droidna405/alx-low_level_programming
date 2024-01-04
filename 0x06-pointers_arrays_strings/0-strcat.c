#include "main.h"
/**
 * _strcat - function that concatenates two strings
 * @dest: destination string
 * @src: the string to be added to the destination str
 * Return: return a character string
 */
char *_strcat(char *dest, char *src)
{
char *ptr = dest;
while (*ptr)
ptr++;
while (*src)
{
*ptr = *src;
ptr++;
src++;
}
*ptr = '\0';
return (dest);
}

