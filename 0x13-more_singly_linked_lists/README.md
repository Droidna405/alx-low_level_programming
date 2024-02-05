## 0x13 C-More singly linked lists ##
# Linked Lists and Data Structures #
0. A function that prints all the elements of a listint_t -
   prototype:- size_t print_listint(const listint_t *h);
   0-print_listint.c

1. A function that returns the number of elements in a linked listint_t list.
   prototype:- size_t listint_len(const listint_t *h);
   1-listint_len.c

2. A function that add a new node at the beginning of a listint_t list.
   prototype:- listint_t *add_nodeint(listint_t **head, const int n);
   2-add_nodeint.c

3. A function that adds a new node at the end of a listint_t list.
   prototype:- listint_t *add_nodeint_end(listint_t **head, const int n);
   3-add_nodeint_end.c

4. A function that frees a listint_t list
   Prototype: void free_listint(listint_t *head);
   4-free_listint.c

5. A function that frees a listint_t list.
   Prototype: void free_listint2(listint_t **head);
   5-free_listint2.c

6. A function that deletes the head node of a listint_t linked list,
   and returns the head node’s data (n).
   Prototype: int pop_listint(listint_t **head);
   6-pop_listint.c

7. A function that returns the nth node of a listint_t linked list.
   Prototype: listint_t *get_nodeint_at_index(listint_t *head,
   unsigned int index);
   7-get_nodeint.c

8. A function that returns the sum of all the data (n) of a
   listint_t linked list.
   Prototype: int sum_listint(listint_t *head);
   8-sum_listint.c

9. A function that inserts a new node at a given position.
   listint_t *insert_nodeint_at_index(listint_t **head,
   unsigned int idx, int n);
   9-insert_nodeint.c

10. A function that deletes the node at index index of a listint_t linked list.
    int delete_nodeint_at_index(listint_t **head, unsigned int index);
    10-delete_nodeint.c
