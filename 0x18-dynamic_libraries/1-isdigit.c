#include "main.h"
/**
 *_isdigit - Decides if some character is a digit
 *@c: Arbitrary character entered/called by user
 *
 *Return: 1 if c is a digit, 0 otherwise.
 */

int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	else
		return (0);

