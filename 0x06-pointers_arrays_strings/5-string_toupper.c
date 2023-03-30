# include "main.h"

/**
 * string_toupper - function that changes all
 * lowercase letters of a string to uppercase.
 * @a: Arg 1.
 * Return: A pointer to the resulting string.
 */
char	*string_toupper(char *a)
{
	char	*n;

	n = a;
	while (*a)
	{
		if (*a >= 'a' && *a <= 'z')
			*a = *a - ('a' - 'A');
		a++;
	}
	return (n);
}
