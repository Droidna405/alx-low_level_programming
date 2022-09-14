#include "main.h"
/**
 * _islower(int c) - scans lowercase characters
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
