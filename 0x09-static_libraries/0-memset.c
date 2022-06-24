#include "main.h"
/**
 * _memset - fills memory with a constant byte.
 * @n: number of bytes
 * @s: input pointer to string
 * @b: constant char
 * Return: pointer to the s string;
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}