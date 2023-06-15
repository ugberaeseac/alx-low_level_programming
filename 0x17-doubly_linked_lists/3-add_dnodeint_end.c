#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end of a doubly list
 * @head: head pointer
 * @n: integer value
 *
 * Return: the address of the new element or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *new_node;

	temp = (*head);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->next = new_node->prev = NULL;
	new_node->n = n;

	if ((*head) == NULL)
		(*head) = new_node;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;

		temp->next = new_node;
		new_node->prev = temp;
		temp = temp->next;

	}

	return (new_node);
}
