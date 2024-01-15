#include "main.h"
/**
 * _isalpha - function to check if char c is a letter, lowercase or uppercase
 * @c: is the int that will be used in the argument for the function
 *
 * Return: 0
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
return (0);
}
