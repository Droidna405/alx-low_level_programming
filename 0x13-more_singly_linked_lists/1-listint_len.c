#include <stdio.h>
#include "lists.h"
/**
 * listint_len - function to count the number of elements in the list
 * @h: position at node
 * Return: length
 */
size_t listint_len(const listint_t *h)
{

size_t count = 0;

while (h != NULL)
{
count++;
h = h->next;
}

return (count);
}
