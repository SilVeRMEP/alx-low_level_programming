#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc
 * @b: Size of memory to allocate
 *
 * Return: Pointer to the allocated memory
 * If malloc fails
 * the function causes normal process termination with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(98);
	}

	return (ptr);
}

int main(void)
{
	unsigned int size = 10;
	int *arr = malloc_checked(size * sizeof(int));

	free(arr);

	return (0);
}
