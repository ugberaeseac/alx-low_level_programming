#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: integer
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int base_length = 0;
	unsigned long int temp, mask;

	temp = n;
	mask = 1;
	while (temp > 0)
	{
		temp = temp >> 1;
		base_length++;
	}
	base_length = base_length - 1;
	if (base_length > 0)
		mask = mask << base_length;

	while (mask > 0)
	{
		if (n & mask)
		{
			_putchar('0' + 1);
		}
		else
		{
			_putchar('0');
		}
		mask = mask >> 1;
	}
}


