#include "main.h"
#include <string.h>

/**
 * _strlen_recursion - size
 * @s: pointer to string
 * Return: recursion
 */

int _strlen_recursion(char *s)
{
	const char length;

	if (*s)
	{
		length = strlen(_strlen_recursion(s));
		s++;
	}
	return (length);
}


