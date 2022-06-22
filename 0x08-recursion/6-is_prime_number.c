#include "main.h"
/**
 * is_prime_number - checks for prime number
 * @n: input number
 * Return: 1 on success, on error 0
 */
int is_prime_number(int n)
{
	int prNum(int x, int b);

	if (n <= 1)
	{
		return (0);
	}
	return (prNum(n, 2));
}
/**
 * prNum - assess up to n
 * @x: int passed by the function
 * @y: iteration number
 * Return: 1 on success, on error -1
 */
int prNum(int x, int y)
{
	if (x == y)
	{
		return (1);
	}
	else if (x % y == 0)
	{
		return (0);
	}
	return (prNum(x, y + 1));
}
