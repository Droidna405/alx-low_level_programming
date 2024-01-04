#include "main.h"
/**
 * _strcmp - compares two strings i.e. s1 and s2
 * @s1: string one
 * @s2: string two
 * Return: difference between two strings, either 0, or a signed integer
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
{
s1++;
s2++;
}
return (*s1 - *s2);
}
