#include "main.h"

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to a newly allocated space in memory containing the concatenated
 * strings, or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0, index = 0;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	concat = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	if (concat == NULL)
		return (NULL);

	for (index = 0; index < len1; index++)
		concat[index] = s1[index];
	for (int i = 0; i < len2; i++, index++)
		concat[index] = s2[i];

	concat[index] = '\0';

	return (concat);
}
