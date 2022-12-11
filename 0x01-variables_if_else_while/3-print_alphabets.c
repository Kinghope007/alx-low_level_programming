#include <stdio.h>

/**
 * main - Entry point
 * Description: Print the alphabets in upper case
 * Return: Always (Success)
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
