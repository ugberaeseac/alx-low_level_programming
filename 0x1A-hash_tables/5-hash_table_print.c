#include "hash_tables.h"

/**
 * hash_table_print - a function that prints a hash table
 * @ht: pointer to hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp = NULL;
	char *commaspace = "";

	if (ht == NULL || ht->array == NULL)
		return;

	putchar('{');
	for (i = 0; i < ht->size;  i++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			printf("%s'%s': '%s'", commaspace, temp->key, temp->value);
			commaspace = ", ";
			temp = temp->next;
		}
	}
	puts("}");
}
