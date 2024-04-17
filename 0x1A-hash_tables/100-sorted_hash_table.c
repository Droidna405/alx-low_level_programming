#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * shash_table_create - Creates a sorted hash table
 * @size: The size of the array
 *
 * Return: A pointer to the newly created sorted hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
shash_table_t *ht = malloc(sizeof(shash_table_t));

if (ht == NULL)
return (NULL);

ht->size = size;
ht->array = calloc(size, sizeof(shash_node_t *));
if (ht->array == NULL)
{
free(ht);
return (NULL);
}
ht->shead = NULL;
ht->stail = NULL;
return (ht);
}

/**
 * shash_table_set - Adds an element to the sorted hash table
 * @ht: The sorted hash table
 * @key: The key to add
 * @value: The value to add
 *
 * Return: 1 if successful, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
shash_node_t *new_node, *temp, *prev;

if (ht == NULL || key == NULL || *key == '\0')
return (0);

index = key_index((const unsigned char *)key, ht->size);

temp = ht->array[index];
prev = NULL;
while (temp != NULL && strcmp(temp->key, key) < 0)
{
prev = temp;
temp = temp->next;
}
if (temp != NULL && strcmp(temp->key, key) == 0)
{
free(temp->value);
temp->value = strdup(value);
if (temp->value == NULL)
return (0);
return (1);
}

new_node = malloc(sizeof(shash_node_t));
if (new_node == NULL)
return (0);
new_node->key = strdup(key);
new_node->value = strdup(value);
if (new_node->key == NULL || new_node->value == NULL)
{
free(new_node->key);
free(new_node->value);
free(new_node);
return (0);
}
if (prev == NULL)
{
ht->array[index] = new_node;
new_node->next = temp;
}
else
{
prev->next = new_node;
new_node->next = temp;
}
new_node->sprev = NULL;
new_node->snext = NULL;
if (ht->shead == NULL)
{
ht->shead = new_node;
ht->stail = new_node;
}
else if (strcmp(new_node->key, ht->shead->key) < 0)
{
new_node->snext = ht->shead;
ht->shead->sprev = new_node;
ht->shead = new_node;
}
else
{
temp = ht->shead;
while (temp->snext != NULL && strcmp(new_node->key, temp->snext->key) > 0)
temp = temp->snext;
new_node->snext = temp->snext;
if (temp->snext != NULL)
temp->snext->sprev = new_node;
else
ht->stail = new_node;
new_node->sprev = temp;
temp->snext = new_node;
}
return (1);
}

/**
 * shash_table_get - Retrieves a value associated with a key
 * @ht: The sorted hash table
 * @key: The key to retrieve
 *
 * Return: The value associated with the key, or NULL if key couldn't be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
unsigned long int index;
shash_node_t *temp;

if (ht == NULL || key == NULL || *key == '\0')
return (NULL);

index = key_index((const unsigned char *)key, ht->size);
temp = ht->array[index];
while (temp != NULL && strcmp(temp->key, key) != 0)
temp = temp->next;
if (temp == NULL)
return (NULL);
return (temp->value);
}

/**
 * shash_table_print - Prints the hash table using the sorted linked list
 * @ht: The sorted hash table
 */
void shash_table_print(const shash_table_t *ht)
{
shash_node_t *temp;
int comma_flag = 0;

if (ht == NULL)
return;

printf("{");
temp = ht->shead;
while (temp != NULL)
{
if (comma_flag)
printf(", ");
printf("'%s': '%s'", temp->key, temp->value);
comma_flag = 1;
temp = temp->snext;
}
printf("}\n");
}

/**
 * shash_table_print_rev - Prints the hash table in reverse
 * order using the sorted linked list
 * @ht: The sorted hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
shash_node_t *temp;
int comma_flag;

comma_flag = 0;

if (ht == NULL)
return;

printf("{");
temp = ht->stail;
while (temp != NULL)
{
if (comma_flag)
printf(", ");
printf("'%s': '%s'", temp->key, temp->value);
comma_flag = 1;
temp = temp->sprev;
}
printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table
 * @ht: The sorted hash table
 */
void shash_table_delete(shash_table_t *ht)
{
unsigned long int i;
shash_node_t *temp, *prev;

if (ht == NULL)
return;

for (i = 0; i < ht->size; i++)
{
temp = ht->array[i];
while (temp != NULL)
{
prev = temp;
temp = temp->next;
free(prev->key);
free(prev->value);
free(prev);
}
}
free(ht->array);
free(ht);
}
