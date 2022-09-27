#include "main.h"

/**
 * _memcpy - function that copies a memory area
 * @dest: memory area to be copied to
 * @src: memory area to be copied from
 * @n: number of bytes from memory ares
 *
 * Return: pointer to the dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;

for (; i < n; i++)
{
dest[i] = src[i];
}

return (dest);
}
