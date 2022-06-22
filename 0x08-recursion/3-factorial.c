#include "main.h"
/**
 * factorial - calculates the factorial
 * @n: input number
 * Return: 1 on success, on error -1
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
