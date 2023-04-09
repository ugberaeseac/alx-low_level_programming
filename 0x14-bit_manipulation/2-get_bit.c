#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: integer
 * @index: index starting at 0
 *
 * Return: bit value at index if success, -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int total_bits;
	unsigned long int mask = 1;
	int value = 0;

	total_bits = (sizeof(unsigned long int) * 8);
	if (index > total_bits)
		return (-1);

	mask = mask << index;

	while (mask > 0)
	{
		if (n & mask)
		{
			value = 1;
			break;
		}
		else
		{
			value = 0;
			break;
		}
	}
	return (value);
}

