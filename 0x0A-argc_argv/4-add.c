#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - entry point
 * @argc: counts the number of parameters
 * @argv: pointrer of array of pointers
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int _isnumber(char *s);
	int i, j, k;

	j = 0;
	k = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (_isnumber(argv[i]))
				j = j + atoi(argv[i]);
			else
				k = 1;
		}
	}
	if (k == 0)
	printf("%i\n", j);
	else
	printf("%s\n", "Error");
	return (k);
}
/**
 * _isnumber - checks the string
 * @s: the string
 * Return: 1 on success, 0 on error
 */
int _isnumber(char *s)
{
	int i = 0, chk = 1, j = 0;

	if (*s == '-')
		i++;
	for (; *(s + i) != 0; i++)
	{
		j = isdigit(*(s + i));
		if (j == 0)
		{
			chk = 0;
			break;
		}
	}
	return (chk);
}
