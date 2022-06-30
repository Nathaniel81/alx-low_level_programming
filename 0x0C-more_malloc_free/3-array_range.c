#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to the allocated memory
 */
int *array_range(int min, int max)
{
	int i = 0, j, n, *ptr;

	if (min > max)
		return (NULL);
	else if (max > min)
		n = max - min + 1;

	ptr = malloc(sizeof(int) * n);
	if (ptr == 0)
		return (0);

	for (j = min; j <= max; j++)
	{
		*(ptr + i) = j;
		i++;
	}
	return (ptr);
}
