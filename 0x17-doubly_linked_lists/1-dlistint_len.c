#include <stdio.h>
#include "lists.h"

/**
 *dlistint_len - displays the number of elements in the linked list
 *@h: the head of the list
 *
 *Return: the number of elements in the linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	unsigned int count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
