#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - Search for a value in a sorted array of integers
 * @array: Pointer to the first elemet of the array to search
 * @size: Number of elemets in the array
 * @value: value to search
 *
 * Return: The index where value is located, or -1 if NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, mid, i;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i == left)
				printf("%d", array[0]);
			else
				printf(", %d", array[i]);
		}
		printf("\n");

		mid = (left + right) / 2;

		if (array[mid] == value)
			return mid;

		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}
