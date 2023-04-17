#include "dog.h"

/**
 * main - Entry point.
 *
 * Return: 0 on success.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
