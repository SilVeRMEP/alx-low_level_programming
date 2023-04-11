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
	int i, j, len = 0, index = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			len++;
			j++;
		}
		len++;

	str = (char *)malloc((len + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			str[index++] = av[i][j++];
		}
		str[index++] = ' ';
	}

	str[index] = '\0';

	return (str);
}
