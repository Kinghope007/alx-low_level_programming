#include "main.h"

/**
 * print_rev - print string backwards
 * @s: string
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}

	while (i--)
	{
		_putchar(s[i]);
		i--;
	}

	_putchar('\n');
}
