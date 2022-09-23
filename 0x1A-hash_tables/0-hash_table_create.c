#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 *
 * @size: Size of the array
 *
 * Return: A pointer to the newly created hash table 
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newTable;
	int idx = 0;

	newTable = malloc(sizeof(hash_table_t));
	if (newTable == NULL)
		return (NULL);

	newTable->size = size;
	newTable->array = malloc(sizeof(hash_node_t *) * size);

	if (newTable->array == NULL)
		return (NULL);

	for (; idx < size; idx++)
	{
		newTable->array[idx] = NULL;
	}

	return (newTable);
}
