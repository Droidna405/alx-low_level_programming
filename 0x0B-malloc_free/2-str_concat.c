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
  size_t len1, len2, total_len;
char *new_str;

len1 = s1 ? strlen(s1) : 0;  /* Handle null s1 */
len2 = s2 ? strlen(s2) : 0;  /* Handle null s2 */

total_len = len1 + len2 + 1;

/* Allocate memory for the concatenated string */
new_str = malloc(total_len);
if (new_str == NULL)
{
return (NULL);  /* Handle allocation failure */
}

/* Ensure null termination before copying */
new_str[0] = '\0';

/* Copy strings to the new memory */
strncpy(new_str, s1, len1);
new_str[len1] = '\0';
strncpy(new_str + len1, s2, len2);
new_str[total_len - 1] = '\0';

return (new_str);
}
