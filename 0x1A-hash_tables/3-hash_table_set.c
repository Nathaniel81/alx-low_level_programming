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
	hash_node_t *head, *new_node;
	unsigned long int idx = key_index((const char *)key, ht->size);
	head = ht->array[idx];
	/*traverse = ht->array[idx];*/

	if (ht == NULL || key == NULL || value == NULL)
		return (1);

	if (head == NULL)
	{
		new_node = malloc(sizeof(hash_node_t));
		if (new_node == NULL)
			return (1);
		new_node->key = strdup(key);
		if (new_node->key == NULL)
			return (1);
		new_node->value = strdup(value);
		if (new_node->value == NULL)
			return (1);
		new_node->next = head;
		head = new_node;
		/*printf("%s\n", head->key);
		printf("%s\n", head->value);
		printf("%d\n", idx);*/
	}
	else
	{
		while (head)
		{
			if (strcmp(head->key, key) == 0)
			{
				free(head->value);
				head->value = strdup(value);
				if (head->value == NULL)
					return (1);
				return (0);
			}
			head = head->next;
		}
		new_node = malloc(sizeof(hash_node_t));
		if (new_node == NULL)
			return (1);
		new_node->key = strdup(key);
		if (new_node->key == NULL)
			return (1);
		new_node->value = strdup(value);
		if (new_node->value == NULL)
			return (1);
		new_node->next = head;
		head = new_node;
	}
	/*printf("%s\n", head->value);*/
	return (0);
}
