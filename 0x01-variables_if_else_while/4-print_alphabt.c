#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print lowercase a-z excluding q and e
 *
 * Return: Always 0 (Success)
 */
int	main(void)
{
	char	L;

	L = 'a';
	while (L <= 'z')
	{
		if (L != 'e' && L != 'q')
			putchar(n);
		L++;
	}
	putchar('\n');
	return (0);
}
