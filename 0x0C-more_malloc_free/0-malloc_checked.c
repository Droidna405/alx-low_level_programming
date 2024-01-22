#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - function allocates memory using malloc
 * @b: size of memory to be allocate
 * Return: A pointer to the allocated memory, 98 if fails
 */
void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);
if (ptr == NULL)
{
fprintf(stderr,"\n");
exit(98);
}
return (ptr);
}
