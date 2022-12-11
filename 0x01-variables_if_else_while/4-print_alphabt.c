#include <stdio.h>

/**
 * main - Print the letter of the alpahbets
 * Description: in lower case and without q and e
 * Return: Always (Success)
 */

int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}

	putchar('\n');

	return (0);
}
