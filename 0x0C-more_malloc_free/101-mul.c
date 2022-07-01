#include "main.h"
#include <stdlib.h>
/**
 * _atoi_digit - converts to an int
 * @x: character to convert.
 * Return: converted int
 */
int _atoi_digit(char x)
{
	unsigned int n;

	if (x <= '9' && x >= '0')
		n = x - '0';
	return (n);
}

/**
 * _isNumber - checks if the string is a number
 * @argv: argument vector (pointer to the string)
 * Return: 0 on success
 */
int _isNumber(char *argv)
{
	int i;

	for (i = 0; argv[i]; i++)
		if (argv[i] < 48 || argv[i] > 57)
			return (1);

	return (0);
}
/**
 *_calloc - allocate array
 * @nmemb: number of elements
 * @size: size of element
 * Return: pointer to the allocated array.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *t;
	unsigned int i;

	t = malloc(size * nmemb);

	if (t == NULL)
		return (NULL);

	for (i = 0; i < (size * nmemb); i++)
		t[i] = '0';

	return (t);
}
/**
 * mul_array - multiplies two arrays
 * @a1: first array
 * @l1: length of the first array
 * @a2: character
 * @a3: result
 * @la: length of a3
 * Return: pointer
 */
void *mul_array(char *a1, int l1, char a2, char *a3, int la)
{
	int mul = 0, i, k;

	k = la;
	for (i = l1 - 1; i >= 0 ; i--)
	{
		mul += (a1[i] - '0') * (a2 - '0') + (a3[k] - '0');
		a3[k] = (mul % 10) + '0';
		mul /= 10;
		k--;
	}

		while (mul != 0)
		{
			mul += a3[k] - '0';
			a3[k] = (mul % 10) + '0';
			mul /= 10;
			k--;
		}

	return (a3);
}
/**
 * print_array - prints the array
 * @num: number of elements
 * @a: array elements
 */
void print_array(char *a, int num)
{
	int i = 0;

	while (a[i] == '0' && (i + 1) < num)
	{
		i++;
	}
	for (; i < num; i++)
	{
		_putchar(a[i]);
	}
	_putchar(10);
}
/**
 *main - print the multiple of 2 ints
 *@argc: argument counter (array length)
 *@argv: arrgument vector
 *Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i, x, l1, l2, l;
	char err[6] = {'E', 'r', 'r', 'o', 'r', '\n'};
	char *tab;

	if (argc != 3 || _isNumber(argv[1]) == 1 || _isNumber(argv[2]) == 1)
	{
		for (i = 0; i < 6; i++)
		{
			_putchar(err[i]);
		}
		exit(98);
	}
	
	for (l1 = 0; argv[1][l1]; l1++)
	;
	for (l2 = 0; argv[2][l2]; l2++)
	;

	l = l1 + l2;
	tab = _calloc(l, sizeof(int));
	if (tab == NULL)
	{
		free(tab);
		return (0);
	}

	for (i = l2 - 1, x = 0; i >= 0; i--)
	{
		tab = mul_array(argv[1], l1, argv[2][i], tab, (l - 1 - x));
		x++;
	}
	print_array(tab, l);
	free(tab);
	exit(EXIT_SUCCESS);

	return (0);
}
