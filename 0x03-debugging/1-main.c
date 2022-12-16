#include <stdio.h>

/**
 * main - causes an infinite loop
 * Return: 0
 */

int main(void)
{
	int i;

	prntf("Infinite loop incoming :(\n");

	i = 0;

	while (i < 0)
	{
		putchar(i);
	}

	prinf("Infinite loop avoided! \\o/\n");

	return (0);
}
