#include "dog.h"

/**
 * init_dog - Initializes a struct dog variable
 * @d: Pointer to the struct dog variable to be initialized
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL || name == NULL || owner == NULL)
	{
		printf("Error: Invalid input\n");
		return;
	}

	strncpy(d->name, name, sizeof(d->name) - 1);
	d->name[sizeof(d->name) - 1] = '\0';
	d->age = age;
	strncpy(d->owner, owner, sizeof(d->owner) - 1);
	d->owner[sizeof(d->owner) - 1] = '\0';

int main(void)
{
	struct dog my_dog;

	init_dog(&my_dog, "Buddy", 3.5, "John");

	printf("Name: %s\n", my_dog.name);
	printf("Age: %.1f\n", my_dog.age);
	printf("Owner: %s\n", my_dog.owner);

	return (0);
}
