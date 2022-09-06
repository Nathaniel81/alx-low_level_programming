#include "lists.h"
/**
 * sum_dlistint - Computes the sum of all the data (n)
 * of a dlistint_t linked list.
 * @head: A pointer to the head of the list
 *
 * Return: The Sum of all the data
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tr = head;
	int sum = 0;

	while (tr != NULL)
	{
		sum += tr->n;
		tr = tr->next;
	}
	return (sum);
}
