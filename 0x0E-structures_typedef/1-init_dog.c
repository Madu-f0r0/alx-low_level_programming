#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * init_dog - initializes a given struct with given parameters
 * @d: a pointer to the struct dog
 * @name: value to initialize the struct name element to
 * @age: value to initialize the struct age element to
 * @owner: value to initialize the struct owner element to
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (name == NULL || age == 0 || owner == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
