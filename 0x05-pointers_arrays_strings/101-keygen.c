#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
/**
 * main - generates random valid passwords.
 * 
 * Return: 0 
 */

int main(void)
{
	int i, sum, n;
	int passwd[100];
    int a = 2772;

	sum = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		passwd[i] = rand() % 78;
		sum += (passwd[i] + '0');
		putchar(passwd[i] + '0');
		if ((a - sum) - '0' < 78)
		{
			n = a - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}

	return (0);
}
