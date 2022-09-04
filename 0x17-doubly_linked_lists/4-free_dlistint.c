#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: head of the current list
 *
 * Return: Void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (!head)
		return;
	temp = head->next;
	while (temp != NULL)
	{
		free(head)
		head = temp;
		temp = temp->next;
	}
	free(head);
}
