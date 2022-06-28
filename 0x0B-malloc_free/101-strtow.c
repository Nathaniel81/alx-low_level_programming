#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _sp - removes spaces
 * @str: string
 * Return: pointer
 */
char *_sp(char *str)
{
	while (*str == ' ')
		str++;
	return (str);
}
/**
 * _wcnt - word counter
 * @str: string
 * Return: number of words
 */
int _wcnt(char *str)
{
	int counter = 0, l = 0;

	if (str[l] == ' ')
		l++;

	while (str[l])
	{
		if (str[l] == ' ' && *(str + l - 1) != ' ')
			counter++;

		if (str[l] != ' ' && *(str + l + 1) == 0)
			counter++;
		l++;
	}
	return (counter);
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
	int count, i, j, k, x = 0, l, ll;

	if (str == NULL || *str == 0)
		return (0);

	count = _wcnt(str);
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
