# include "main.h"

/**
 * _strncpy - Function that copies a string.
 * @dest: Arg 1.
 * @src: Arg 2.
 * @n: Arg 3.
 * Return: A pointer to the resulting string.
 */
char	*_strncpy(char *dest, char *src, int n)
{
	int	y;

	y = 0;
	while (src[y] && y < n)
	{
		dest[y] = src[y];
		y++;
	}
	while (y < n)
		dest[y++] = '\0';
	return (dest);
}
