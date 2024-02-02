## 0x12. C - Sigly linked lists ##
# Learning Objectives #
0. A function that prints all the elements of a list_t list. prototype
     	      "size_t print_list(const list_t *h);
	      0-print_list.c

1. A function that returns the number of elements in a linked list_t list. protoype
     	      "size_t list_len(const list_t *h);"
	      1-list_len.c
	      
2. A function that adds a new node at the beginning of a list_t list. prototype
     	      "list_t *add_node(list_t **head, const char *str);"
	      2-add_node.c

3. A function that adds a new node at the end of a list_t list. prototype
     	      "list_t *add_node_end(list_t **head, const char *str);"
	      3-add_node_end.c

4. A function that frees a list_t list. prototype
     	      "void free_list(list_t *head);"
	      4-free_list.c