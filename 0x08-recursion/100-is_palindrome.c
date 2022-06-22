#include "main.h"
/**
 * is_palindrome - checks if the string is palindrome
 * @s: input string
 * Return 1 on success, on error -1
 */
int is_palindrome(char *s)
{
	int x, len;

	x = 0;
	len = str_len(s);

	if (*s == 0)
		return (1);

	return (pldrm(s, len, x));
}
/**
 * str_len - gets the length of x
 * @s: input
 * 
 * Return 1 on success, -1 on error
 */
int str_len(char *s)
{
	if (*s == '\0')
		return (0);


	return (1 + str_len(s + 1));
}
/**
 * pldrm - annalyzes the strings
 * @x: iteration value
 * @len: string length
 * @s: input 
 * Return 1 on success, on error -1
 */

int pldrm(char *s, int len, int x)
{
	if (s[x] == s[len / 2])
		return (1);

	if (s[x] == s[len - x - 1])
		return (pldrm(s, len, x + 1));
	
	return (0);
}
