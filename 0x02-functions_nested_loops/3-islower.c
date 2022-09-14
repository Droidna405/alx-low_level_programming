#include "main.h"
/**
 * _islower - checks for lower case characters
 * _islower(int c) - scan for lowercase characters
 * @c: is the interger that will be used for the argument in the function
 * Return: 0
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
return (0);
}
