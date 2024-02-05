#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - frees a listint_t list
 * @head: pointer to the first node of the list
 */
void free_listint(listint_t *head)
{
listint_t *current;

while (head != NULL)
{
current = head;
head = head->next;
free(current);
}
}
