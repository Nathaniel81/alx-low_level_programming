#include "lists.h"

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

	dlistint_t *new;
	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	
	if (*head == NULL)
	{
		*head =  new;
	}
	else
	{
		new->next = *head;
		(*head)->prev = new;
		new->prev = NULL;
		*head = new;
	}
	return (*head);
}

