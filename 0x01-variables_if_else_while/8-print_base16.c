#include <stdio.h>

/**
 * main - Print all numbers in base 16
 * Description: followed by a new line
 * Return: Always 0
 */

int main(void)
{
	int number;
	char letter;

	for (number = 0; number < 10; number++)
		putchar((number % 10) + '0');

	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
