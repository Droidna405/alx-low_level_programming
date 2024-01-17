#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * create_array - function that creates an array of chars
 *                and it's initialized with a specific char
 * @size: size or the array
 * @c: the array
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;
if (size == 0)
{
return (NULL);
}
array = (char *)malloc(size * sizeof(char));
if (array == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
array[i] = c;
}
return (array);
}
