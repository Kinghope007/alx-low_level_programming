#include "main.h"

/**
 * _isupper - A function that checks for uppercase
 * @c: is the int used for the argument for the function
 * Return: 1 if uppercase character 0 if not
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}
