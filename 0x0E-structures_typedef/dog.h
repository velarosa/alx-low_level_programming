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
/*_________________*/
void init_dog(struct dog *d, char *name, float age, char *owner);
/* _______________*/
void print_dog(struct dog *d);
/*_________________*/
typedef struct dog dog_t;
/*______________*/
dog_t *new_dog(char *name, float age, char *owner);
/*_________________*/
void free_dog(dog_t *d);
#endif
