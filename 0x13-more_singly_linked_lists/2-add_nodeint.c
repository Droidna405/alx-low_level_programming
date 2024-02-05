#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint - adds a new node at the beginning of a lnked list
 * @head: a pointer to a pointer to the beginning of list i.e. first node
 * @n: value or data to be added to the new node
 * Return: address of the new element or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node = malloc(sizeof(listint_t));

if (new_node == NULL)
{

return (NULL);
}
new_node->n = n;
new_node->next = *head;

*head = new_node;

return (new_node);

}
