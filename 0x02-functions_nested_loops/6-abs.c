#include "main.h"
#include <stdio.h>
/**
 * _abs - computes the absolute value of an integer.
 * @i: is the integer in question
 * Return: 0
 */
int _abs(int i)
{
if (i > 0 || i == 0)
{
return (i);
}
else
return (i * -1);
}
