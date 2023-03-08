#include "main.h"

/**
 * is_prime_number - function that checks if an input integer is a prime number
 * @n: input integer
 *
 * Return: 1 if n is a prime number, otherwise 0
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n == div)
	{
		return (1);
	}
	return (_check_prime(n, div));
}

/**
 * _check_prime - function to check for prime number
 * @p: number to check if prime
 * @q: int divisor
 *
 * Return: 1 if prime, 0 if otherwise
 */
int _check_prime(int p, int q)
{
	if (p < 2 || p % q == 0)
	{
		return (0);
	}
	if (q > p / 2)
	{
		return (1);
	}
return ((_check_prime(p, q + 1)));
}

