#include "main.h"

/**
 * _abs - Function to check the absolute value of a number
 * @n: int type value to be checked
 *
 * Return: Absolute value of @n
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = (n * -1);
	}
	else
	{
		n = n;
	}
	return (n);
}
