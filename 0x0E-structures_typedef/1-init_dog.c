#include "dog.h"

/**
 * main - Entry point.
 *
 * Return: 0 on success.
 */
int main(void)
{
	struct dog my_dog;
	init_dog(&my_dog, "Buddy", 3.5, "John");

	printf("Dog's name: %s\n", my_dog.name);
	printf("Dog's age: %.1f\n", my_dog.age);
	printf("Dog's owner: %s\n", my_dog.owner);

	return 0;
}
