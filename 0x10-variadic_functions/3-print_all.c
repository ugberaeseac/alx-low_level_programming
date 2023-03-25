#include "variadic_functions.h"

/**
 * print_all - function that prints any thing
 * @format: list of arguments passed to the function
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *comma = "";

	datatype select[] = {{'c', print_char},
					{'i', print_integer},
					{'f', print_float},
					{'s', print_string},
					{'\0', NULL}};

	va_list args;

	va_start(args, format);

	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (select[j].list != '\0')
		{
			if (select[j].list == format[i])
			{
				printf("%s", comma);
				select[j].fptr(args);
				comma = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}

/**
 * print_char - function that prints a char
 * @args: optional variable to print
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_integer - function that prints an integer
 * @args: optional variable to print
 */
void print_integer(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - function that prints a float
 * @args: optional variable to print
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - function that prints a string
 * @args: optional variable to print
 */
void print_string(va_list args)
{
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
		printf("(nil)");
		return;
	printf("%s", str);
}
