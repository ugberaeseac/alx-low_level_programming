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
	int product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		product = (atoi(argv[1]) * atoi(argv[2]));
		printf("%d\n", product);
	}
	return (0);
}
