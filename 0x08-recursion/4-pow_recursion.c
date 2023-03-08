#include "main.h"

/**
 * _pow_recursion - function that returns x raised to the power y
 * @x: number to be raised
 * @y: power to be raised to
 *
 * Return: the value of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
