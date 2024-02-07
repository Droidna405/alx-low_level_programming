#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list safely.
 * @h: double pointer to the head of the list.
 *
 * Return: size of the freed list.
 */
size_t free_listint_safe(listint_t **h)
{
listint_t *current, *next;
size_t count = 0;

if (h == NULL || *h == NULL)
return (0);

current = *h;
while (current != NULL)
{
next = current->next;
free(current);
current = next;
count++;
}

*h = NULL; /* Set head to NULL to prevent dangling pointers */

return (count);
}
