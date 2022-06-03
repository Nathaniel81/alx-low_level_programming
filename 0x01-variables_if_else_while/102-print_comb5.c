#include <stdio.h>
#include <stdio.h>
/**
 * main - Prints all possible combinations of two two-digit numbers
 * Return: 0;
 */
int main(void)
{
	int k;
	int j;
	int i;
	int c;

	for (k = 48; k <= 57; k++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (c = 48; c <= 57; c++)
			{
				for (i = 48; i <= 57; i++)
				{
				if (((c + i) > (k + j) && c >= k) || k < c)
				{
					putchar(k);
					putchar(j);
					putchar(' ');
					putchar(c);
					putchar(i);

					if (k + j + c + i == 227 && k == 57)
					{
					break;
					}
					else
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
