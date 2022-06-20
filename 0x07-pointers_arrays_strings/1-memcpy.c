#include "main.h"
/**
 * _memcpy - input
 * @dest: pointer to the string destination
 * @src: pointer to the source string
 * @n: number of bytes
 * Return: pointer to the destination string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
