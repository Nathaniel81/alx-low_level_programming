#include "main.h"
/**
 *_isupper - Checks for uppercase
 *@c: arbitrary character entered by user
 *
 *Return: 1 if uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
