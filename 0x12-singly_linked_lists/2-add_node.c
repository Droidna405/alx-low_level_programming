#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - a new node at the beginning of a linked list.
 * @head: pointer to the head of the linked list.
 * @str: string to be duplicated and added to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;       /* Pointer to the new node */

if (str == NULL)        /* Check if the input string is NULL */
return (NULL);

/* Allocate memory for the new node */
new_node = malloc(sizeof(list_t));
if (new_node == NULL)   /* Checks if memory allocation failed */
return (NULL);

/* Duplicate the input string using strdup */
new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);     /* Free the allocated memory for the new node */
return (NULL);
}

/* Make the new node point to the current head of the list */
new_node->next = *head;

/* Update the head to point to the new node */
*head = new_node;

return (new_node);      /* Return the address of the new element */
}
