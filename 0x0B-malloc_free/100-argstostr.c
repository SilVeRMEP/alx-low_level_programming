#include "main.h"

/**
 * get_total_len - Calculates the length of the string.
 * @ac: The number of arguments.
 * @av: The array of arguments.
 *
 * Return: The total length of the concatenated string.
 */
int get_total_len(int ac, char **av)
{
	int i, len = 0, total_len = 0;

	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
		{
			len = strlen(av[i]);
			total_len += len;
		}
		else
		{
			return (-1);
		}
	}

	return (total_len);
}

/**
 * concatenate_args - Concatenates arguments with newlines.
 * @ac: The number of arguments.
 * @av: The array of arguments.
 * @str: The string to store the concatenated result.
 */
void concatenate_args(int ac, char **av, char *str)
{
	int i, j, len;

	for (i = 0, j = 0; i < ac; i++)
	{
		if (av[i] != NULL)
		{
			len = strlen(av[i]);
			strncpy(str + j, av[i], len);
			j += len;
			if (i < ac - 1)
			{
				str[j++] = '\n';
			}
		}
		else
		{
			return;
		}
	}

	str[j] = '\0';
}

/**
 * argstostr - Concatenates all the arguments of a program.
 * @ac: The number of arguments.
 * @av: The array of arguments.
 *
 * Return: A pointer to string containing the concatenated arguments,
 *         separated by newlines, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int total_len;

	if (ac == 0 || av == NULL)
		return (NULL);

	total_len = get_total_len(ac, av);

	if (total_len == -1)
		return (NULL);

	total_len += ac - 1;

	str = (char *)malloc(sizeof(char) * (total_len + 1));

	if (str == NULL)
		return (NULL);

	concatenate_args(ac, av, str);

	return (str);
}
