#include "main.h"

/**
 * swap_int -swap the values of two integers
 * @m: pointer 1
 * @n: pointer 2
 * Return: void
 */

void swap_int(int *a, int *b)
{
	a = &b;
	b = &a;
}
