#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: counts the number of parameters
 * @argv: ponter of array of pointers
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	(void)argv;

	printf("%i\n", argc - 1);
	return (0);
}
