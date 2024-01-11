#include "main.h"
/**
 * _pow_recursion - function that returns x raised to the power y
 * @x: integer x which is the base
 * @y: integer y which is the exponent
 * Return: value of x**y
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}
