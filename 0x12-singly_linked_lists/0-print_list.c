#include "lists.h"

/**
 * print_list - function that prints all elements of a singly list
 * @h: temp pointer that points to a struct node
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *temp;
	size_t count = 0;

	temp = h;
	if (temp == NULL)
		return (-1);
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
