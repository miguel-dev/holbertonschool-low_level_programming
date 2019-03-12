#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to a dog structure.
 * @name: name of dog.
 * @age: age of dog.
 * @owner: owner of dog.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (name != 0)
		d->name = name;
	d->age = age;
	if (owner != 0)
		d->owner = owner;
}
