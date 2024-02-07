#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 *
 * Return: pointer to the concatenated string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
size_t len1, len2;
char *new_str;

len1 = s1 ? strlen(s1) : 0;  /* Handle null s1 */
len2 = s2 ? strlen(s2) : 0;  /* Handle null s2 */

new_str = malloc(len1 + len2 + 1); /* Allocates memory for concat string */
if (new_str == NULL)
{
return (NULL);  /* Handle allocation failure */
}

/* Ensure null termination before copying */
new_str[0] = '\0';

/* Copy strings to the new memory */
strcpy(new_str, s1);
strcat(new_str, s2);

return (new_str);
}
