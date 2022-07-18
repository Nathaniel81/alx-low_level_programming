#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list.
 * @head: A points that points the pointer of the head of the list.
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!head)
		return;

	while (*head)
	{
		temp = (*head)->next;

		free(*head);
		*head = temp;
	}
	*head = NULL;
}
