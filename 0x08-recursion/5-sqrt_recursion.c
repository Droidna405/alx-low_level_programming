#include "main.h"
/**
 * _sqrt_recursion - calculates the natural square root of a number.
 * @n: number to find the square root of
 * Return: square root of n, -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
int sqrt_recursive(int n, int guess);
if (n < 0)
return (-1);
return (sqrt_recursive(n, 1));
}

/**
 * sqrt_recursive - recursive function to find the natural square root
 * @n: number to find the square root of
 * @guess: current guess for the square root
 * Return: sqrt of n, -1 if n does not have a natural square root
 */
int sqrt_recursive(int n, int guess)
{
if (guess * guess == n)
return (guess);
if (guess * guess > n)
return (-1);
return (sqrt_recursive(n, guess + 1));
}
