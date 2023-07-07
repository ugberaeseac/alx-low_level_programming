#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: size of array
 *
 * Return: pointer to newly created hash table, NULL if error
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashtable;
	unsigned long int i;

	if (size <= 0)
		return (NULL);
	hashtable = malloc(sizeof(hash_table_t));
	if (hashtable == NULL)
		return (NULL);
	hashtable->size = size;
	hashtable->array = malloc(sizeof(hash_node_t *) * hashtable->size);
	if (hashtable->array == NULL)
	{
		free(hashtable);
		return (NULL);
	}

	for (i = 0; i < hashtable->size; i++)
		hashtable->array[i] = NULL;

	return (hashtable);
}
