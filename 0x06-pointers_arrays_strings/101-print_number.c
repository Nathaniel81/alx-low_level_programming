#include "main.h"
#include <stdio.h>
/**
 * print_number - prints an integer.
 * @n: numbers to be printed
 * Return: 0
 */
void print_number(int n)
{
int i, j, k;
j = 0;
k = n;
i = 1;

if (n < 0)
{
	_putchar('-');
	j = 1;
}
while (k > 9 || k < -9)
{
	i *= 10;
	k /= 10;
}
while (i > 0)
{
	if (i > 9)
	{
		if (!j)
			_putchar((n / i % 10) + '0');
		else
		{
			_putchar((n / i % 10) * -1 + '0');
		}	i /= 10;
	}
	if (i == 1)
	{
		if (j)
			_putchar((n % 10) * -1 + '0');
		else
		{
			_putchar(n % 10 + '0');
		}	i = 0;
	}
}
}
