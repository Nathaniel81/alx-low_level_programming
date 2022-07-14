#include "lists.h"
#include <string.h>

/**
 * str_len - Calculates the length of a string
 * @s: The string input
 *
 * Return: Length of the string
 */

int str_len(const char *s)
{
	int len;

	for (len = 0; s[len]; len++)
		;

	return (len);
}

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: A pointer that points to the head of the linked list list_t pointer
 * @str: The string to be added
 * Return: The address of the new element added in the list, otherwise NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = str_len(str);
	new->next = NULL;

	new->next = *head;
	*head = new;

	return (*head);
}
