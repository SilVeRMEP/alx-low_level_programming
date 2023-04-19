#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: pointer to a string containing the name
 * @f: pointer to a function that takes a char*
 *     parameter and returns void
 *
 * Description: This function prints a name by passing it to the function
 * pointed to by f.
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
