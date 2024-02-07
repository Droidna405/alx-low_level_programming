#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - duplicates a string
 * @str: pointer to the string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL on failure
 */
char *_strdup(const char *str)
{
size_t len;
char *new_str;

if (str == NULL)
{
return (NULL);
}

/* Calculate string length excluding null terminator */
len = strlen(str);

/* Allocate memory for duplicated string and null terminator */
new_str = malloc(len + 1);
if (new_str == NULL)
{
return (NULL);
}

/* Copy the original string to the new memory */
strcpy(new_str, str);

return (new_str);
}
