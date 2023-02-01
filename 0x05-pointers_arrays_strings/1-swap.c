#include "main.h"

/**
 * swap_int -swap the values of two integers
 * @a: pointer 1
 * @b: pointer 2
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp; /* temp is an extra interger used for swapping */

	temp = *a;
	*a = *b;
	*b = temp;
}
