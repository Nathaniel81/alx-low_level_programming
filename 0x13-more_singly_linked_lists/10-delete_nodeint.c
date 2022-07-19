#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index index
 * of a listint_t linked list.
 * @head: A pointer that points to the head of a listint_t linked list pointer
 * @index: The index of the node that should be deleted. Index starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *previous;

	if (!*head)
	return (-1);

	previous = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(previous);
	}
	else
	{
		for (; index > 1; index--)
		{
			if (!previous)
			return (-1);

			previous = previous->next;
		}
		current = previous->next;
		previous->next = current->next;
		free(current);
	}
	return (1);
}
