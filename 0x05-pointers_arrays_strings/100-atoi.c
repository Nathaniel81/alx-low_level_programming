#include "main.h"
/**
 * _atoi - converts a string into an integer
 * @s: string input
 * Return: integer
 */
int _atoi(char *s)
{
	int i;
	int x = -1;
	int y = 0;
	int j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			x = x * -1;
			if (s[i] >= '0' && s[i] <= '9')
		{
			y = y * 10;
			y -= (s[i] - '0');
			j = 1;
		}
		else if (j == 1)
			break;
	}
	x = x * y;
	return (y);
}
