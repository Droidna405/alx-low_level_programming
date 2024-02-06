#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts a new node at a given
 * position in a listint_t list
 * @head: a pointer to a pointer to the head of the list
 * @idx: the index at which to insert the new node
 * @n: the data to store in the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node;  /* Create a new carriage for the number */
listint_t *current;
unsigned int i;
if (idx > 0 && *head == NULL)
{
return (NULL);
}
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->n = n;
if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}

current = *head;
for (i = 1; i < idx && current != NULL; i++)
{
current = current->next;
}

if (current == NULL)
{
free(new_node);
return (NULL);
}

new_node->next = current->next;
current->next = new_node;
return (new_node);
}
