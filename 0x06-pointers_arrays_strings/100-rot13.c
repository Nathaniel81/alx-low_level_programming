#include "main.h"
/**
 * *rot13 - encodes a string using rot13.
 * @s: the string to be encoded
 * Return: encoded string
 */
char *rot13(char *s)
{
int i, j;
char org[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char enc[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == org[j])
			{
				s[i] = enc[j];
				break;
			}
		}
	}
	return (s);
}
