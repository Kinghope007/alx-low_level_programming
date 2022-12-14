#include "main.h"

/**
 * times_table - Entry point
 * Description: Print the 9 times table
 * return: Always 0
 */

void times_table(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i < 10; i++)
	{
		int j;
		for (j = 0; j < 10; j++)
	}
	k = j * i;
	if (j == 0)
	{
		_putchar(k + '0');
	}
	if (k < 10 && j != 0)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(k + '0');
		{
			else if (k >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
