#include "main.h"

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The number of arguments.
 * @av: An array of strings containing the arguments.
 *
 * Return: A pointer to a new string containing the concatenated arguments,
 * separated by newlines (\n), or NULL on failure.
 */
char *argstostr(int ac, char **av)
{
	if (ac == 0 || av == NULL)
		return (NULL);

	int total_length = 0;

	for (int i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);
		total_length += strlen(av[i]) + 1;
	}

	char *result = (char *)malloc((total_length + 1) * sizeof(char));

	if (result == NULL)
		return (NULL);

	int index = 0;

	for (int i = 0; i < ac; i++)
	{
		strcpy(result + index, av[i]);
		index += strlen(av[i]);
		result[index++] = '\n';
	}
	result[total_length] = '\0';

	return (result);
}
