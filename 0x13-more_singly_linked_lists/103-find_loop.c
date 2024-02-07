#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to the head of the linked list.
 *
 * Return: address of the node where the loop starts, or NULL if no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *slow = head, *fast = head;

while (fast && fast->next)
{
slow = slow->next;
fast = fast->next->next;
if (slow == fast)
return (slow);
}
return (NULL);
}
