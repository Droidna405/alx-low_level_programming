#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer to n memory area
 * @b: constant byte
 * @n: number of bytes
 * Return: starting bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
char *startingByte = s;
while (n > 0)
{
*s = b;
s++;
n--;
}
return (startingByte);
}

