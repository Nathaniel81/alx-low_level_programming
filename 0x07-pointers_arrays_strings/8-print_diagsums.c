#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: input array
 * @size: size of the array
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int i, j, x;
	int n = size * size;

	for (i = 0; i < n; i += size + 1)
	{
		j += a[i];
	}
	for (i = size - 1; i < n - 1; i += size - 1)
	{
		x += a[i];
	}
	printf("%d, %d\n", j, x);
}
