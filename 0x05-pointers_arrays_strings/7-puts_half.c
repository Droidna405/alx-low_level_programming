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
int length_of_the_string = 0;
int n;
int i;
while (str[length_of_the_string] != '\0')
{
length_of_the_string++;
}
n = (length_of_the_string - 1) / 2 + 1;
for (i = n; i < length_of_the_string; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
