#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
/**
 * create_node - Creates a new hash node.
 * @key: The key for the new node.
 * @value: The value for the new node.
 *
 * Return: A pointer to the new node, or NULL if it fails.
 */
hash_node_t *create_node(const char *key, const char *value)
{
hash_node_t *new_node;

new_node = malloc(sizeof(hash_node_t));
if (new_node == NULL)
return (NULL);

new_node->key = strdup(key);
if (new_node->key == NULL)
{
free(new_node);
return (NULL);
}

new_node->value = strdup(value);
if (new_node->value == NULL)
{
free(new_node->key);
free(new_node);
return (NULL);
}

new_node->next = NULL;

return (new_node);
}


/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table.
 * @key: The key. It can't be an empty string.
 * @value: The value associated with the key. It must be duplicated.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *new_node, *head;
unsigned long int index;

if (ht == NULL || key == NULL || *key == '\0')
return (0);
index = key_index((const unsigned char *)key, ht->size);

head = ht->array[index];
while (head)
{
if (strcmp(head->key, key) == 0)
{
free(head->value);
head->value = strdup(value);
if (head->value == NULL)
return (0);
return (1);
}
head = head->next;
}

new_node = create_node(key, value);
if (new_node == NULL)
return (0);

new_node->next = ht->array[index];
ht->array[index] = new_node;

return (1);
}
