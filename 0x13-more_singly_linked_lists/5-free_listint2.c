#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list and sets the head to NULL
 * @head: a pointer to a pointer to the head of the list
 */
void free_listint2(listint_t **head)
{
listint_t *current;

while (*head != NULL)
{
current = *head;
*head = current->next;  /* Advance head to the next node */
free(current);
}

*head = NULL;  /* Set head pointer to NULL after all nodes are freed */
}
