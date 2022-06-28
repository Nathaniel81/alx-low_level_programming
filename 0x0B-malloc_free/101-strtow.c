#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _sp - removes spaces
 * @str - string
 * Return: pointer
 */
char *_sp(char *str)
{
	while (*str == ' ')
		str++;
	return (str);
}
/**
 * strtow - returns a pointer to an array of strings
 * @str: string input
 * Return: a double pointer
 */
char **strtow(char *str)
{
	char **s;
	char *st;
	int count = 0, i, j, k, x = 0, l = 0, ll;

	if (str == NULL || *str == 0)
		return (0);
	if (str[l] == ' ')
		l++;
	while (str[l])
	{
		if (str[l] == ' ' && *(str + l - 1) != ' ')
		       count++;

		if (str[l] != ' ' && *(str + l + 1) == 0)
			count++;
		l++;
	}
	if (count == 0)
		return (0);

	s = (char **)malloc((count + 1) * sizeof(char *));
	if (s == 0)
		return (0);
	st = _sp(str);
	for (i = 0; i < count; i++)
	{
		l = 0;
		while (*(st + l) != ' ' && *(st + l) != 0)
			l++;
		s[i] = (char *)malloc(sizeof(char) * (l + 1));
		if (s[i] == 0)
		{
			x = 1;
			break;
		}
		for (j = 0, ll = 0; ll < l; ll++, j++)
			s[i][j] = *(st + ll);
		s[i][j] = '\0';
		st = _sp(st + l);
	}
	s[i] = NULL;
	if (x == 1)
	{
		for (k = 0; k <= i; k++)
			free(*(s + k));
		free(s);
	}
	return (s);
}
