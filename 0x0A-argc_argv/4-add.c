#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program that adds positive number
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	 int i, j;
	 int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	for (j = 1; j < argc; j++)
	{
		if (!(isdigit(argv[j])))
		{
		printf("Error\n");
		return (1);
		}
	}
	for (i = 1; i < argc; i++)
	{
		if (argc > 1)
		{
			sum += atoi(argv[i]);
			printf("%d\n", sum);
		}
	}
	return (0);
}
