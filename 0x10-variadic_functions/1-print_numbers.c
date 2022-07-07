#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of arguments
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int count;
	va_list list;

	va_start(list, n);

	if (separator)
	{
		for (count = 1; count <= n; count++)
		{
			printf("%d", va_arg(list, int));
			if (count <= n - 1)
				printf("%s", separator);
		}
	}
	va_end(list);
	printf("\n");
}
