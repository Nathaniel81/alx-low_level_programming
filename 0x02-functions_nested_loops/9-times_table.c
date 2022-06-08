#include "main.h"
/**
 * times_table - prints table
 * Return: Always 0.
 */
void times_table(void)
{
int i;
int j;
int k;

for (i = 0; i < 10; i++)
	{
	for (j = 0; j < 10; j++)
	{
		k = i * j;
		if ((k / 10) == 0)
		{
			if (j == 0)
			{
			_putchar ('0');
			}
			if (j != 0)
			{
			_putchar (' ');
			_putchar ((k % 10) + '0');
			}
			if (j < 9)
			{
			_putchar(',');
			_putchar (' ');
			}
		}
		else
		{
		_putchar ((k / 10) + '0');
		_putchar ((k % 10) + '0');
			if (j < 9)
			{
			_putchar (',');
			_putchar (' ');
			}
		}
			}
			_putchar ('\n');
	}
}
