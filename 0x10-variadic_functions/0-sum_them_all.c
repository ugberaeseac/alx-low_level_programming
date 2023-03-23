#include "variadic_functions.h"

/**
 * sum_them_all - function that returns sum of all its parameters
 * @n: number of parameters
 *
 * Return: always 0 success
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list sum;
	unsigned int i, result = 0;

	va_start(sum, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		result += va_arg(sum, int);
	}
	va_end(sum);
	return (result);
}
