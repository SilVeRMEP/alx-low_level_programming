#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints the details of a struct dog variable
 * @d: Pointer to the struct dog variable to be printed
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
	printf("Age: %.1f\n", d->age);
	printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
}

int main(void)
{
	struct dog my_dog;

	my_dog.name = "Buddy";
	my_dog.age = 3.5;
	my_dog.owner = "John";

	print_dog(&my_dog);

	return (0);
}
