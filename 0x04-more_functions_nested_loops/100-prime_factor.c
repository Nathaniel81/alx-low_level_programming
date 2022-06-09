#include <stdio.h>
#include <math.h>
/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: 0
 */
int main(void)
{
	long int i, num, lpn;

	num = 612852475143;
	lpn = -1;

	while (num % 2 == 0)
	{
		lpn = 2;
		num /= 2;
	}
	for (i = 3; i <= sqrt(num); i = i + 2)
	{
		while (num % i == 0)
		{
			lpn = i;
			num = num / i;
		}
	}

	if (num > 2)
		lpn = num;
	printf("%ld\n", lpn);

	return (0);
}
