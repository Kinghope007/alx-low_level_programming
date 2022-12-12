#include <stdio.h>

/**
 * main - Print the lowercase alphabets
 * Description: followed by new line
 * Return: Always 0
 */

int main(void)
{
	int letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}
