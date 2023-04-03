#include "lists.h"

/**
 * add_nodeint - function that adds a node to the beginning
 * of a singly list
 * @head: double pointer to head node
 * @n: struct member
 *
 * Return: address or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (head == NULL)
		new_node->next = (NULL);
	else
		new_node->next = *head;

	*head = new_node;
	return (new_node);
}
