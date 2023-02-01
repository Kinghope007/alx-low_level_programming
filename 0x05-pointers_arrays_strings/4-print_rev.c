#include "main.h"

/**
 * print_rev - print string backwards
 * @s: string
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	while (i--)
	{
		_putchar(str[i]);
		i--;
	}

	_putchar('\n');
}
