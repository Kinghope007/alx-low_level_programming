#include "main.h"

/**
 * print_most_numbers - print 0 - 9
 * description: except 2 and 4
 * return: void
 */

void print_most_numbers(void)
{
	int a = 0;

	while (a <= 9)
	{
		if (a != 2 && a != 4)
		{
			_putchar(a + '0');
		}
		a++;
	}
	_putchar('\n');
}
