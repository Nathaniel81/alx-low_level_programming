#include "main.h"
/**
 * *_strncat - concatenates two strings and use at most n bytes from src
 * @src: the string to be concatenated untill n limit
 * @dest: the string to be concatenated
 * @n: number of bytes from src
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0' && n > 0; j++, n--, i++)
	{
		dest[i] = src[j];
	}
	return (dest);
}