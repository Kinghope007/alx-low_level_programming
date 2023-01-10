#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * str_concat - string concatinating function
 * @s1: string 1
 * @s2: string 2
 * Return: string 1 + string 2
 */

char *str_concat(char *s1, char *s2)
{
	int a = 0;
	int b = 0;
	int i = 0;
	int j = 0;
	char  *s;

	if (s1 ==  NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/** find length of str1  & str2*/
	while (s1[a])
		a++;
	while (s2[b])
		b++;
	/* +1 for our end of string character */
	s = (char *)malloc(1 * sizeof(char) + 1);
	if (s == NULL)
		return (NULL);

	/** add the first string to array s*/
	b = 0;
	while (j < i)
	{
		if (j < a)
			s[j] = s1[j];
		if (j >= a)
		{
			s[j] = s2[j];
			b++;
		}
		j++;
	}
	s[j] = '\0';
		return (s);
}
