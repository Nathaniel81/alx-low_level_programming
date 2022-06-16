#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: integer arrays
 * @n: number of elements of thae array
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int i, j;

	i = 0;
	while (i < (n / 2))
	{
		j = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = j;
		i++;
	}
}
