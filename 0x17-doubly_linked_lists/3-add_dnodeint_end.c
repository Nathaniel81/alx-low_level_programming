#include "lists.h"

/**
 * add_dnodeint_end -adds a new node at the end of a doubly linked list.
 * @head: the current head of the list
 * @n: value of the new node
 *
 * Return: the address of the new element or NULL if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (!*head)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		new->prev = temp;
		temp->next = new;
	}
	return (new);
}

