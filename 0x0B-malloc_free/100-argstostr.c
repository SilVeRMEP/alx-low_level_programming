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
	int i, j, len = 0, total_len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len = 0;
		while (av[i][len])
			len++;
		total_len += len + 1;
	}

	str = (char *)malloc(total_len * sizeof(char));

	if (str == NULL)
		return (NUL)L;

	for (i = 0, j = 0; i < ac; i++)
	{
		len = 0;
		while (av[i][len])
		{
			str[j++] = av[i][len++];
		}
		str[j++] = '\n';
	}
	str[j] = '\0';

	return (str);
}

