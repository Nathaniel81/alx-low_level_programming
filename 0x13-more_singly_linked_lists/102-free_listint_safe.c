#include "lists.h"
#include <stdio.h>
  
/**
 * count_looped - Counts all unique nodes in the list.
 * @slow: A pointer that moves one node at time.
 * @fast: A pointer that moves two node at a time.
 *
 * Return: Numbe of nodes.
 */

int count_looped(const listint_t *slow, const listint_t *fast)
{
	unsigned int nodes = 1;

		while (fast != slow)
		{
			slow = slow->next;
			fast = fast->next;
			nodes++;
		}

		slow = slow->next;

		while (fast != slow)
		{
			slow = slow->next;
			nodes++;
		}

	return (nodes);
}

/**
 * find_any_loop - finds if there is a loop in the list.
 * @head: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */

size_t find_any_loop(const listint_t *head)
{
	const listint_t *slow, *fast;

	slow = head->next;
	fast = head->next->next;

		while (fast != NULL)
		{
			if (slow == fast)
			{
				slow = head;
				return (count_looped(slow, fast));
			}
			slow = slow->next;
			fast = fast->next->next;
		}
	return (0);
}

/**
 * free_listint_safe - Frees a listint_t list.
 * @h: A pointer that points to the head of the list pointer.
 * 
 * Return: The number of nodes in the list.
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	unsigned int nodes, i;

		if (!*h)
			return (0);

		nodes = find_any_loop(*h);

		if (nodes == 0)
		{
			while (*h)
			{
				temp = (*h)->next;
				nodes++;
				free(*h);
				*h = temp;
			}
			*h = NULL;
		}
		else
		{
			for (i = 0; i < nodes; i++)
			{
				temp = (*h)->next;
				free(*h);
				*h = temp;
			}

			*h = NULL;
		}

		return (nodes);
}
