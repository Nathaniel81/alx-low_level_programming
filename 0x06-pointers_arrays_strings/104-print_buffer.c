#include "main.h"
#include <stdio.h>
/**
 * print_buffer - print the content of size bytes of the buffer
 * @b: buffer addres
 * @size: number of characters
 */
void print_buffer(char *b, int size)
{
int x, y, l;

if (size <= 0)
printf("\n");
else
{
for (x = 0; x < size; x += 10)
{
printf("%.8x:", x);
for (y = x; y < x + 10; y++)
{
if (y % 2 == 0)
printf(" ");
if (y < size)
printf("%.2x", *(b + y));
else
printf("  ");
}
printf(" ");
for (l = x; l < x + 10; l++)
{
if (l >= size)
break;
if (*(b + l) < 32 || *(b + l) > 126)
printf("%c", '.');
else
printf("%c", *(b + l));
}
printf("\n");
}
}
}
