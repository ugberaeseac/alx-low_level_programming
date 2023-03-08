#include "main.h"

/**
 * factorial - function that returns the factorial of a given number
 * @n: number to determine factorial
 *
 * Return: return factorial of n, -1 to indicate an error
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
