#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @idx: index of the list where the new node should be added.
 * @n: data of the new list.
 * @h: A pointer to the address of the head of the list.
 *
 * Return: address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new_node;

	if (idx == 0)
		return (add_dnodeint(h, n));
	temp = *h;

	for (; idx != 1; idx--)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}
	if (!temp->next)
		return (add_dnodeint_end(h, n));
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->prev = temp;
	new_node->next = temp->next;
	temp->next->prev = new_node;
	temp->next = new_node;

	return (new_node);
}
