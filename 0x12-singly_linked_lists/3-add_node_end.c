#include "lists.h"
#include <string.h>

/**
 * str_len - Calculates the length of a string
 * @s: The string input
 *
 * Return: The length of the string
 */

int str_len(const char *s)
{
	int len;

	for (len = 0; s[len]; len++)
		;

	return (len);
}

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: A pointer that points the head of the list pointer
 * @str: The string to be added
 *
 * Return: The address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *t;

	new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = str_len(str);
	new->next = NULL;

	if (!*head)
		*head = new;
	else
	{
		t = *head;
		while (t->next)
			t = t->next;

		t->next = new;
	}
	return (*head);
}
