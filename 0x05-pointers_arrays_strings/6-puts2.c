#include "main.h"
#include <string.h>

/**
 * puts2 - print eve3ry other character of a string
 * @str: string to be printed
 * Return: nothing
 */
void puts2(char *str)
{
	int i;
	int length;

	length = strlen(str);
	for (i = 0; i < length; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
