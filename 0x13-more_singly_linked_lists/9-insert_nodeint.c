#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a node at a given position
 * @head: double pointer to first node
 * @idx: index of the singly list
 * @n: struct member
 *
 * Return: address of new node or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *ntemp, *new_node;
	unsigned int i = 0, count = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
		return (NULL);

	temp = *head;
	if (idx == 0)
	{
		new_node->next = temp->next;
		*head = new_node;
		return (new_node);
	}
	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	if (idx > count)
	{
		return (NULL);
	}
	else
	{
		ntemp = *head;
		while (i < idx - 1)
		{
			ntemp = ntemp->next;
			i++;
		}
	}
	new_node->n = n;
	new_node->next = ntemp->next;
	ntemp->next = new_node;

	return (new_node);
}
