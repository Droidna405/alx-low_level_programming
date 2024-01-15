#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: part of a string i.e.beginning substring
 * @accept: string with beginning substring with same characters in s
 * Return: number of bytes in the initial segment of s
 * which consists only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
while (*s !=  '\0')
{
char *a = accept;
while (*a != '\0')
{
if (*s == *a)
{
count++;
break;
}
a++;
}
if (*a == '\0')
break;
s++;
}
return (count);
}
