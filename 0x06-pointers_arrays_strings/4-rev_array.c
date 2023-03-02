#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of integers
 * @a: an arry of integers
 * @n: number of elements of the array
 *
 * Return (a)
 */
void reverse_array(int *a, int *n)
{
	int i;
	int k;

	for (i = 0; i <= n / 2; i++)
	{
		a[i] = k;
		a[i] = a[n - i];
		a[n - i] = k;
	}
return (a);
}
