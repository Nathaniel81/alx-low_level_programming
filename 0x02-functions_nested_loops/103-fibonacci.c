#include <stdio.h>
/**
 * main = print first 50 fibonacci
 * Return: Always 0
 */
int main(void)
{
long int i, x = 1, y = 2, sum = 0, fsum = 0;

for (i = 0; i <= 48; i++)
{
if ((y % 2 == 0) && (y <= 4000000))
{
fsum = fsum + y;
}
sum = x + y;
x = y;
y = sum;
}
printf("%ld\n", fsum);
return (0);
}