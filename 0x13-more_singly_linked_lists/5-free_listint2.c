#include "lists.h"

/**
 * free_listint2 - function that frees a singly list and set
 * head pointer to NULL
 * @head: double pointer to first node
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *freetemp;

	if (head == NULL)
		return;

	else
	{

		temp = *head;
	}
	while (temp != NULL)
	{
		freetemp = temp;
		temp = temp->next;
		free(freetemp);
	}

	if (temp == NULL)
		*head = temp;

}
