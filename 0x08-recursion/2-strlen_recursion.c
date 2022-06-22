#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: the string
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		return (1 + _strlen_recursion(&s[i + 1]));
	}
	return (0);
}
