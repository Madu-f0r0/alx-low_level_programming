#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new object of dog_t
 * @name: the name element of the struct
 * @age: the age element of the struct
 * @owner: the owner element of the struct
 *
 * Return: a pointer to the new dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;

	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
	{
		return (NULL);
	}

	newDog->name = name;
	newDog->age = age;
	newDog->owner = owner;

	return (newDog);
}
