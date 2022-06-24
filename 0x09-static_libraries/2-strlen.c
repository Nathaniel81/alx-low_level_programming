#include "main.h"
/**
 * _strlen - a function returns the length of a string.
 * @s: pointer s character.
 * Return: length of the string
 */

int _strlen(char *s)
{
	int i;
	int l = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		l++;
	}
	return (l);
}