#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of the program
 * @ac: argument counter
 * @av: argument vector
 * Return: pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int count = 0, i, j, k = 0, len;
	char *array;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			count++;
		}
	}

	len = count + ac + 1;
	array = (char *)malloc(sizeof(char) * len);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			array[k] = av[i][j];
			k++;
		}
		array[k] = '\n';
		k++;
	}
	array[k] = '\0';
	return (array);
}
