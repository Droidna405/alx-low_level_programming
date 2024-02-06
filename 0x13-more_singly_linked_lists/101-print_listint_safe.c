#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list
 * @head: Pointer to the head of the list
 *
 * Return: Number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *current;
size_t count = 0;

current = head;

while (current != NULL)
{
printf("[%p] %d\n", (void *)current, current->n);

if (current->next >= current)
{
printf("-> [%p] %d\n", (void *)current->next, current->next->n);
exit(98);
}
current = current->next;
count++;
}
return (count);
}
