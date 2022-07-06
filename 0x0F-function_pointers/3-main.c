#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the result of the operation
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	char *s;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	s = argv[2];

	if (*s != '+' && *s != '-' && *s != '/' && *s != '%' && *s != '*')
	{
		printf("Error\n");
		exit(99);
	}

	func = get_op_func(s);
	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", func(num1, num2));
	return (0);
}

