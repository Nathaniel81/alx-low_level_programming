#include <stdio.h>
#include "lists.h"

/**
 * count_n - A function that counts all unique nodes
 * @slow: A pointer that moves one node at a time
 * @fast: A pointer that moves two nodes at a time
 *
 * Return: Number of unique nodes
 */

int count_n(const listint_t *slow, const listint_t *fast)
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
 * find_loop - Finds a loop in the list
 * @head: A pointer to the head of the list
 *
 * Return: Number of nodes, if there is a loop
 * Otherwise, 0;
 */

int find_loop(const listint_t *head)
{
	const listint_t *slow, *fast;

	slow = head->next;
	fast = head->next->next;

	while (fast)
	{
		if (slow == fast)
		{
			slow = head;
			return (count_n(slow, fast));
		}
		slow = slow->next;
		fast = fast->next->next;
	}
	return (0);
}

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: A pointer to the head of the list.
 *
 * Return: Number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	unsigned int nodes;
	unsigned int i;

	if (!head)
		return (0);

	nodes = find_loop(head);

	if (nodes == 0)
	{
		while (head)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			nodes++;
		}
	}
	else
	{
		for (i = 0; i < nodes; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}
