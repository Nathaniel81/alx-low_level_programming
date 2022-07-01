#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	unsigned long x;
	int i, j;

	if (argc != 3)
	{
		printf("Error");
		exit(98);
	}

	i = 1;
	while (i < argc)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] <= 47 || argv[i][j] >= 58)
			{
				printf("Error");
				exit(98);
			}
		}
		i++;
	}

	x = atoi(argv[1]) * atoi(argv[2]);
	printf("%lu", x);

	return (0);
}
