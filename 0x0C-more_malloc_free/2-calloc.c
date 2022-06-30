#include "main.h"
#include <stdlib.h>
#include <stdio.h>
char *_memset(char *s, int b, unsigned int n);

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

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
/**
 * _memset - fills memory with a constant byte
 * @n: number of bytes
 * @s: initial address
 * @b: constant int
 * Return: pointer
 */
char *_memset(char *s, int b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
		s[i] = b;

	return (s);
}
