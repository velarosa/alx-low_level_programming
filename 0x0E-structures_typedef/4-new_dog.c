#include "dog.h"
#include <stdlib.h>


/**
 * _strlen - function that gets the size of a string.
 * @s: the string to get it's size.
 * Description: count from 0 up.
 *
 * Return: Alwyas (size) Success.
 */

int _strlen(const char *s)
{
	int size = 0;

	while (*s++)
		size++;
	return (size);
}

/* _____________________________________________*/

/**
 * _strcpy - a function that copies a string.
 * @dest: destination.
 * @src: source string.
 * Description: just copies it.
 *
 * Return: Always (dest) Success.
 */

char *_strcpy(char *dest, char *src)
{
	int n;

	for (n = 0; src[n]; n++)
		dest[n] = src[n];
	dest[n] = '\0';

	return (dest);
}
/* _____________________________________________*/

/**
 * dog_t *new_dog - a function that creats a new dog.
 * @name: name of the new dog.
 * @age: it's new age.
 * @owner: that guy from national geographic..
 * Description: creats a new dog.
 *
 * Return: struct of void_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dawg;

	if (name == NULL || age == 0 || owner == NULL)
		return (NULL);

	dawg = malloc(sizeof(dog_t));
	if (dawg == 0)
		return (0);

	(*dawg).name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dawg).name == NULL)
	{
		free(dawg);
		return (NULL);
	}

	(*dawg).owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*dawg).owner == NULL)
	{
		free(dawg);
		free((*dawg).name);
		return (NULL);
	}

	(*dawg).name = _strcpy((*dawg).name, name);
	(*dawg).age = age;
	(*dawg).owner = _strcpy((*dawg).owner, owner);

	return (dawg);
}
