#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: the first n bytes of string 2
 * Return: pointer to a newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1]; len1++)
		;

	for (len2 = 0; s2[len2]; len2++)
		;

	if (n < len2)
		len2 = n;

	str = malloc(sizeof(char) * (len1 + len2 + 1));

	if (str == 0)
		return (0);

	for (i = 0; i < len1; i++)
		str[i] = s1[i];

	for (i = 0; i < len2; i++)
	{
		str[len1] = s2[i];
		len1++;
	}

	str[len1] = '\0';

	return (str);
}
