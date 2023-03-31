#include "lists.h"

/**
 * free_list - function that frees a singly list
 * @head: first node of singly list
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
