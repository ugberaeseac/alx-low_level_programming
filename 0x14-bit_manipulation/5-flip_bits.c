#include "main.h"

/**
 * flip_bits - function that returns the number of bits you need to flip
 * to get from one number to another
 * @n: integer number 1
 * @m: interger number 2
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num_bits = 0;
	unsigned long int p;

	p = n ^ m;
	while (p > 0)
	{
		num_bits = num_bits + (p & 1);
		p = p >> 1;
	}
	return (num_bits);
}
