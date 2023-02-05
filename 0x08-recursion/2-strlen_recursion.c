#include "main.h"
#include <string.h>

/**
 * _strlen_recursion - size
 * @s: pointer to string
 * Return: recursion
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}
	return (length);
}
