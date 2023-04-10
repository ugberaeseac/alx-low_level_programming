#include "main.h"

/**
 * get_endianness - function that check the endianness
 *
 * Return: 0 if big endian 1 if little endian
 */
int get_endianness(void);
{
	int num;
	char *c;

	num = 0x00000001;
	c = (char *)&num;

	return (c[0]);
}

