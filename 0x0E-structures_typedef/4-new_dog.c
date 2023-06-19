#include "dog.h"
#include <stdlib.h>
#include <string.h>

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

	if (name == NULL)
		newDog->name = NULL;
	else
	{
		newDog->name = malloc((strlen(name) + 1) * sizeof(char));
		strcpy(newDog->name, name);
	}
	if (owner == NULL)
		newDog->owner = NULL;
	else
	{
		newDog->owner = malloc((strlen(owner) + 1) * sizeof(char));
		strcpy(newDog->owner, owner);
	}
	newDog->age = age;
	return (newDog);
}
