#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings up to n bytes.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of bytes from s2 to concatenate.
 *
 * Return: A pointer to the concatenated string.
 *         Returns NULL if the function fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1, i, j;
char *result;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
len1 = strlen(s1);
result = malloc(len1 + n + 1);
if (result == NULL)
return (NULL);
for (i = 0; i < len1; i++)
result[i] = s1[i];
for (j = 0; j < n && s2[j] != '\0'; j++)
result[i + j] = s2[j];
result[i + j] = '\0';
return (result);
}
