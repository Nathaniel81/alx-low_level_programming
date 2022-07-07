#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of arguments
 * Return: 0 on success
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int count;
	va_list list;

	va_start(list, n);

	if (n == 0)
		return (0);

	for (count = 1; count <= n; count++)
		sum += va_arg(list, int);
	va_end(list);
	return (sum);
}
