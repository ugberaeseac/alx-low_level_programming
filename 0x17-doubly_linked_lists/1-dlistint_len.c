#include "lists.h"

/**
 * dlistint_len - function that prints all elements of a doubly list
 * @h: head pointer
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	int count = 0;

	temp = h;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}

	return (count);
}
