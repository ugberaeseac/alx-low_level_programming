#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
#include <stdio.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list);
void print_integer(va_list);
void print_float(va_list);
void print_string(va_list);

/**
 * struct data - struct
 * @list: First member
 * @fptr: Second member
 */

/* datatype - Typedef for struct data */
typedef struct data
{
	char list;
	void (*fptr)(va_list);
}datatype;

#endif
