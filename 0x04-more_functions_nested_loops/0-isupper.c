#include "main.h"

/**
 * _isupper - A function that chescks for uppercase characters
 * @c: An input character
 * Return: 1 if c is uppercase or 0 otherwise
 */

int _isuppper(int c)
{
	char uppercase = 'A';
	
	for (; uppercase <= 'z'; uppercase++)
	{
		if (c == uppercase)
		{
			int isupper;

			isupper = 1;
			break;
		}
	}

	return (0);
}
