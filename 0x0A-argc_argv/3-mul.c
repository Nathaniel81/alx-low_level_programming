#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: counts the number of parameters
 * @argv: pointer of array of pointers
 * Return: 0 on sucess
 */
int main(int argc, char **argv)
{
	int x, y;

	y = 0;
	if (argc != 3)
	{
		printf("%s\n", "Error");
		y = 1;
	}
	else
	{
		x = atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", x);
	}
	return (y);
}
