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
int i, j;
int x = 0, y = 0;

for (j = 0, i = size - 1; j < (size * size); j += size + 1, i += size - 1)
{
	x += a[j], y += a[i];
}
	printf("%d, %d\n", x, y);
}

