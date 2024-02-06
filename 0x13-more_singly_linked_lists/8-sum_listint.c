#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: the head of the list
 *
 * Return: the sum of all the data in the list, or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
int sum = 0;  /* Start with a bank that's empty */
listint_t *current = head;
/* helper at the beginning of the list */


while (current != NULL)
{
/* Add the number on the current carriage to the piggy bank */
sum += current->n;

/* Move the helper to the next carriage */
current = current->next;
}

/* Returns the total sum collected from all the carriages */
return (sum);
}
