#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _memset - fills memory with a constant byte
 * @s: input pointer
 * @x: constant int
 * @n: number of bytes
 * Return: pointer
 */
char *_memset(char *s, int x, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = x;

	return (s);
}
/**
 * _calloc - allocates memory for an array
 * @nmemb: size of an array
 * @size: size of elements
 * Return: a pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (0);

	ptr = malloc(nmemb * size);
	if (ptr == 0)
		return (0);

	_memset(ptr, 0, size * nmemb);

	return (ptr);
}
