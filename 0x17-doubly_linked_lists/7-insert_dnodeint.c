#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at a given position
 * @h: head pointer
 * @idx: index where node is to be inserted
 * @n: integer value
 *
 * Return: address of the new node or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new_node;

	if (idx == 0)
		return (add_dnodeint(h, n));

	temp = (*h);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->prev = new_node->next = NULL;
	new_node->n = n;

	while (idx && temp->next != NULL)
	{
		temp = temp->next;
		idx--;

		if (idx == 0)
		{
			new_node->next = temp;
			new_node->prev = temp->prev;
			temp->prev->next = new_node;
			temp->prev = new_node;
		}
	}
	
	if (idx == 1)
		return (add_dnodeint(h, n));

	return (NULL);
}
