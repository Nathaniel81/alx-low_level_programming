#include "hash_tables.h"

/**
 * shash_table_create - Creates a sorted hash table.
 *
 * @size: The size of the array.
 *
 * Return: a pointer to the newely created sorted hash table.
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_table = malloc(sizeof(shash_table_t));
	unsigned long int index = 0;

	if (new_table == NULL)
		return (NULL);

	new_table->size = size;
	new_table->array = malloc(sizeof(shash_node_t *) * size);

	if (new_table->array == NULL)
		return (NULL);

	for (; index < size; index++)
		new_table->array[index] = NULL;

	new_table->shead = NULL;
	new_table->stail = NULL;

	return (new_table);
}

/**
 * shash_table_set - Adds an element to the sorted hash table.
 *
 * @ht: The sorted hash table to be added or update the key/value
 * @key: The key
 * @value: The value associated with the key
 *
 * Return: 1 if it succeeded, otherwise 0
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node, *traverse;
	unsigned long int idx;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	/*printf(">>>>>>>>>>>>>>>>>>>>>>>>>>%u\n", idx);*/
	traverse = ht->shead;
	while (traverse != NULL)
	{
		if (strcmp(traverse->key, key) == 0)
		{
			free(traverse->value);
			traverse->value = strdup(value);
			return (1);
		}
		traverse = traverse->snext;
	}
	new_node = malloc(sizeof(shash_node_t));

	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;

	if (ht->shead == NULL)
	{
		new_node->sprev = NULL;
		new_node->snext = NULL;
		ht->shead = new_node;
		ht->stail = new_node;
	}
	else if (strcmp(key, ht->shead->key) < 0)
	{
		new_node->sprev = NULL;
		new_node->snext = ht->shead;
		ht->shead->sprev = new_node;
		ht->shead = new_node;
	}
	else
	{
		traverse = ht->shead;
		while (traverse->snext != NULL && strcmp(traverse->snext->key, key) < 0)
			traverse = traverse->snext;
		new_node->sprev = traverse;
		new_node->snext = traverse->snext;
		if (traverse->snext == NULL)
			ht->stail = new_node;
		else
			traverse->snext->sprev = new_node;
		traverse->snext = new_node;
	}

	return (1);
}

/**
 * shash_table_get - Retrives a value associated with the key.
 *
 * @ht: The sorted hash table to look into.
 * @key: The key to look for
 *
 * Return: the value associated with the element.
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	node = ht->shead;
	while (node != NULL && strcmp(node->key, key) != 0)
		node = node->snext;

	if (node == NULL)
		return (NULL);
	return (node->value);
}

/**
 * shash_table_print - Prints a sorted hash table.
 *
 * @ht: The sorted hash table.
 *
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	node = ht->shead;
	printf("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->snext;
		if (node != NULL)
			printf(", ");
	}

	printf("}\n");
}

/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order.
 *
 * @ht: The sorted hash table.
 *
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	node = ht->stail;
	printf("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;
		if (node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes the sorted hash table.
 *
 * @ht: The sorted hash table.
 *
 */

void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *node, *tmp;

	if (ht == NULL)
		return;

	node = ht->shead;
	while (node)
	{
		tmp = node->snext;
		free(node->key);
		free(node->value);
		free(node);
		node = tmp;
	}

	free(head->array);
	free(head);
}
