#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - program that adds positive number
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int j;
	int sum = 0;

	if (argc < 2)
        {
                printf("0\n");
		return (0);
        }

        for (j = 1; j < argc; j++)
        {
                if ((_isdigits(argv[j])))
                {
                        sum += atoi(argv[j]);
                }
                else
                {
                        printf("Error\n");
			return (1);
                }
        }
        printf("%d\n", sum);
        return (0);
}

/**
 * _isdigits - function to check if arguement passed is a digit
 * @str: argument to check
 *
 * Return: 0 success 1 if not
 */
int _isdigits (char *str)
{
	int i;
	
	for (i = 0; str[i]; i++)
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			return (0);
		}
	}
	return (1);
}
