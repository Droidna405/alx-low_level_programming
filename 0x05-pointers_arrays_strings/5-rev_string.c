#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
int length = 0;
int start, end;
while (s[length] != '\0')
{
length++;
}
for (start = 0, end = length - 1; start < end; start++, end--)
{
char temp = s[start];
s[start] = s[end];
s[end] = temp;
}
}
