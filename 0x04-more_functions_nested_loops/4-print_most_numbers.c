#include "main.h"
/**
 * print_most_numbers - prints the numbers without 2 and 4
 *
 */
void print_most_numbers(void)
{
	int n;

	for (n = 48; n <= 58; n++)
	{
		if (n != 50 && n != 52)
			_putchar(n);
	}
}
