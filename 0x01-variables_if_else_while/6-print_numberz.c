#include <stdio.h>
/**
 * main - Prints all single digit numbers of base 10 starting from 0
 * Return: 0;
 */
int main(void)
{
	int a;
	int n;

	a = '0';
	n = '\n';

	while (a <= '9')
	{
		putchar(a);
		a = a + 1;
	}
	putchar(n);
	return (0);
}
