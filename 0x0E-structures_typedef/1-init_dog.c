#include "main.h"
#include <stdio.h>

/**
 * init_dog - function that initialize a veriable of type struct dog.
 * @d: function name.
 * @name: name of the dog inside the struct.
 * @age: age of the dog.
 * @owner: owner of the dog.
 * Description: function that creats a struct.
 *
 * Return: Always (void) Success.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct User d;

	d = malloc(sizeof(struct User));
	if (user == NULL)
		return (NULL);

	user->name = name;
	user->age = age;
	user->owner = owner;

	return (user);
}
