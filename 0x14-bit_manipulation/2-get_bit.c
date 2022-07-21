#include "main.h"

/**
 * get_bit - Gets a bit at a given index.
 * @n: The number passed
 * @index: The index to look for the number
 *
 * Return: The value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int x;

	if (index > 64)
		return (-1);

	x = n >> index;

	return (x & 1);
}
