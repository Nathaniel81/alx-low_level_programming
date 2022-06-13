#include "main.h"
/**
 * rev_string - prints reversed string
 * @s: A pointer to a char
 * Return: 0 on sucess
 */
void rev_string(char *s)
{
	char *a = s;
	char n[1000];
	short c = 0;

	while (*s != '\0')
	{
		n[c] = *s;
		s++;
		c++;
	}
	c = 0;
	while (s > a)
	{
		s--;
		*s = n[c];
		c++;
	}
}
