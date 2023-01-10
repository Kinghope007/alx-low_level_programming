#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments of the program into a string;
 * argument are aeperated by a new line in the string.
 * @ac: the number of arguments passed to the program.
 * @av: an array of pointers to the arguments.
 * Return: If a == 0, av == NULL, or the function fails - NULL.
 * other wise - a pointer to the new string.
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int arg, bytes, index, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (arg = 0; arg < ac; arg++)
	{
		for (bytes = 0; av[arg][bytes]; bytes++)
			size++;
	}

	str = malloc(sizeof(char) * size + 1);

	if (str == NULL)
		return (NULL);

	index = 0;

	for (arg = 0; arg < ac; arg++)
	{
		for (bytes = 0; av[arg][bytes]; bytes++)
			str[index++] = av[arg][bytes];

		str[index++] = '\n';
	}

	str[size] = '\0';

	return (str);
}
