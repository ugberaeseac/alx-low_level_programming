#include "lists.h"

/**
 * list_len - function that returns number of elements of a singly list
 * @h: head node
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	const list_t *temp;
	size_t count = 0;

	temp = h;
	if (temp == NULL)
		return (-1);
	while (temp != NULL)
	{
		count++;
		temp = temp->next;

	}
	return (count);
}
