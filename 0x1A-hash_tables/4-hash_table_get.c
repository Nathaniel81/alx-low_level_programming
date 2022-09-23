#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key.
 *
 * @ht: The hash table to look into
 * @key: The key to look for
 * Return: The value associated with the element, 
 * or NULL if key couldn’t be found
 *
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *traverse;
	unsigned long int idx;

	idx = key_index((const unsigned char *)key, ht->size);
	traverse = ht->array[idx];
	while (traverse)
	{
		if (strcmp(traverse->key, key) == 0)
			return (traverse->value);
		traverse = traverse->next;
	}

	return (NULL);
}
