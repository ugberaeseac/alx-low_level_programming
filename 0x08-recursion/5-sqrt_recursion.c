#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural
 * square root of a number
 * @n: number to determine it square root
 *
 * Return: natural square root of n or -1 if n doesn't have
 * a natural swuare root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_get_root(n, 0));
}

/**
 * _get_root - function to that checks for the root of a number m
 * @m: number whose square root is to be determined with
 * @n: number to
 *
 * Return: natural square root of m or -1 if its not natural root
 */
int _get_root(int m, int n)
{
	if ((n * n) > m)
	{
		return (-1);
	}
	else if ((n * n) == m)
	{
		return (n);
	}
	return ((_get_root(m, n + 1)));
}
