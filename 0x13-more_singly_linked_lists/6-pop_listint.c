#include "lists.h"

/**
 * pop_listint - function that deletes the head of a singly list
 * and returns head node data
 * @head: double pointer to first node
 *
 * Return: data of head node, 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int headdata;

	temp = *head;
	if (*head == NULL)
		return (0);

	*head = temp->next;
	headdata = temp->n;

	free(temp);
	return (headdata);
}
