# include "main.h"

/**
 * rot13 - function that encodes a string using rot13.
 * @s: Arg 1.
 * Return: A pointer to the resulting string.
 */
char	*rot13(char *s)
{
	char	*a;
	char	*b;
	int		i;
	int		j;

	a = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	b = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	i = 0;
	while (s[i])
	{
		j = 0;
		while (a[j])
		{
			if (s[i] == a[j])
			{
				s[i] = b[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
