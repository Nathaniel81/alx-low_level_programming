#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - adds two ints
 * @a: input int 1
 * @b: input int 2
 * Return: sum of the inputs
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - substracts two ints
 * @a: input int 1
 * @b: input int 2
 * Return: the difference of the inputs
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies two ints
 * @a: input int 1
 * @b: input int 2
 * Return: the product of the inputs
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides two ints
 * @a: input int 1
 * @b: input int 2
 * Return: the division of the two inputs
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - gets the reminder of the division
 * @a: input int 1
 * @b: input int 2
 * Return: the reminder of the two inputs
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
