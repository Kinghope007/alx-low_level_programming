#include <stdio.h>

/**
 * main - Print the alpabets in lower case.
 * Return; Always (Success)
 */

int main(void)
{
	char letter;

	for(letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
