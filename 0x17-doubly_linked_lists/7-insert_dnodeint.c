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
	dlistint_t *nx, *pr, *new_node;
	unsigned int i = 0;

	nx = pr = *h;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (i < idx)
	{
		nx = nx->next;
		if (nx == NULL)
			return (NULL);
		if (i < idx - 1)
			pr = pr->next;
		i++;
	}
	new_node->next = nx;
	nx->prev = new_node;
	pr->next = new_node;
	new_node->prev = pr;

	return (*h);
}
