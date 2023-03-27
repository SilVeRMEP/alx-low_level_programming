#include "main.h"

/**
 * puts2 - prints a every other char in a string starting from 1st
 * @str: the string
 */

void	puts2(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (i % 2 == 0)
			write(1, str + i, 1);
		i++;
	}
	write(1, "\n", 1);
}
