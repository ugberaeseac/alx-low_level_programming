#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals matrix
 * @a: The square matrix
 * @size: size of matrix
 *
 * return:
 */
void print_diagsums(int *a, int size)
{
	int i, sum = 0, sum1 = 0;

	for (i = 0; i < size; i++)
	{
		sum = sum + a[i];
		a = a + size;
	}

	a = a - size;

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + a[i];
		a = a - size;
	}

	printf("%d, %d\n", sum, sum1);
}
