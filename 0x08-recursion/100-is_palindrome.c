#include "main.h"
/**
 * is_palindrome - checks if the string is palindrome
 * @s: input string
 * Return 1 on success, on error -1
 */
int is_palindrome(char *s)
{
	int plDrm(char *x, int len);
	int plDrm2(char *x, int len);
	
	int len;

	len = plDrm(s, 0);
	return (plDrm2(s, 1));
}
/**
 * plDrm - gets the length of x
 * @x: the string
 * @len: int length
 * Return 1 on success, -1 on error
 */
int plDrm(char *x, int len)
{
	if (*x == 0)
	{
		return (len - 1);
	}
	return (plDrm(x + 1, len + 1));
}
/**
 * plDrm2 - annalyzes the strings
 * @x: string input
 * @len: string length
 * Return 1 on success, on error -1
 */
int plDrm2(char *x, int len)
{
	if (*x != *(x + 1))
	{
		return (0);
	}
	else if (*x == 0)
	{
		return (1);
	}
	return (plDrm2(x + 1, len - 2));
}
