#include "main.h"
/**
 * _strcmp - compares two strings
 * @str1: first string
 * @str2: second string
 * Return:
 * returns zero if str1 == s2
 * returns -ve number if str1 < str2
 * return +ve number if str1 > str2
 */
int _strcmp(char *str1, char *str2)
{
int i = 0, diff = 0;
while (1)
{
if (str1[i] == '\0' && str2[i] == '\0')
break;
else if (str1[i] == '\0')
{
diff = str2[i];
break;
}
else if (str2[i] == '\0')
{
diff = str1[i];
break;
}
else if (str1[i] != str2[i])
{
diff = str1[i] - str2[i];
break;
}
else
i++;
}
return (diff);
}
