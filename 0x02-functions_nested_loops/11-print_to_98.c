#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Functions prints natural numbers n to 98
 * @n: the int argument
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}

	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}

	if (n == 98)
		printf("%d", n);

	printf("\n");
}
