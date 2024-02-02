#include "lists.h"
#include <stdlib.h>


/**
 * free_list - Frees a list_t list.
 * @head: A pointer to the head of the linked list.
 */
void free_list(list_t *head)
{
list_t *current_node, *next_node;

current_node = head;
while (current_node != NULL)
{
next_node = current_node->next; /* Save next node b4 freeing the current one */
free(current_node->str);        /* Free the string inside the node */
free(current_node);             /* Free the current node */
current_node = next_node;       /* Move to the next node */
}
}
