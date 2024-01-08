#include "main.h"
/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: destination memory area
 * @src: bytes in the memory area to be copied from
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *startDest = dest;
while (n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}  
return (startDest);
}
