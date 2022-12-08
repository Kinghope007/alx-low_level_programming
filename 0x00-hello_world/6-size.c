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

	printf("size of char: %lu byte(s)\n", sizeof(char));
	printf("size of int: %lu byte(s)\n", sizeof(int));
	printf("size of long int: byte(s)\n", sizeof(long int));
	printf("size of long long int: %lu byte(s)\n", sizeof(long long int));
	printf("size of float: %lu byte(s)\n", sizeof(float));
	return (0);
}
