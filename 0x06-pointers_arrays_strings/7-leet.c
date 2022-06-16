#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: a pointer to char
 * Return: *s
 */
char *leet(char *s)
{
	int x, y;
	char o[] = "ol_ea__t";

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; o[y] != '\0'; y++)
		{
			if (s[x] == o[y] || s[x] == (o[y] - 32))
			{
				s[x] = y + '0';
			}
		}
}
return (s);
}
