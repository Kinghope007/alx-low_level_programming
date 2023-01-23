#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Entry point
 * Description: function to print a-z
 * Return: 0
 */

void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
