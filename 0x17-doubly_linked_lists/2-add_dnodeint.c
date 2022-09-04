#include "lists.h"

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tail, *new;
	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	
	if (*head == NULL)
	{
		*head = tail = new;
	}
	else
	{
		new->next = *head;
		new->prev = NULL;
		*head = new;
	}
	return (*head);
}
