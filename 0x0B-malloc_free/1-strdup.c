#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - Returns a pointer to a newly allocated space in memory
 * @str: string input
 * Return: pointer to the duplicated string,
 * NULL on error
 */
char *_strdup(char *str)
{
	int _strlen(char *);
	int len, i;
	char *s;

	if (str == NULL)
		return (NULL);

	len = _strlen(str);

	s = (char *)malloc(sizeof(char) * len);

	for (i = 0; i < len; i++)
		s[i] = str[i];

	return (s);
}
/**
 * _strlen - returns length of the string
 * @s: string input
 * Return: string length
 */
int _strlen(char *s)
{
	int i = 0;

	for (; s[i]; i++)
	;

	return (i);
}
