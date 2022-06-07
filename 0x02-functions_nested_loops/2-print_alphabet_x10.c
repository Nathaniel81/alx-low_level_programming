#include "main.h"
/**
 *print_alphabet_x10 - print alphabet
 *Return: Always 0.
 */
void print_aphabet_x10(void)
{
	int alphabet;
	int n;

	n = 0;
	while (n <= 9)
	{
		for (alphabet = 'a' ; alphabet <= 'z'; alphabet++)
		{
		_putchar(alphabet);
		}
		n++;
		_putchar('\n');
	}
}	
