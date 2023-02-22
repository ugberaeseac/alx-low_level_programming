#include "main.h"

/**
 * print_last_digit - Function prints last digit of a number
 * @n: The int value to be checked
 *
 * Return:0 Success
 */
int print_last_digit(int n)
{
	int m;

	if (n < 0)
	{
		m = -1 * (n % 10);
		_putchar(m + '0');
		return (m);
	}
	else
	{
		m = n % 10;
		_putchar (m + '0');
		return (m);
	}
}
