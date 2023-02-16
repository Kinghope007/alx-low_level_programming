#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - find the length of a string.
 * @str: the string to be measured.
 *
 * Return: the length of the string.
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;
	return (len);
}

/**
 * _strcopy - copies a string pointed to by src, including the
 * terminating null byte, to a buffer pointer to by dest.
 * @dest: the buffer storinh the string copy.
 * @src: the source string.
 *
 * Return: the pointer to dest.
 */
char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];
	dest[index] = '\0';
	return (dest);
}

/**
 * new_dog - new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: the owner of the dog
 *
 * Return: the new struct dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0, j = 0, k;
	dog_t *doge;

	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;
	doge = malloc(sizeof(dog_t));
	if (doge == NULL)
	{
		free(doge->name);
		free(doge);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		doge->name[k] = name[k];
	doge->age = age;
	doge->owner = malloc(j * sizeof(doge->owner));
	if (doge->owner == NULL)
	{
		free(doge->owner);
		free(doge->name);
		free(doge);
		return (NULL);
	}
	for (k = 0; k <= j; k++)
		doge->owner[k] = owner[k];
	return (doge);
}
