#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: A pointer that points to the pointer of the head of the list.
 * @n: The elements to be added to the linked list
 *
 * Return: The address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!*head)
		*head = new;
	else
	{
		temp = *head;

		while (temp->next)
			temp = temp->next;

		temp->next = new;
	}
	return (*head);
}
