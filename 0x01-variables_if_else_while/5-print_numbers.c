#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0
 * Return: 0
 */
int main(void)
{
	char a;
	char b;

	a = '0';
	b = '\n';

	while (a <= '9')
	{
		putchar(a);
		a = a + 1;
	}
	putchar(b);
	return (0);
}
