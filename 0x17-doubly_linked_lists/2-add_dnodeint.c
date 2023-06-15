#include "lists.h"

/**
 * add_dnodeint - adds a node at the beginning of a doubly list
 * @head: head pointer
 * @n: integer value
 *
 * Return:m address of the new element or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp, *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->prev = new_node->next = NULL;
	new_node->n = n;

	if (*head == NULL)
		(*head) = new_node;
	else
	{
		temp = (*head);
		new_node->next = temp;
		temp->prev = new_node;
		(*head) = new_node;
	}

	return (new_node);
}
