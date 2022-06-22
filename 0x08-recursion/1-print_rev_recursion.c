#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: the string
 * Return: 0
 */
void _print_rev_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		_print_rev_recursion(&s[i + 1]);
		_putchar(s[i]);
	}
}
