#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: string to be filtered
 */
void puts2(char *str)
{
int index = 0;
while (str[index] != '\0')
{
printf(str[index]);
index += 2;
}
printf('\n');
}

