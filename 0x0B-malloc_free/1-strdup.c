#include <stdlib.h>
/**
 * _strdup - this is a function that duplicates astring
 * @str: a string to be duplicated
 * Return: a string (Success), NULL (error)
 */

char *_strdup(char *str)
{
	int i = 1;
	int j = 0;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[i])
		i++;
	s = (char *)malloc(i * sizeof(char) + 1);

	if (s == NULL)
		return (NULL);
	while (j < i)
	{
		s[j] = str[j];
			j++;
	}
	s[j] = '\0';
	return (s);
}
