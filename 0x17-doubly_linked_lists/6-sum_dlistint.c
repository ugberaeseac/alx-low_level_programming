#include "lists.h"

/**
 * sum_dlistint - sums all the data in a doubly list
 * @head: head pointer
 *
 * Return: sum else 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp;

	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}

