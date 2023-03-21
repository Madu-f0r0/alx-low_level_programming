#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees dog_t
 * @d: variable containing dog's information
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
