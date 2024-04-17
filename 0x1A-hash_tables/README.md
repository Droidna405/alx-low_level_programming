# 0x1A. C - Hash tables

0. Write a function that creates a hash table.
   File: 0-hash_table_create.c

1. Write a hash function implementing the djb2 algorithm.
   File: 1-djb2.c

2. Write a function that gives you the index of a key.
   File: 2-key_index.c

3. Write a function that adds an element to the hash table.
   File: 3-hash_table_set.c

4. Write a function that retrieves a value associated with a key.
   File: 4-hash_table_get.c

5. Write a function that prints a hash table.
   File: 5-hash_table_print.c

6. Write a function that deletes a hash table.
   File: 6-hash_table_delete.c

7. In PHP, hash tables are ordered. Wait… WAT? How is this even possible?


   Before you continue, please take a moment to think about it: how you would
   implement it if you were asked to during an interview or a job. What data
   structures would you use? How would it work?

   	      For this task, please:

    	 Read PHP Internals Book: HashTable
	 <https://www.phpinternalsbook.com/php5/hashtables/basic_structure.html>
    	 Use the same hash function
   	 Use these data structures:

/**
 * struct shash_node_s - Node of a sorted hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 * @sprev: A pointer to the previous element of the sorted linked list
 * @snext: A pointer to the next element of the sorted linked list
 */
typedef struct shash_node_s
{
     char *key;
     char *value;
     struct shash_node_s *next;
     struct shash_node_s *sprev;
     struct shash_node_s *snext;
} shash_node_t;

/**
 * struct shash_table_s - Sorted hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 * @shead: A pointer to the first element of the sorted linked list
 * @stail: A pointer to the last element of the sorted linked list
 */
typedef struct shash_table_s
{
     unsigned long int size;
     shash_node_t **array;
     shash_node_t *shead;
     shash_node_t *stail;
} shash_table_t;

Rewrite the previous functions using these data structures:

   shash_table_t *shash_table_create(unsigned long int size);
   int shash_table_set(shash_table_t *ht, const char *key, const char *value);
The key/value pair should be inserted in the sorted list at the right place
        Note that here we do not want to do exactly like PHP: we want to create
	a sorted linked list, by key (sorted on ASCII value), that we can print
	by traversing it. See example.
    char *shash_table_get(const shash_table_t *ht, const char *key);
    void shash_table_print(const shash_table_t *ht);
        Should print the hash table using the sorted linked list
    void shash_table_print_rev(const shash_table_t *ht);
        Should print the hash tables key/value pairs in reverse order using
	the sorted linked list
    void shash_table_delete(shash_table_t *ht);
    You are allowed to have more than 5 functions in your file
