#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 *
 * @ht: The hash table.
 *
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int i = 0, steps = 1;

	if (!ht)
		return;

	printf("{");

	while (i < ht->size)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			if (steps != 0)
			{
				printf("'%s': '%s'", tmp->key, tmp->value);
				/*printf("%u\n", i);*/
				steps = 0;
			}
			else
				printf(", '%s': '%s'", tmp->key, tmp->value);
				/*printf("%u\n", i);*/

			tmp = tmp->next;
		}
		i++;
	}

	printf("}\n");
}
