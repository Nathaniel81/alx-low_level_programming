#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: counts the number of parameters
 * @argv: pointer of array of pointers
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int i;

	if (argc > 0)
	{
		i = 0;
		while (i < argc)
		{
			printf("%s\n", argv[i]);
			i++;
		}
	}
	return (0);
}
