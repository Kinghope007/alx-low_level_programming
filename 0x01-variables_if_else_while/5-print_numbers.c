#include <stdio.h>

/**
 * main - Print numbers
 * Description: from 0 to 9
 * Return: Always (Success)
 */

int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
		printf("%d", number);
	printf("\n");

	return (0);
}
