#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data
 * of a singly list
 * @head: pointer to first node
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	if (head == NULL)
		return (0);

	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}

