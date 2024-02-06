#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * and returns its data
 * @head: a pointer to a pointer to the head of the list
 *
 * Return: the data of the deleted head node, or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int head_data;
if (*head == NULL) {  /* Check for empty list */
return (0);
}

temp = *head;  /* Store the current head node temporarily */
head_data = temp->n;  /* Store the data to be returned */

*head = temp->next;  /* Update the head pointer to the next node */
free(temp);           /* Free the memory of the deleted head node */

return (head_data);  /* Return the data of the deleted node */
}
