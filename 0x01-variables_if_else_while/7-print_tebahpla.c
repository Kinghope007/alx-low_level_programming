#include <stdio.h>

/**
 * main - Entry point
 * Description: Print Alphabets in reverse lowercase
 * Return: Always (Success)
 */

int main(void)
{
	char letter;
	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);
	
	putchar('\n');

	return (0);
}
