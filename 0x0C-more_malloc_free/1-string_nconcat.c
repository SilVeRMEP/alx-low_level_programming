#include "main.h"

/**
 * string_nconcat - Concatenates two strings with a limit on number
 * @s1: First string
 * @s2: Second string
 * @n: Maximum number of bytes to copy from s2
 *
 * Return: Pointer , or NULL if function fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatenated;
	unsigned int len1, len2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
		n = len2;

	concatenated = malloc(sizeof(char) * (len1 + n + 1));
	if (concatenated == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		concatenated[i] = s1[i];

	for (j = 0; j < n; j++, i++)
		concatenated[i] = s2[j];

	concatenated[i] = '\0';

	return (concatenated);
}
