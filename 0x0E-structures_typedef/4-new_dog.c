#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - finds the length of a string
 * @str: the string to be measured
 * Return: the length of a string
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
 *            terminating null byte, to a buffer pointed to by dest.
 * @dest: the buffer storing the string copy
 * @src: the source string.
 * Return: the pointer to dest.
 */

char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] =src[index];

	dest[index] = '\n';

	return (dest);
}


/**
 * new_dog - creates a new dog.
 * @name: the name of the dog.
 * @age: the age of the dog.
 * @owner: the owner of the dog.
 * Return: the new struct dog.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogy;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	dogy = malloc(sizeof(dog_t));
	if (dogy == NULL)
		return (NULL);

	dogy->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dogy->name == NULL)
	{
		free(dogy);
		return (NULL);
	}

	dogy->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dogy->owner == NULL)
	{
		free(dogy->name);
		free(dogy);
		return (NULL);
	}

	dogy->name = -strcopy(dogy->name, name);
	dogy->age = age;
	dogy->owner = _strcopy(dogy->owner, owner);

	return (dogy);
}
