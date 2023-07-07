#include "hash_tables.h"

/**
 * key_index - function that gives the index of a key in a hash table
 * @key: key of the key:value pair
 * @size: size of the array
 *
 * Return: index at which key:value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash, index;

	hash = hash_djb2(key);
	index = (hash % size);

	return (index);
}
