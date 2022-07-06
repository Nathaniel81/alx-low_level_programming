#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - print name
 * @name: name to be printed
 * @f: function pointer
 * Return: 0 on success
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	f(name);
}
