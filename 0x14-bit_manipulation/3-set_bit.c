#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1
 * of a given index
 * @n: integer
 * @index: index starting from 0 from LSB
 * Return: 1 if success -1 if failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int total_bits;

	total_bits = (sizeof(unsigned long int) * 8);

	if (index > total_bits)
	{
		return (-1);
	}
	else
	{
		*n  |= (1 << index);
	}
	return (1);
}


