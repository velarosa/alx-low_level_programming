#include "dog.h"

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
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	};
}
