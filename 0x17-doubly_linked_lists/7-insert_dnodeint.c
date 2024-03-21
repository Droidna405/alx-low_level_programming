#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the pointer to the head of the list
 * @idx: index of the list where the new node should be added
 * @n: value to be added to the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *current = *h;
dlistint_t *new_node;
unsigned int i;

/* Handle edge case: if head pointer is NULL */
if (*h == NULL)
return (NULL);

/* Handle edge case: if index is 0 */
if (idx == 0)
return (add_dnodeint(h, n));

/* Traverse the list to find the node at index - 1 */
for (i = 0; i < idx - 1 && current != NULL; i++)
{
current = current->next;
}

/* If current is NULL, index is out of range */
if (current == NULL)
return (NULL);

/* Allocate memory for the new node */
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

/* Initialize the new node */
new_node->n = n;
new_node->next = current->next;
new_node->prev = current;

/* Adjust pointers to link the new node correctly */
if (current->next != NULL)
current->next->prev = new_node;
current->next = new_node;

return (new_node);
}
