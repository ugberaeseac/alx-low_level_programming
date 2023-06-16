#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at an index of a doubly list.
 * @head: head pointer
 * @index: index of node to be deleted.
 * 
 * Return: Always 1 on sucess else -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *temp;

	if (head == NULL || (*head) == NULL)
		return (-1);

	temp = (*head);
	if (index == 0)
	{
		(*head) = temp->next;
		if (temp->next != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	while (temp != NULL; count++)
	{
		if (count == index)
		{
			if (temp->next != NULL)
				temp->next->prev = temp->prev;
			if (temp->prev != NULL)
				temp->prev->next = temp->next;
			free(temp);
			return (1);
		}
		count++;
		temp = temp->next;
	}
	return (-1);
}
