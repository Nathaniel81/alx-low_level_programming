#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _atoi_digit - converts to an int
 * @d: the char to be converted
 * Return: an integer
 **/
int _atoi_digit(char i)
{
unsigned int d;

if (i >= '0' && i <= '9')
d = i - '0';
return (d);
}
/**
 * _isDigit - checks the string if it is a number
 * @argv: pointer to string
 * Return: 0 on success
 */
int _isDigit(char *argv)
{
	int i;

	for (i = 0; argv[i]; i++)
		if (argv[i] < 48 || argv[i] > 57)
			return (1);

	return (0);
}
/**
 *_calloc - allocates array
 * @nmemb: number of elements
 * @size: size of element
 * Return: pointer to the allocated array
 **/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int i;

	a = malloc(size * nmemb);

	if (a == NULL)
	return (NULL);

	for (i = 0; i < (size * nmemb); i++)
		a[i] = '0';

	return (a);
}
/**
 * mul_array - multiplies two arrays
 * @a1: array 1
 * @l1: length of array a1
 * @a2: character
 * @a3: result
 * @la: length of array a3
 * Return: pointer
 **/
void *mul_array(char *a1, int l1, char a2, char *a3, int la)
{
	int mul = 0, i, j = la;

	for (i = l1 - 1; i >= 0 ; i--)
	{
		mul = mul + (a1[i] - '0') * (a2 - '0') + (a3[j] - '0');
		a3[j] = (mul % 10) + '0';
		mul = mul / 10;
		j--;
	}

	while (mul != 0)
	{
		mul += a3[j] - '0';
		a3[j] = (mul % 10) + '0';
		mul /= 10;
		j--;
	}

	return (a3);
}
/**
 * print_array - prints all the digits
 * @num: number of elements
 * @a: array
 * Return: nothing
 **/
void print_array(char *a, int num)
{
	int i = 0;

	while (a[i] == '0' && (i + 1) < num)
	i++;

	for (; i < num; i++)
	{
		_putchar(a[i]);
	}
	_putchar(10);
}
/**
 * main - entry point
 * @argc: argument counter (length)
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int i, l1, l2, j, l;
	char err[5] = {'E', 'r', 'r', 'o', 'r', '\n'};
	char *aa;

	if (argc != 3 || _isDigit(argv[1]) == 1 || _isDigit(argv[2]) == 1)
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
	aa = _calloc(l, sizeof(int));
	if (aa == NULL)
	{
		free(aa);
		return (0);
	}
	for (i = l2 - 1, j = 0; i >= 0; i--)
	{
		aa = mul_array(argv[1], l1, argv[2][i], aa, (l - 1 - j));
		j++;
	}
	print_array(aa, l);
	free(aa);

	exit(EXIT_SUCCESS);
	return (0);
}
