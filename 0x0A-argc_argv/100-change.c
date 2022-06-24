#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - entry point
 * @argc: counts the number of parameters
 * @argv: pointer of array of pointers
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
    int _isnumber(char *s);
    int i = 0, j = 1, k;
    int coins, cents;
    int cov[5] = {25,10,5,2,1};

    coins = 0;
    if (argc == 2)
    {
        if (_isnumber(argv[1]))
        {
            j = 0, cents = atoi(argv[1]);
            if (cents >= 0)
            {
                while (cents != 0)
                {
                    k = cents / cov[i];
                    if (k == 0)
                    {
                        i++;
                    }
                    else
                    {
                        coins = coins + k;
                        cents = cents + (k * cov[i]);
                    }
                }
            }
        }
    }
    if (j == 0)
    printf("%i\n", coins);
    else
    printf("%s\n", "Error");
    return (j);
}
/**
 * _isnumber - checks the string if its a number
 * @s: the string
 * Return: 1 on success, 0 on error
 */
int _isnumber(char *s)
{
    int i = 0, j = 0, chk = 1;

    if (*s == '-')
    i++;
    for (; *(s + i) != 0; i++)
    {
        j = isdigit(*(s + i));
        if (j == 0)
        {
            chk = 0;
            break;
        }
    }
    return (chk);
}
