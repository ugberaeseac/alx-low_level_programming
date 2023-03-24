#include "variadic_functions.h"

/**
 * print_all - function that prints any thing
 * @format: list of arguments passed to the function
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list print;
	char *s;
	int i = 0;




