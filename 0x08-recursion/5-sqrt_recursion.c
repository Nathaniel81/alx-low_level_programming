#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input number
 * Return: 1 on success, on error -1
 */
int _sqrt_recursion(int n)
{
	int sqRt(int x, int y);

	return (sqRt(n, 1));
}
/**
 * sqRt - calculates the square root of an int
 * @x: the int passed by the function
 * @y: iteration number
 * Return: 1 on success, on error -1
 */
int sqRt(int x, int y)
{
	if (y * y > x)
	{
		return (-1);
	}
	else if (y * y == x)
	{
		return (y);
	}
	return (sqRt(x, y + 1));
}
