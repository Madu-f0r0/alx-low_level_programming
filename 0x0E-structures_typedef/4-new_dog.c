#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: struct dog; NULL if error occurs
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;
	int i, namelen, ownerlen;

	n_dog = malloc(sizeof(n_dog));
	if (n_dog == NULL)
	{
		free(n_dog);
		return (NULL);
	}

	for (namelen = 0; name[namelen]; namelen++)
		;
	for (ownerlen = 0; owner[ownerlen]; ownerlen++)
		;

	n_dog->name = malloc(namelen + 1);
	n_dog->owner = malloc(ownerlen + 1);

	if ((n_dog->name) == NULL || (n_dog->owner) == NULL)
	{
		free(n_dog->name);
		free(n_dog->owner);
		free(n_dog);
		return (NULL);
	}
	for (i = 0; i < namelen; i++)
		n_dog->name[i] = name[i];
	n_dog->name[i] = '\0';

	n_dog->age = age;

	for (i = 0; i < ownerlen; i++)
		n_dog->owner[i] = owner[i];
	n_dog->owner[i] = '\0';

	return (n_dog);
}
