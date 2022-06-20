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
	int i, j, k;

	j = 0;
	k = 0;

	for (i = 0; i < size; i++)
	{
		j += *(a + (size * i + i));
		k += *(a + (size * i + size - 1 - i));
	}
	printf("%d,", j);
	printf("%d\n", k);
}
