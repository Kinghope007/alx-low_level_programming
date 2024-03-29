#include <stdio.h>

/**
 * main - Print all possible combination of two two digit
 * Description: ranging from 0-99, seperated by a coma then space
 * Return: Always 0
 */

int main(void)
{
	int number1;

	for (number1 = 0; number1 <= 98; number1++)
	{
		int number2;

		for (number2 = number1 + 1; number2 <= 99; number2++)
		{
			putchar((number1 / 10) + '0');
			putchar((number1 % 10) + '0');
			putchar(' ');
			putchar((number2 / 10) + '0');
			putchar((number2 % 10) + '0');

			if (number1 == 98 && number2 == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
