#include "variadic_functions.h"

/**
 * print_strings - function that prints string followed by a new line
 * @separator: string to be printed inbetween stirngs
 * @n: number of strings
 *
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *s;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(strings, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(strings);
	printf("\n");
}
