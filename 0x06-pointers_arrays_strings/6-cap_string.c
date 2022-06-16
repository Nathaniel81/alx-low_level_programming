#include "main.h"
/**
 * cap_string - capitalizes all words of a string.
 * @s: the string
 * Return: s
 */
char *cap_string(char *s)
{
int x, y;
char d[] = " \t\n,;.!?\"(){}";

for (x = 0; s[x] != '\0'; x++)
{
if (s[0] >= 97 && s[0] <= 122)
s[0] = s[0] - 32;
for (y = 0; d[y] != '\0'; y++)
if (s[x] == d[y] && s[x + 1] >= 97 && s[x + 1] <= 122)
s[x + 1] = s[x + 1] - 32;
}
return (s);
}
