#include "lists.h"
#include <stddef.h>

/**
 * list_len - Counts the number of elements in a linked list.
 * @h: The head of the linked list.
 *
 * Return: The number of elements in the linked list.
 */
size_t list_len(const list_t *h)
{
size_t node_count = 0;   /* Initialize a variable to count the nodes */

while (h != NULL)       /* Loop through the list until the end */
{
h = h->next;        /* Move to the next node */
node_count++;       /* Increment the node count */
}

return (node_count);    /* Return the total number of nodes in the list */
}
