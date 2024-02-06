#include "lists.h"
#include <stddef.h>  /* Include for NULL macro */

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: the head of the list
 * @index: the index of the node to return, starting at 0
 *
 * Return: the nth node of the list, or NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *current = head;  /* Start from the head node */
unsigned int i;

/* Traverses the list until the desired index */
/* is reached or the end is encountered */
for (i = 0; i < index && current != NULL; i++)
{
current = current->next;  /* Move to the next node */
}
/* Return the node if found, otherwise NULL */
return ((i == index) ? current : NULL);
}
