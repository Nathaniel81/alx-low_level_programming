#include "lists.h"

/*
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: A pointer to the current list.
 * @n: value of the new node.
 *
 * Return: The address of the new element, or NULL if it failed
 */

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

