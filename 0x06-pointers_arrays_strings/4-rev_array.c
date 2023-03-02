#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of integers
 * @a: an arry of integers
 * @n: number of elements of the array
 *
 * Return nothing
 */
void reverse_array(int *a, int n)
{
	int i;
	int k;

	for (i = 0; i < (n / 2); i++)
	{
		k = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = k;
	}
}
