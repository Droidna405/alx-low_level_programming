#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - function that prints a name
 * @name: name to be printed
 * @f: pointer to a function that takes a char* and returns void
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}
