#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a doubly list
 * @head: head pointer
 * @index: index of node (starts at 0)
 *
 * Return: the nth node or NULL if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;

	if (head == NULL)
		return (NULL);

	temp = head;
	while (index && temp->next != NULL)
	{
		temp = temp->next;
		index--;
	}
	if (index == 0)
		return (temp);
	else
		return (NULL);
}
