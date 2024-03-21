#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes the node at index index
 * of a dlistint_t linked list
 * @head: pointer to the pointer to the head of the list
 * @index: index of the node to delete
 * Return: 1 if successful, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current = *head;
dlistint_t *temp;
unsigned int i;

/* Handle edge case: if head pointer is NULL */
if (*head == NULL)
return (-1);

/* Handle edge case: if index is 0 */
if (index == 0)
{
*head = (*head)->next;
if (*head != NULL)
(*head)->prev = NULL;
free(current);
return (1);
}

/* Traverse the list to find the node at index */
for (i = 0; i < index && current != NULL; i++)
{
current = current->next;
}
/* If current is NULL, index is out of range */
if (current == NULL)
return (-1);

/* Update pointers to remove the node from the list */
temp = current->prev;
temp->next = current->next;
if (current->next != NULL)
current->next->prev = temp;

/* Free memory allocated for the deleted node */
free(current);

return (1);
}
