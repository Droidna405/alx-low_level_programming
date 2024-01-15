#include "main.h"
#include <stdio.h>
/**
 * _strstr - Locate the first occurrence of a substring in a string.
 * @haystack: The input string.
 * @needle: The substring to search for.
 *
 * Return: A pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
while (*haystack != '\0')
{
char *startHaystack = haystack;
char *tempNeedle = needle;
while (*tempNeedle != '\0' && *haystack == *tempNeedle)
{
haystack++;
tempNeedle++;
}
if (*tempNeedle == '\0')
{
return (startHaystack);
}
haystack = startHaystack + 1;
}
return (NULL);
}
