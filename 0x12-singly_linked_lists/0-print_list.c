#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
size_t node_count = 0;

while (h != NULL)
{
size_t str_len = (h->str != NULL) ? strlen(h->str) : 0;
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%lu] %s\n", (unsigned long)str_len, h->str);

h = h->next;
node_count++;
}
return (node_count);
}
