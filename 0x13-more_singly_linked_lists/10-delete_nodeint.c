#include "lists.h"
#include <stdio.h>
#include "lists.h"
/**
 * listint_len - function to count the number of elements in the list
 * @h: position at node
 * Return: length
 */
size_t listint_len(const listint_t *h)
{

size_t count = 0;

while (h != NULL)
{
count++;
h = h->next;
}

return (count);
}

/**
 * delete_nodeint_at_index - deletes the node at a given
 * index of a listint_t list
 * @head: a pointer to a pointer to the head of the list
 * @index: the index of the node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current;
listint_t *temp;    /* Temporary holder for the node to be deleted */
unsigned int i;
/* Check for an empty list or invalid index: */
if (*head == NULL || index >= listint_len(*head))
{
return (-1); /* failure */
}
if (index == 0)
{
temp = *head;
*head = (*head)->next;
free(temp);
return (1);
}
current = *head;
for (i = 1; i < index && current != NULL; i++)
{
current = current->next;
}

if (current == NULL || current->next == NULL)
{
return (-1);
}

/* Delete the node: */
temp = current->next;
current->next = temp->next;
free(temp);  /* Frees the removed carriage */

return (1);  /* Indicates success */
}
