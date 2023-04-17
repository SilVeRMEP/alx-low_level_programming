#include "dog.h"

/**
 * free_dog - Frees the memory allocated for a struct dog.
 * @d: Pointer to a struct dog to be freed.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
