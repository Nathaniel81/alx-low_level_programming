#include "main.h"
/**
 * print_number - print an integer
 * @n: tracked var
 */
void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar(45);
		i = -i;
	}
	if ((i / 10) > 0)
	{
		print_number(x / 10);
	}
	_putchar((i % 10) + 48);
}