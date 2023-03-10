#include <stdio.h>

/**
 * main - Program that multiplies two numbers passed as arguments
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	if (argc == 1 || argc > 3)
	{
		printf("Error\n");
	}
	else
	{
		printf("%d\n", (argv[1] * argv[2]));
	}
	return (0);
}
