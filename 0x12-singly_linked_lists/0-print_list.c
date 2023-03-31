#include "lists.h"

/**
 * print_list - function that prints all elements of a singly list
 * @h: head node
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *temp;
	size_t count = 0;

	temp = h;

	while (temp != NULL)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", temp->len, temp->str);

		count++;
		temp = temp->next;

	}
	return (count);
}
