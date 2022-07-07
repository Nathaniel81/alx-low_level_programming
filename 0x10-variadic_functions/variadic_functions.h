#ifndef VARFUNC_H
#define VARFUNC_H

#include <stdarg.h>
/**
 * struct printer - new struct type that defines a printer
 * @symbol: symbol that represents a data type
 * @print: function pointer
 */
typedef struct printer
{
	char *symbol;
	void (*print)(va_list arg);

} printer_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
