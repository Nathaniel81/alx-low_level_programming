#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the array
 * @height: height of the array
 * Return: a pointer to the array
 */
int **alloc_grid(int width, int height)
{
	int **s;
	int i, j;

	if (width <= 0 || height <= 0)
		return (0);

	s = (int **)malloc(sizeof(int *) * height);

	if (s == NULL)
		return (0);

	for (i = 0; i < height; i++)
	{
		*(s + i) = (int *)malloc(sizeof(int) * width);

		if (s[i] == NULL)
		{
			while (i >= 0)
			{
				free(s[i]);
				i--;
			}

			free(s);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			s[i][j] = 0;
	}

	return (s);
}
