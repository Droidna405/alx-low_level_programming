#include <stdio.h>
#include "main.h"
/**
 * _isdigit - checks for a digit that's an integer
 *
 * @c: integer to be checked
 * Return: 1 if c is digit and 0 is C is not
 */
int _isdigit(int c)
{
if ((c >= '0') && (c <= '9'))
{
return (1);
}
return (0);
}
