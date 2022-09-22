#include "main.h"

/**
 * *_strcat - this is a function that will help concatenate two strings
 * @dest: first resulting parameter
 * @src: source string
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{

int index = 0, dest_len = 0;

while (dest[index++])
dest_len++;

for (index = 0; src[index]; index++)
dest[dest_len++] = src[index];

return (dest);
}
