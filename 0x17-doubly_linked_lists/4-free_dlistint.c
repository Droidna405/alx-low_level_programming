#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to the head of the list
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *temp;

/* Traverse the list while freeing each node */
while (head != NULL)
{
temp = head->next;
free(head);
head = temp;
}
}
