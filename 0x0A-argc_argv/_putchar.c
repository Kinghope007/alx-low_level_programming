#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 * Return: on success.
 * on error, -1 is rerurn, and errno is set appr.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
