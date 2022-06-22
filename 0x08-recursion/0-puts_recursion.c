#include "main.h"
/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: the string to be printed
 * Return: 0
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		_putchar(10);
		return;
	}
	_putchar(s[i]);
	i++;
	_puts_recursion(&s[i]);
}
