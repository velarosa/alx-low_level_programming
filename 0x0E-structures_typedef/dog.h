#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct for a dog
 * @name: dog name
 * @age: its age
 * @owner: its owner
 *
 * Description: Longer description
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
