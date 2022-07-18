#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: A pointer that points to the head of the list pointer
 *
 * Return: The head node’s data (n), or 0 if the linked list is empty
 */

int pop_listint(listint_t **head)
{
	int i;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	i = temp->n;

	*head = (*head)->next;
	free(temp);
	temp = NULL;

	return (i);
}
