#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node
 * of a singly list
 * @head: pointer to first node
 * @index: index of the node starting at 0
 *
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0, count = 0;
	listint_t *temp, *nthtemp;

	temp = head;
	nthtemp = temp;

	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}

	if (index > count)
		return (NULL);

	while (i <= (index - 1))
	{
		nthtemp = nthtemp->next;
		i++;
	}

	return (nthtemp);
}

