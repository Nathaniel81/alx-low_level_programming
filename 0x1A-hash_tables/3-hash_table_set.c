#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 *
 * @ht: The hash table to add or update the key/value
 * @key: The key
 * @value: The hash table you want to add or update the key/value
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *traverse;
	unsigned long int idx;
	char *copy;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	idx =  key_index((const unsigned char *) key, ht->size);
	traverse = ht->array[idx];

	while (traverse != NULL)
	{
		if (strcmp(traverse->key, key) == 0)
			break;
		traverse = traverse->next;
	}
	if (traverse == NULL)
	{
		new_node = malloc(sizeof(hash_node_t));
		if (new_node == NULL)
			return (0);
		new_node->key = strdup(key);
		if (new_node->key == NULL)
			return (0);
		new_node->value = strdup(value);
		if (new_node->value == NULL)
			return (0);
		new_node->next = ht->array[idx];
		ht->array[idx] = new_node;
	}
	else
	{
		copy = strdup(value);
		if (copy == NULL)
			return (0);
		free(traverse->value);
		traverse->value = copy;
	}
	return (1);
}