#include <stdio.h>

/**
 * _atoi - Convert a string to an integer.
 * @s: The input string.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
int result = 0;
int sign = 1;
while (*s == ' ' || *s == '\t' || *s == '\n')
{
s++;
}
if (*s == '-' || *s == '+')
{
sign = (*s == '-') ? -1 : 1;
s++;
}
while (*s >= '0' && *s <= '9')
{
if (result > (2147483647 - (*s - '0')) / 10)
return ((sign == 1) ? 2147483647 : -2147483648);
}
result = result * 10 + (*s - '0');
 s++;
return (result * sign);
}
