#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer pointing to a string of 0 and 1 chars
 * 
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1 b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int bin_num = 0, idx;

		if (b == NULL)
			return (0);

		for (idx = 0; b[idx]; idx++)
			if (b[idx] != '0' && b[idx] != '1')
				return (0);

		for (idx = 0; b[idx]; idx++)
		{
			bin_num <<= 1;
			bin_num += (b[idx] - '0');
		}

	return (bin_num);
}
