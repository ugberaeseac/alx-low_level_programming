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
	 int i;
	 int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	
	for (i = 1; i < argc; i++)
	{
		if (argc > 1)
		{
			sum += atoi(argv[i]);
			printf("%d\n", sum);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	return (0);
}
