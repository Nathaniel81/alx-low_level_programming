#include <stdio.h>
/**
 * main - Prints the lowercase alphabet in reverse, followed by a new line
 * Return: 0
 */
int main(void)
{
	char z;
	char n;

	z = 'z';
	n = '\n';

	while (z >= 'a')
	{
		putchar(z);
		z = z - 1;
	}
	putchar(n);
	return (0);
}
