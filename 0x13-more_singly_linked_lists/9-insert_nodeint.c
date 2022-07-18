#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: A pointer that points to the head of the listint_t list pointer.
 * @idx: The index of the list where the new node should be added.
 * Index starts at 0
 * @n: The data for the new node to contain.
 *
 * Return: The address of the new node, or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp, *p_node;
	unsigned int i;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

		new->n = n;
		new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		temp = *head;

		while(idx)
		{
			p_node = temp;
			if (!temp)
				return (NULL);
			temp = temp->next;
			idx--;
		}
		new->next = temp;
		p_node->next = new;
	}
	return (new);
}

