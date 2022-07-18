#include "lists.h"

/**
 * get_nodeint_at_index - Gets the data of the nth node of the linked list.
 * @head: A pointer to the head of the list.
 * @index: The index of the node, starting at 0.
 *
 * Return: The nth node of a listint_t linked list,
 * or NULL if the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;

	if (!head)
		return (NULL);

	temp = head;

	while (index != 0)
	{
		if (!temp)
			return (NULL);

		temp = temp->next;
		index--;
	}
	return (temp);
}

