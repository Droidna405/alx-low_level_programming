#include "main.h"
#include <ctype.h>
/**
 * cap_string - function that makes the first letter uppercase
 * @c: character separator
 * @str: string to be transformed
 * Return: string
 */

int is_separator(char c)
{
  return (c == ' ' || c == '\t' || c == '\n' || c == ',' || c == ';' || c == '.' ||
c == '!' || c == '?' || c == '"' || c == '(' || c == ')' || c == '{' || c == '}');
}
char *cap_string(char *str)
{
int i = 0;
while (str[i] != '\0')
{
if (i == 0 || is_separator(str[i - 1]))
{
str[i] = toupper(str[i]);
}
i++;
}
return (str);
}
