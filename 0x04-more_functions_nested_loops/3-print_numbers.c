#include "main.h"
/**
 * print_numbers - prints the numbers, from 0 to 9
 */

void print_numbers(void)
{
	int pnum;

	for (pnum = 48; pnum < 58; pnum++)
	{
		_putchar(pnum);
	}
	_putchar('\n');
}
