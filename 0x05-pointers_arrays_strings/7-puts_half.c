#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: input string
 */
void puts_half(char *str)
{
	int i, l, n;

	for (l = 0; str[l] != '\0'; l++)
	{
	}

	n = (l - 1) / 2;
	for (i = n + 1; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar(10);
}
