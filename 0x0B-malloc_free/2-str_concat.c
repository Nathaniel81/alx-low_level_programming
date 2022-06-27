#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: destination string
 * @s2: source string
 * Return: a pointer to a newly allocated space, on success
 *         NULL - on failer
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, j, k, a = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (s1 != NULL)
	{
		for (i = 0; s1[i]; i++)
		;
	}

	if (s2 != NULL)
	{
		for (j = 0; s2[j]; j++)
		;
	}

	s = (char *)malloc(sizeof(char) * ((i + j) + 1));

	if (s == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		s[k] = s1[k];

	s[k] = '\0';

	for (a = 0; s[a]; a++)
	{
		s[i] = s2[a];
		i++;
	}
	s[i] = '\0';

	return (s);
}
