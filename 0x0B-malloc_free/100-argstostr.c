#include <stdlib.h>
#include "main.h"

/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: argument counter (argc)
 * @av: arguments vector (argv)
 *
 * Return: pointer to new string array
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j;
	int k = 0, length = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		length = length + _strlen(av[i]);
	}
	length = length + (ac + 1);

	str = (char *)malloc(length * sizeof(char));

	if (str == NULL)
	{
		free(str);
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < _strlen(av[i]); j++)
		{
			str[k++] = av[i][j];
		}
		str[k++] = '\n';
	}

	return (str);
}

/**
 * _strlen - function that returns the length of a string
 * @str: string
 * Return: length of string
 */

int _strlen(char *str)
{
	int length = 0;
	int i = 0;

	while (str[i] != '\0')
	{
		length++;
		i++;
	}
	return (length);
}
