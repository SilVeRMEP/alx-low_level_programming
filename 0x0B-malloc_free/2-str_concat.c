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
	int len1, len2, index;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	result = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);

	for (index = 0; index < len1; index++)
		result[index] = s1[index];

	for (int i = 0; i < len2; i++, index++)
		result[index] = s2[i];

	result[index] = '\0';

	return (result);
}
