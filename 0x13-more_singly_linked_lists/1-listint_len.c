#include "lists.h"

/**
 * listint_len - function that returns number of elements in a linked list
 * @h: head node
 *
 * Return: number of elements in linked list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	int count = 0;

	temp = h;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
