#include <stdio.h>

/**
 * main - Entry point
 * Description: Print combination of numbers
 * Return: Always (Success)
 */

int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		int i;

		for (i = '0'; i <= '9'; i++)
		{
			if (c < i)
			{
				putchar(c);
				putchar(i);

				if (c != '8' || (c == '8' && i != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
