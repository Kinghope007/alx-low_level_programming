#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: the int to extract the last digit from
 * Return: value of the laast digit
 */

int print_last_digit(int n)
{
	int lastdigit;

	if (n < 0)
	{
		lastdigit = (-1 * (n % 10));
		_putchar(lastdigit + '0');
		return (lastdigit);
	}
	else
	{
		lastdigit = (n % 10);
		_putchar(lastdigit + '0');
		return (lastdigit);
	}
}
