#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: input string
 * @accept: characters that the prefix substring includes
 * Return:  number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, l;
	 
	for (i = 0; accept[i] != '\0'; i++)
	{
		for (l = 0; s[l] != '\0'; l++)
		{
			j = 0;
			if (accept[i] == s[l])
			{
				j++;
			}
			if (s[l + 1] < 'A' || s[l + 1] > 'Z')
			{
				if (s[l + 1] < 'a' || s[l + 1] > 'z')
				{
					break;
				}
			}
		}
	}
	return (j);
}
	

