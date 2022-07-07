#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings, followed by a new line
 * @separator: printed between the strings
 * @n: number of parameters
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *s;
	unsigned int i;
	va_list my_str;

	va_start(my_str, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(my_str, char *);

		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);

		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(my_str);
	printf("\n");
}
