#include "hash_tables.h"

/**
 * key_index - Gives you the index of a key.
 *
 * @size: Size of the array
 * @key: The key
 *
 * Return: The index at which the key/value pair should be stored in the array
 * of the hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	int x = hash_djb2(key);
	return (x % size);
}
