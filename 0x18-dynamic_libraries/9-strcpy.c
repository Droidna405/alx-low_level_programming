#include <stdio.h>
#include "main.h"
/**
 * _strcpy - pointer to a function that copies strings
 * @dest: destination
 * @src: source
 * Return: Original destination
 */
char *_strcpy(char *dest, char *src)
{
char *originalDest = dest;
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (originalDest);
}
