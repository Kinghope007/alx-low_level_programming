#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;
	int i;
	long int l;
	long long int ll;
	float f;

	printf("size of char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("size of int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("size of long int: %lu byte(s)\n", (unsigned long)sizeof(l));
	printf("size of long long int: %lu byte(s)\n", (unsigned long)sizeof(ll));
	printf("size of float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
