#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: double pointer to the head of the list
 *
 * Return: a pointer to the new head of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL;  /* Keeps track of the previous node */
listint_t *current = *head;  /* Start with the first carriage */
listint_t *next; 

while (current != NULL)
{
next = current->next;  /* Store the next carriage temporarily */
current->next = prev;  /* Turn the current carriage around */
prev = current;  /* Move the helper to the current carriage */
current = next;  /* Move to the next carriage */
}

*head = prev;  /* The new head is the last carriage of the original list */

return (*head);  /* Return the head of the reversed list */
}
