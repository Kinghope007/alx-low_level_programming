#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct format - data type of a format.
 * _putchar - writes the character c to stdout
 * @c: the character to print
 * @op: format.
 * @f: function.
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

typedef struct format
{
	char *op;
	void (*f)(va_list all);
}

int _putchar(char c)
{
	return (write(1, &c, 1));
}
#endif
