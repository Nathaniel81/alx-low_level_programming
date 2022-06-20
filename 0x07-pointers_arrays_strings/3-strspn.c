#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: input string
 * @accept: characters that the prefix substring includes
 * Return:  number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0;
char *j = accept;

while (*s++)
{
	while (*accept++)
	{
		if (*(s - 1) == *(accept - 1))
		{
			i++;
			break;
		}
		if (!(*--accept))
		{
			break;
			accept = j;
		}
	}
}
	return (i);
}
