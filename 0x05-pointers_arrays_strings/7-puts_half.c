#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts_half - function that printshalf of a string
 * @str: string that should be truncated
 *
 */
void puts_half(char *str)
{
int length_of_the_string = (strlen(str));
int n;
int i;
if (length_of_the_string % 2 == 0)
{
n = length_of_the_string / 2;
}
else
{
n = (length_of_the_string - 1) / 2;
}
for (i = n; i < length_of_the_string; ++i)
{
_putchar(str[i]);
}
_putchar('\n');
}
