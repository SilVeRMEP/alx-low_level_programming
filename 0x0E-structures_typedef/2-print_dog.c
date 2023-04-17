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

	FILE *stream = stdout;

	if (d->name == NULL)
		fprintf(stream, "Name: (nil)\n");
	else
		fprintf(stream, "Name: %s\n", d->name);

	fprintf(stream, "Age: %.2f\n", d->age);

	if (d->owner == NULL)
		fprintf(stream, "Owner: (nil)\n");
	else
		fprintf(stream, "Owner: %s\n", d->owner);
}
