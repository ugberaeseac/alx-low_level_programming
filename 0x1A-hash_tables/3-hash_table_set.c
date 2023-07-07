#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: pointer to hash table
 * @key: key
 * @value: value
 *
 * Return: 1 if succeeded otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *data;
	hash_node_t *temp;

	if (ht == NULL)
		return (0);
	if (key == NULL || value == NULL || strlen(key) == 0)
		return (0);

	data = _create_data(key, value);
	index = key_index((const unsigned char *)key, (unsigned long int)ht->size);
	if (index > (ht->size))
	{
		_free_data(data);
		return (0);
	}

	if (ht->array[index] == NULL)
		ht->array[index] = data;

	else
	{
		temp = ht->array[index];
		while (temp->next != NULL)
		{
			if (strcmp(data->key, temp->key) == 0)
			{
				free(temp->value);
				temp->value = strdup(data->value);
				return (1);
			}
			temp = temp->next;
		}
		temp->next = data;
	}
	return (1);

}



/**
 * _create_data - creates data in key:value pair to be
 * added to hash table
 * @key: key
 * @value: value
 *
 * Return: pointer to created data
 */
hash_node_t *_create_data(const char *key, const char *value)
{
	hash_node_t *data;

	data = malloc(sizeof(hash_node_t));
	if (data == NULL)
		return (0);

	data->key = strdup(key);
	data->value = strdup(value);
	data->next = NULL;

	return (data);
}


/**
 * _free_data - function that frees the data in a particular hash table index
 * @data - data items to be freed
 *
 * Return: void
 */
void _free_data(hash_node_t *data)
{
	free(data->key);
	free(data->value);
	free(data);
}
