#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print a text according to value given and weather its greater than 5, less or 0
 * Return: Always (Success)
 */

int main(void)
{
	int n;
	int lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastd = n % 10;

	if (lasted > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, lastd);
	}
	else if (lastd == 0)
	{
		printf("last digit of %d is %d and is 0\n", n lastd);
	}
	else if (lastd < 6 && lastd != 0)
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n", n lastd);
	}

	return (0);
}
