#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: string to be filtered
 */
void puts2(char *str)
{
int long long index = 0;
while (str[index] != '\0')
{
_putchar(str[index]);
index += 2;
}
_putchar('\n');
}

