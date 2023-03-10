#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that multiplies two numbers passed as arguments
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	if (argc < 2 || argc > 3)
	{
		printf("Error\n");
	}
	else
	{
		printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	}
	return (0);
}
