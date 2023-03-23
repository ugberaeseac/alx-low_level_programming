#include "variadic_functions.h"

/**
 * print_numbers - function that print numbers followed by a new line
 * @separator: The string to be printed between numbers
 * @n: number of integers passed to functions
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, int));
		if (i != (n - 1) && separator != (NULL))
			printf("%s", separator);
	}
	va_end(numbers);
	printf("\n");
}
