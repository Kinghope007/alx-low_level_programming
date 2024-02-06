#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - search for a value in an array if intergers
 * @array: pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: value to search for
 *
 * Return: The first index == value or -1 if NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value Checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return i;
	}
	return (-1);
}
