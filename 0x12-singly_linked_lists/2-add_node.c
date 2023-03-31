#include "lists.h"

/**
 * add_node - add a node to the beginning of a singly list
 * @head: first node
 * @str: string data for the new node
 *
 * Return: address of the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int i, length = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		length++;

	if (strdup(str) == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = length;

	if (head == NULL)
		new_node->next = NULL;
	else
		new_node->next = *head;

	*head = new_node;


	return (new_node);
}
