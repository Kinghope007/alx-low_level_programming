#include <stdio.h>

/**
 * main - Entry point
 * Print numbers 0 - 9
 * Description: using putchar only
 * Return: Alwys 0
 */

int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
		putchar((number % 10) + '0');

	putchar('\n');

	return (0);
}
