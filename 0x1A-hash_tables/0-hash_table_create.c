#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: The size of the array
 *
 * Return: A pointer to the newly created hash table, or NULL if it fails
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *ht;
unsigned long int i;

/* Allocate memory for the hash table */
ht = malloc(sizeof(hash_table_t));
if (ht == NULL)
return (NULL);

/* Allocate memory for the array */
ht->array = malloc(size * sizeof(hash_node_t *));
if (ht->array == NULL)
{
free(ht);
return (NULL);
}

/* Initialize each element of the array to NULL */
for (i = 0; i < size; i++)
ht->array[i] = NULL;

/* Set the size of the array */
ht->size = size;

return (ht);
}
