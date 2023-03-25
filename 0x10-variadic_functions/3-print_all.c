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

/* struct_datatype - Typedef for unsigned int */
	struct_datatype select[] = {{'c', print_char},
					{'i', print_integer},
					{'f', print_float},
					{'s', print_string},
					{'\0', NULL},};
	valist args;

	va_start(args, format);

	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (select[j].list != '\0')
		{
			if (select[j].list == format[j])
			{
				printf("%s", comma);
				select[j].fptr(valist);
				comma = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(args);
	prinf("\n");
}

/**
 * print_char - function that prints a char
 * @valist: datatype of optional variable to print
 */
void print_char(valist)
{
	printf("%c", va_arg(args, int);
}

/**
 * print_integer - function that prints an integer
 * @valist: datatype of optional variable to print
 */
void print_integer(valist)
{
	printf("%i", va_arg(args, int);
}

/**
 * print_float - function that prints a float
 * @valist: datatype of optional variable to print
 */
void print_float(valist)
{
	printf("%f", va_arg(args, int);
}

/**
 * print_string - function that prints a string
 * @valist: datatype of optional variable to print
 */
void print_string(valist)
{
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
		printf("(nil");
	printf("%s", str);
}
