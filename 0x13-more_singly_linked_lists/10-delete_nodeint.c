#include "lists.h"

/**
 * delete_nodeint_at_index -function that deletes a node at an index
 * of a singly list
 * @head: double pointed to first node
 * @index: index of the node
 *
 * Return: 1 if succeeded -1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *next_node;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	while (i < index - 1)
	{
		temp = temp->next;
		if (temp == NULL)
		{
			free(temp);
			return (-1);
		}
		i++;
	}
	next_node = temp->next;
	temp->next = next_node->next;

	free(next_node);

	return (1);
}

