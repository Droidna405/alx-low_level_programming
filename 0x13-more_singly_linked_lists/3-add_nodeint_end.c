#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of a linked list
 * @head: a pointer to a pointer to the beginning of list
 * @n: value to be added to the new node
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node = malloc(sizeof(listint_t));
listint_t *last = *head;
if (new_node == NULL)
{
return (NULL);
}

new_node->n = n;
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
return (new_node);
}

while (last->next != NULL)
{
last = last->next;
}

last->next = new_node;

return (new_node);
}
