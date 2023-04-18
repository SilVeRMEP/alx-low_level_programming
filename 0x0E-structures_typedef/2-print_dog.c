#include "dog.h"

/**
 * print_dog - Prints the contents of a struct dog.
 * @d: Pointer to a struct dog representing the dog to be printed.
 *
 * Return: None.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", (d->name == NULL ? "Name: (nil)" : d->name));
	printf("Age: %.2f\n", d->age);
	printf("Owner: %s\n", (d->owner == NULL ? "(nil)" : d->owner));
}
