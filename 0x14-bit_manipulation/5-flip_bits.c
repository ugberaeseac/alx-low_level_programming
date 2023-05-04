#include "main.h"

/**
 * flip_bits - function that returns the number of bits needed to flip
 * to get from number 1 to number 2
 * @n: integer number 1
 * @m: integer number 2
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int p;
	unsigned long int num_bits = 0;

	p = n ^ m;
	while (p > 0)
	{
		num_bits = num_bits + (p & 1);
		p = p >> 1;
	}
	return (num_bits);
}
