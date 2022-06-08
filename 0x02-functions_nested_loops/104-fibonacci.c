#include <stdio.h>
/**
 * main - finds and prints the first 98 Fibonacci numbers
 * starting with 1 and 2, followed by a new line
 * Return: Always 0
 */
int main(void)
{
	unsigned long int i;
	unsigned long int j = 1;
	unsigned long int k = 2;
	unsigned long int j1;
	unsigned long int j2;
	unsigned long int k1;
	unsigned long int k2;
	unsigned long int l = 1000000000;

	printf("%lu", j);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", k);
		k += j;
		j = k - j;
	}

	j1 = (j / l);
	j2 = (j % l);
	k1 = (k / l);
	k2 = (k % l);

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", k1 + (k2 / l));
		printf("%lu", k2 % l);
		k1 = k1 + j1;
		j1 = k1 - j1;
		k2 = k2 + j2;
		j2 = k2 - j2;
	}
	printf("\n");
	return (0);
}