#include <stdio.h>
/**
 * main - finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 * followed by a new line
 * Return: Always 0
 */
int main(void)
{
unsigned long int i, j, k, a, x, y, z;
j = 1;
k = 2;

printf("%lu", j);

for (i = 1; i <= 90; i++)
{
printf(", %lu", k);
k = k + j;
j = k - j;
}
a = j / 1000000000;
x = j % 1000000000;
y = k / 1000000000;
z = k / 1000000000;

for (i = 92; i < 99; ++i)
{
printf(", %lu", y + (z / 1000000000));
printf("%lu", z % 1000000000);
y = y + a;
a = y - a;
z = z + x;
x = z - x;
}
printf("\n");
return (0);
}