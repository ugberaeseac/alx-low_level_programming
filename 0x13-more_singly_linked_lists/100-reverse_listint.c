#include "lists.h"

/**
 * reverse_listint - function that reverses a singly list
 * @head: double pointer to first node
 *
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current_node, *next_node;

	current_node = next_node = *head;
	if (head == NULL)
		return (NULL);

	*head = (NULL);
	while (next_node != NULL)
	{
		next_node = next_node->next;
		current_node->next = *head;
		*head = current_node;
		current_node = next_node;
	}
	

	return (*head);
}

