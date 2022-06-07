#include "main.h"
/**
 * print_last_digit - last digit
 * @n: The int to print
 * Return: Always 0.
 */
int print_last_digit(int n)
{
int i;
if (n < 0)
n = -n;
i = n % 10;
_putchar(i + '0');
return(i);
}