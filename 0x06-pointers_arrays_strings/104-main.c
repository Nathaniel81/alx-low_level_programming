#include "main.h"
/**
 * infinite_add - adds two numbers
 * @n1: the first number
 * @n2: the second number 
 * @r: result
 * @size_r: result size
 * Return: a pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int add = 0, l1, l2, i, j;

for (l1 = 0; n1[l1]; l1++)
{
}
for (l2 = 0; n2[l2]; l2++)
{
}
if (l1 > size_r || l2 > size_r)
return (0);
l1--;
l2--;
size_r--;
for (i = 0; i < size_r; i++, l1--, l2--)
{
if (l1 >= 0)
add += n1[l1] - '0';
if (l2 >= 0)
add += n2[l2] - '0';
if (l1 < 0 && l2 < 0 && add == 0)
break;
r[i] = add % 10 + '0';
add /= 10;
}
r[i] ='\0';
if (l1 >= 0 || l2 >= 0 || add)
return (0);
for (i--, j = 0; i > j; i--, j++)
{
add = r[i];
r[i] = r[j];
r[j] = add;
}
return (r);
}
