#include <stdio.h>
//#include "main.h"
char *_strpbrk(char *s, char *accept);
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello, world";
    char *f = "world";
    char *t;

    t = _strpbrk(s, f);
    printf("%s\n", t);
    return (0);
}
char *_strpbrk(char *s, char *accept)
{
unsigned int i, j;

for (i = 0; s[i] != '\0'; i++)
{
    for (j = 0; accept[j] != '\0'; j++)
    {
        if (s[i] == accept[j])
        goto exit;
    }
}
    exit: return (s[i] != '\0' ? s + i: '\0');
}
