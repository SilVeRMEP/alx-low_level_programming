#include "dog.h"

/**
 * new_dog - Creates a new struct dog and initializes its members.
 * @name: the name of the dog.
 * @age: the age of the dog.
 * @owner:  the owner of the dog.
 *
 * Return: Pointer , or NULL if memory allocation fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	char *newName, *newOwner;
	int nameLen, ownerLen;

	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);

	nameLen = strlen(name);
	ownerLen = strlen(owner);

	newName = malloc((nameLen + 1) * sizeof(char));
	if (newName == NULL)
	{
		free(newDog);
		return (NULL);
	}

	newOwner = malloc((ownerLen + 1) * sizeof(char));
	if (newOwner == NULL)
	{
		free(newName);
		free(newDog);
		return (NULL);
	}

	strcpy(newName, name);
	strcpy(newOwner, owner);

	newDog->name = newName;
	newDog->age = age;
	newDog->owner = newOwner;

	return (newDog);
}
