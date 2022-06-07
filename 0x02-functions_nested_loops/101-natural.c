#include <stdio.h>
/**
 * main - check for multiple of 3 & 5
 * Return: Always 0.
 */
int main(void)
{
int i = 1024;
int j;
int sum = 0;

for (j = 0; j < i; j++)
{
if ((j % 3 == 0)||(j % 5 == 0))
{
sum = sum + j;
}
}
printf("%d\n", sum);
return (0);
}