#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 * @argc: counts the number of parameters
 * @argv: pointer
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
