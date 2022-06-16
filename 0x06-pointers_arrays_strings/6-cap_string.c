#include "main.h"
/**
 * cap_string - capitalizes all words of a string.
 * @s: the string
 * Return: s
 */
char *cap_string(char *s)
{
	int i, j;
	int k;
	char abc[] = ",;.!?(){}\nt\" ";

	for (i = 0, k = 0; s[i] != '\0'; i++)
	{
		if (s[0] >= 97 && s[0] <= 122)
			k = 1;
		for (j = 0; abc[j] != '\0'; j++)
		{
			if (abc[j] == s[i])
				k = 1;
		}
		if (k)
		{
			if (s[i] >= 97 && s[i] <= 122)
			{
				s[i] -= 32;
				k = 0;
			}
			else if (s[i] >= 65 && s[i] <= 90)
				k = 0;
			else if (s[i] >= 48 && s[i] <= 57)
				k = 0;
		}
	}

	return (s);
}
