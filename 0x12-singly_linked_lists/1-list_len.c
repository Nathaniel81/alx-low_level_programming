#include "lists.h"

/**
 * list_len - Counts number of elements in a linked list_t list
 * @h: The pointer to the head of the list
 *
 * Return: Number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
