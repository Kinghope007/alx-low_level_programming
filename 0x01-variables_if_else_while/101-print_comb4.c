#include <stdio.h>

/**
 * main - Entry point
 * Description: Print 3 combination of numbers
 * Return: Alaways (Success)
 */

int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		int i;

		for (i = '0'; i <= '9'; i++)
		{
			int k;

			for (k = '0'; k <= '9'; K++)
			{
				if (c < i && i < k)
				{
					putchar(c);
					putchar(i);
					putchar(k);

					if (c != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
