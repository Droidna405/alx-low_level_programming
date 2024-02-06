#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list and sets the head to NULL
 * @head: a pointer to a pointer to the head of the list
 */
void free_listint2(listint_t **head)
{
listint_t *current_node;
if (*head == NULL) /* Handles empty list */
{
return;
}

current_node = *head;
while (current_node != NULL)
{
listint_t *next_node = current_node->next;
/* Stores next node before freeing */
free(current_node); /* Free the current node */
current_node = next_node; /* Move to the next node */
}
*head = NULL;  /* Set head to NULL after all nodes are freed */
}
