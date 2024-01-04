#include <stdio.h>

/**
 * leet - encodes a string into 1337
 * @str: string to be encoded
 * Return: pointer to the encoded string
 */
char *leet(char *str)
{
char *ptr = str;
char leetMap[5][2] = {{'a', 'A'}, {'e', 'E'}, {'o', 'O'}, {'t', 'T'}, {'l', 'L'}};
char leetReplacements[5] = {'4', '3', '0', '7', '1'};
while (*ptr)
{
int i;
for (i = 0; i < 5; i++)
{
if (*ptr == leetMap[i][0] || *ptr == leetMap[i][1])
{
*ptr = leetReplacements[i];
break;
}
}
ptr++;
}
return (str);
}
