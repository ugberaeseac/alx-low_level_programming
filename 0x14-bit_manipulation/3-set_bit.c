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
	unsigned long int temp;
	unsigned long int base_length = 0;

	temp = *n;

	while (temp > 0)
	{
		temp = temp >> 1;
		base_length++;
	}
	base_length = base_length - 1;

	if (index > base_length)
	{
		return (-1);
	}
	else
	{
		*n  |= (1 << index);
	}
	return (1);
}


