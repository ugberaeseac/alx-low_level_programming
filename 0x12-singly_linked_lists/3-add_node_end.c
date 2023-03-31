#include "lists.h"

/**
 * add_node_end - add a node to the end of a singly list
 * @head: first node
 * @str: string data to be inserted in new node
 *
 * Return: address of the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *tmp;
	int i, length = 0;

	if (str == NULL)
		return (NULL);
	if (strdup(str) == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		length++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = length;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		tmp = *head;

		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_node;
	}

	return (new_node);
}
