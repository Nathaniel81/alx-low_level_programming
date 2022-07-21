#include "main.h"

/**
 * print_binary - Prints a binary representation of a number.
 * @n: The number passed to the function.
 *
 */

void print_binary(unsigned long int n)
{
		if (n > 1)
			print_binary(n >> 1);

		_putchar((n & 1) + 48);
}
