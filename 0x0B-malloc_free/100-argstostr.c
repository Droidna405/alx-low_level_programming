#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: the number of arguments.
 * @av: an array of pointers to the arguments.
 *
 * Return: pointer to a new string, or NULL on failure.
 */
char *argstostr(int ac, char **av)
{
int i, total_len = 0, arg_len;
char *new_str, *temp;

/* Handle invalid inputs */
if (ac == 0 || av == NULL)
{
return (NULL);
}

/* Calculate total length needed, including spaces and null terminator */
for (i = 0; i < ac; i++)
{
arg_len = strlen(av[i]);
total_len += arg_len + 1; /* Add 1 for newline */
}
total_len++; /* Add final null terminator */

/* Allocate memory for the new string */
new_str = malloc(total_len);
if (new_str == NULL)
{
return (NULL);
}

/* Copy each argument with newline, using strcat */
temp = new_str;
for (i = 0; i < ac; i++)
{
strcat(temp, av[i]);
strcat(temp, "\n");
temp += strlen(av[i]) + 1; /* Move pointer to next position */
}

/* Adds final null terminator */
*temp = '\0';

return (new_str);
}
