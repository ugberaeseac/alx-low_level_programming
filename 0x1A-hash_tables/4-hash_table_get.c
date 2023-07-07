#include "hash_tables.h"

/**
 * hash_table_get - function to retrieve a value associated with a key
 * @ht: pointer to hash table
 * @key: key
 *
 * Return: value associated with the key or NULL
 * if key can't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp = NULL;
	unsigned long int index;

	if (ht == NULL || ht->array == NULL)
		return (NULL);
	if (key == NULL || strlen(key) == 0)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];


	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}

	return (NULL);
}

