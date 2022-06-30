#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _memcpy - function that copies a memory address
 * @dest: pointer to the string destination
 * @src: pointer to the source string
 * @n: number of bytes
 * Return: pointer to the destination string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to the previously allocated memory
 * @old_size: previously allocated size
 * @new_size: new size
 * Return: pointer to the reallocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		free(ptr);
		return (p);
	}

	p = malloc(new_size);
	if (p == NULL)
		return (NULL);

	_memcpy(p, ptr, old_size);
	free(ptr);
	return (p);
}
