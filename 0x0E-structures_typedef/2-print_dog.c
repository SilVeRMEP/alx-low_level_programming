#include "dog.h"

/**
 * print_dog - Prints the contents of a struct dog.
 * @d: Pointer to a struct dog representing the dog to be printed.
 *
 * Return: None.
 */
{
	if (d == NULL)
		return;

	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %.2f\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
