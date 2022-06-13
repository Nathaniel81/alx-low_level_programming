#include "main.h"
/**
 * rev_string - prints reversed string
 * @s: A pointer to a char
 * Return: 0 on sucess
 */
void rev_string(char *s)
{
	char *a, *z, c;
	int i, x;
	int l = 0;

	for (i = 0; s[i]; i++)
	{
		l++;
	}
	x = l;

	a = s;
	z = s;

	for (i = 0; i < x - 1; i++)
	{
		z++;
	}

	for (i = 0; i < x / 2; i++)
	{
		c = *z;
		*a = *z;
		*a = c;
		a++;
		z--;
	}
}