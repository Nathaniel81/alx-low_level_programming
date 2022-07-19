#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list. 
 * @head: A pointer to the head of the list pointer.
 *
 * Return: A pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prv;
	listint_t *nxt;

	prv = nxt = NULL;

	while (*head)
	{
		nxt = (*head)->next;
		(*head)->next = prv;
		prv = *head;
		*head = nxt;
	}
	*head = prv;
	
	return (*head);
}
