#include "hash_tables.h"
#include <string.h>

#define SUCCESS  1
#define FAILURE  0

/**
 * hash_table_set - Adds an element to the hash table. In case of collision,
 * it will add an element at the beginning of  the list.
 *
 * @ht: The hash table you want to add or update the key/value to
 * @key: The key, and cannot be empty string.
 * @value: The value associated with the key, and can be empty string.
 *
 * Return: 1 if it succeeded, 0 otherwise
 *
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newNode, *temp;
	unsigned long int i;
	char *copy;

	if (ht == NULL || key == NULL || *key == 0 || value == NULL)
		return (0);

	i =  key_index((const unsigned char *) key, ht->size);
	temp = ht->array[i];

	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
			break;
		temp = temp->next;
	}
	if (temp == NULL)
	{
		newNode = malloc(sizeof(hash_node_t));
		if (newNode == NULL)
			return (FAILURE);
		newNode->key = strdup(key);
		if (newNode->key == NULL)
			return (FAILURE);
		newNode->value = strdup(value);
		if (newNode->value == NULL)
			return (FAILURE);
		newNode->next = ht->array[i];
		ht->array[i] = newNode;
	}
	else
	{
		copy = strdup(value);
		if (copy == NULL)
			return (0);
		free(temp->value);
		temp->value = copy;
	}
	return (1);
}
