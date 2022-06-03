#include <stdio.h>
/**
 * main - Prints all possible different combinations of three digits
 * Return: 0
 */
int main(void)
{
	int k;
	int e;
	int c;

	for (k = '0'; k <= '9'; k++)
	{
		for (e = '0'; e <= '9'; e++)
		{
			for (c = '0'; c <= '9'; c++)
			{
				if (k < e && e < c)
				{
					putchar(k);
					putchar(e);
					putchar(c);

					if (k != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

