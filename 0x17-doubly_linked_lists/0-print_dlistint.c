#include "lists.h"

/**
 * print_dlistint - function that prints all elements of a doubly list
 * @h: head pointer
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp;
	int count = 0;

	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		count++;
		temp = temp->next;
	}

	return (count);
}
