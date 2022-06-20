#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: input string
 * @accept: characters that the prefix substring includes
 * Return:  number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j, len = 0, l = 0;

while (accept[len] != '\0')
{
	len++;
}
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < len; j++)
		{
			if (s[i] == accept[j])
			{
				l++, j = len;
			}
			else
			{
				if (j == len - 1)
					goto exit;
			}
		}
	}
exit: return (l);
}
