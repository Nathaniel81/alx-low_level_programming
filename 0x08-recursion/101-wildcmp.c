#include "main.h"
/**
 * wildcmp - compares two strings to check if they are identical
 * @s1: string 1
 * @s2: string 2, with wild card
 * Return: 1 on success
 */
int wildcmp(char *s1, char *s2)
{
	if (!*s1 && !*s2)
	{
		return (1);
	}
	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	if (*s2 == '*')
	{
		if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
		{
			return (0);
		}
		if (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2))
		{
			return (1);
		}
	}
	return (0);
}
