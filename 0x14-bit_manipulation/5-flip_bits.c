#include "main.h"

/**
 * flip_bits -  Counts the number of bits to be fliped.
 * @n: First number input to compare.
 * @m: Second number input to compare
 *
 * Return: The number of bits needed to flip to get from one number to another.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0, count = 0;
	unsigned long int j = sizeof(unsigned long int) * 8;

	for (; i < j; i++)
	{
		if ((m & 1) != (n & 1))
			count += 1;
		n = n >> 1;
		m = m >> 1;
	}

	return (count);
}
