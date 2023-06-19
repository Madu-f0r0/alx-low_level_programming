#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees a previously dynamically allocated memory for dog_t
 * @d: pointer to the memory to be freed
 */

void free_dog(dog_t *d)
{
	free(d);
}
