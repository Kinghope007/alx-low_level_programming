#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of intergers.
 * @a: arrary of intergers
 * @n: number of elements of array to be printed
 * Return: void.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("\n");
}
