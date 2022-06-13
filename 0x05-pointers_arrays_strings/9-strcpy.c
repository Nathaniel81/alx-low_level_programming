#include "main.h"
/**
 * *_strcpy - copies the string pointed to by src
 * @src: pointer.
 * @dest: pointer.
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, l;

	for (l = 0; src[l] != '\0'; l++)
	{
	}
	for (i = 0; i <= l; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
