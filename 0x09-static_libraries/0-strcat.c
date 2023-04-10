# include "main.h"

/**
 * _strcat - Function that concatenates two strings.
 * @dest: Arg 1.
 * @src: Arg 2.
 * Return: A pointer to the resulting string.
 */
char	*_strcat(char *dest, char *src)
{
	int	i;
	int	y;

	i = 0;
	y = 0;
	while (dest[i])
		i++;
	while (src[y])
		dest[i++] = src[y++];
	dest[i] = '\0';
	return (dest);
}
