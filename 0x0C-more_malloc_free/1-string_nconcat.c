#include "main.h"

/**
 * string_nconcat - Concatenates two strings
 * @s1: Pointer to the first string
 * @s2: Pointer to the second string
 * @n: Number of bytes to concatenate from s2
 *
 * Return: Pointer containing the concatenated string
 * If n is greater or equal to the length of s2
 *  then the entire string s2 is concatenated
 * If NULL is passed as s1 or s2, treat it as an empty string
 * If malloc fails or if the function fails, it returns NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatenated;
	unsigned int s1_len, s2_len, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1_len = strlen(s1);
	s2_len = strlen(s2);

	if (n >= s2_len)
		n = s2_len;

	concatenated = malloc(sizeof(char) * (s1_len + n + 1));

	if (concatenated == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
		concatenated[i] = s1[i];

	for (j = 0; j < n; j++, i++)
		concatenated[i] = s2[j];

	concatenated[i] = '\0';

	return (concatenated);
}

int main(void)
{
	char s1[] = "Hello";
	char s2[] = "World";
	unsigned int n = 3;

	char *result = string_nconcat(s1, s2, n);

	if (result != NULL)
	{
		printf("Concatenated string: %s\n", result);
		free(result);
	}

	return (0);
}
