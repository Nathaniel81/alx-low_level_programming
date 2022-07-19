#include "lists.h"

listint_t *make_new(int n);

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
	unsigned int i;
	listint_t *temp, *temp_f, *new_node;

	temp = *head;
	if (head == NULL)
		return (NULL);

	new_node = make_new(n);
	if (!new_node)
		return (NULL);

	if (!*head)
	{
		*head = new_node;
		return (new_node);
	}

	if (idx == 0)
		*head = new_node;

	for (i = 0; i < idx - 1 && temp != NULL && idx != 0; i++)
		temp = temp->next;

	if (!temp)
		return (NULL);

	if (idx == 0)
		new_node->next = temp;
	else
	{
		temp_f = temp->next;
		temp->next = new_node;
		new_node->next = temp_f;
	}
	return (new_node);
}

/**
 * make_new - Creates a new node
 * @n: Data passed to add on the new node
 * Return: A pointer to a node
 */

listint_t *make_new(int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	return (new_node);
}
