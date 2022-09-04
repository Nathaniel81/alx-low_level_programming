#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: the current head of the list
 * @index:  the index of the node, starting from 0
 *
 * Return: the address of the node or NULL if node does not exist
 *
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *temp = head;

	if (!head)
		return (NULL);
	while (temp)
	{
		count++;
		if (count - 1 == index)
			return (temp);
		temp = temp->next;
	}
	return (NULL);
}
