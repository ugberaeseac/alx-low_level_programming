#include "main.h"

/**
 * swap_int - function that swaps two integers
 * @a: variable to be swapped
 * @b: variable to be swapped
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
